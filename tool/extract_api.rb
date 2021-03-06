#!/usr/bin/env ruby
# coding: utf-8

require 'digest/md5'

class FunctionArgument
  attr_reader :type
  attr_reader :name


  def initialize(argument_decl)
    token_list = argument_decl.split(' ')
    if token_list.length == 1 then
      @type = token_list[0]
      @name = ''
    else
      @type = token_list.reverse.drop(1).reverse.join(' ')
      @name = token_list.reverse.first
    end
  end

  def to_s
    @type
  end
end


class FunctionSignature
  attr_reader :return_type
  attr_reader :arguments
  attr_reader :name
  attr_accessor :available_for_64bit

  def initialize(function_symbol)
    function_symbol.gsub!(/\)$/, '')
    return_type_and_name, arguments = function_symbol.gsub(/\)$/, '').split('(')
    @name = return_type_and_name.split(' ').reverse.first
    if @name.start_with?('Mac') then
      @name = @name.slice(3...@name.length)
    end
    @return_type = return_type_and_name.split(' ').reverse.drop(1).reverse.join(' ')

    argument_list = arguments.split(',')
    if argument_list.length == 1 and argument_list[0] == 'void' then
      @arguments = []
    else
      @arguments = argument_list.map { |argument|
        FunctionArgument.new(argument)
      }
    end

    @available_for_64bit = false
  end


  def to_s
    arguments = @arguments.map { |_| _.to_s }.join(', ')
    "#{@return_type} #{@name}(#{arguments})"
  end


  def <=>(other)
    compare(other)
  end


  def compare(other)
    if @name === other.name then
      argument_list <=> other.argument_list
    else
      @name <=> other.name
    end
  end

  def fakeqd_name
    "#{FAKEQD_PREFIX}#{@name}"
  end


  def argument_list
    get_argument_list(false)
  end


  def argument_list_with_name
    get_argument_list(true)
  end


  def argument_list_without_type
    (0...arguments.count).map { |_| "a#{_}"}.join(', ')
  end

  private

  FAKEQD_PREFIX = 'fakeQD_'

  def get_argument_list(with_name)
    if with_name then
      index = -1
      @arguments.map { |_| index = index + 1; "#{_.to_s} a#{index}" }.join(', ')
    else
      @arguments.map { |_| _.to_s }.join(', ')
    end
  end
end


def remove_space(s)
  while true
    replaced = s.gsub(/  /, ' ')
    break if replaced == s
    s = replaced
  end
  s
end


def get_header_contents(draw_api_header_list, remove_32bit_only = false)
  contents = ''
  draw_api_header_list.each { |file|
    defineLP64 = "-D__LP64__=#{remove_32bit_only ? 1 : 0}"
    contents << `cat "#{file}" | grep -v '#include' | cpp #{defineLP64} 2>/dev/null`
      .force_encoding('MacRoman')
      .encode('UTF-8')
  }
  contents
end


def extract_enums(draw_api_header_list)
  contents = get_header_contents(draw_api_header_list)

  enums = []
  contents
    .scan(/enum {([^{]+?)}/m).map { |e|
      e.first
    }
    .each { |e|
      e.lines.each { |_|
        enums << _.chomp
      }
    }

  hash = {}

  enums
    .map { |e|
      e = e
        .gsub(/(\t)/, ' ')
        .gsub(/^[ ]*/, '')
        .gsub(/\/\*.+?\*\//, '')
        .gsub(/,/, '')
      e = remove_space(e)
    }
    .select { |e|
      e.length > 0
    }
    .each { |e|
      name, value = e.split('=', 2)
      hash[name.strip] = value.strip
    }

  hash
end


def extract_extern_function_symbols(draw_api_header_list)
  symbols_available_for_64bit = do_extract_extern_function_symbols(draw_api_header_list, true)
  symbols_all = do_extract_extern_function_symbols(draw_api_header_list, false)
  symbols_all.each { |s|
    s.available_for_64bit = (not (symbols_available_for_64bit.find { |_| _.compare(s) == 0 }).nil?)
  }
  symbols_all
end


def do_extract_extern_function_symbols(draw_api_header_list, remove_32bit_only)
  contents = get_header_contents(draw_api_header_list, remove_32bit_only)

  function_symbols = contents
    .scan(/extern[^{]+?;/m).map { |func_sig|
      func_sig = func_sig
        .gsub(/(\r|\n|\r\n|\t)/, ' ')
        .gsub(/^extern /, '')
        .gsub(/AVAILABLE_[A-Z0-9_]*/, '')
        .gsub(/\/\*.+?\*\//, '')
        .gsub(/\*/, ' * ')

      func_sig = remove_space(func_sig)

      func_sig
        .gsub(/\( /, '(')
        .gsub(/ \(/, '(')
        .gsub(/ \)/, ')')
        .gsub(/\) /, ')')
        .gsub(/;$/, '')
    }
    .uniq

  api_list = function_symbols.map { |function_symbol|
    FunctionSignature.new(function_symbol)
  }
  .sort

  removed_type_list = [
    'Cursor',
    'PenState',
    'QDProcs',
    'CCrsrHandle',
    'ReqListRec',
    'DeviceLoopFlags',
    'CursHandle',
    'CustomXFerProcPtr',
    'QDRegionBitsRef',
    'QDXSystemCursorID',
    'ITabHandle',
    'DeviceLoopDrawingUPP',
    'DeviceLoopDrawingProcPtr',
  ]
  api_list.select { |s|
    decl = s.to_s
    removed_type_list.all? { |type|
      not (decl =~ /\b#{type}\b/)
    }
  }
end


def print_header(file_handle, qd_api_headers)
  file_handle.puts <<'EOT'
/*
 * Copyright (c) 2014 kbinani
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
EOT
  file_handle.puts '/*'
  file_handle.puts ' * This file is automatically generated using tool/extract_api.rb at'
  file_handle.puts ' * https://github.com/kbinani/fakeQD,'
  file_handle.puts ' * with following command:'
  file_handle.puts " * $ ruby #{$PROGRAM_NAME} #{qd_api_headers.join(' ')}"
  file_handle.puts ' *'
  file_handle.puts ' * md5sum of files:'
  qd_api_headers.each { |header|
    md5 = Digest::MD5.file(header).to_s
    file_handle.puts " * #{header}"
    file_handle.puts " *   #{md5}"
  }
  file_handle.puts ' *'
  file_handle.puts ' * (retired) API reference is here:'
  file_handle.puts ' * https://developer.apple.com/legacy/library/documentation/Carbon/reference/QuickDraw_Ref/QuickDraw_Ref.pdf'
  file_handle.puts ' */'
end


def print_each_symbol(function_symbols, file_handle, &block)
  function_symbols.select { |s|
    s.available_for_64bit
  }.each { |s|
    block.call(s)
  }
  file_handle.puts '#if !__LP64__'
  function_symbols.select { |s|
    not s.available_for_64bit
  }.each { |s|
    block.call(s)
  }
  file_handle.puts '#endif /* !__LP64__ */'
end


def main(qd_api_headers)
  function_symbols = extract_extern_function_symbols(qd_api_headers)
  enums = extract_enums(qd_api_headers)
  dir = File.dirname(File.expand_path(__FILE__))

  open("#{dir}/../include/fakeQD.h", 'w') { |f|
    print_header(f, qd_api_headers)
    f.puts '#pragma once'
    f.puts '#include <ApplicationServices/ApplicationServices.h>'

    f.puts '#if ! defined(__QUICKDRAWAPI__)'

    print_each_symbol(function_symbols, f) { |s|
      f.puts "#define #{s.name} #{s.fakeqd_name}"
    }

    macro_defined_functions = [
      'SetPort',
      'SetCursor',
      'ShowCursor',
      'LineTo',
      'SetRect',
      'OffsetRect',
      'InsetRect',
      'UnionRect',
      'EqualRect',
      'FrameRect',
      'InvertRect',
      'FillRect',
      'CopyRgn',
      'SetRectRgn',
      'OffsetRgn',
      'UnionRgn',
      'XorRgn',
      'EqualRgn',
      'FrameRgn',
      'PaintRgn',
      'InvertRgn',
      'FillRgn',
      'GetPixel',
      'PtInRect',
      'GetCursor',
    ]
    macro_defined_functions.each { |func|
      f.puts "#define Mac#{func} fakeQD_#{func}"
    }

    enums.keys.each { |name|
      f.puts "#define #{name} fakeQD_#{name}"
    }

    f.puts 'enum'
    f.puts '{'
    enums.keys.reverse.drop(1).reverse.each { |name|
      f.puts "    fakeQD_#{name} = #{enums[name]},"
    }
    last = enums.keys.reverse.first
    if not last.nil? then
      f.puts "    fakeQD_#{last} = #{enums[last]}"
    end
    f.puts '};'

    f.puts '#pragma GCC diagnostic push'
    f.puts '#pragma GCC diagnostic ignored "-Wdeprecated-declarations"'

    f.puts '#ifdef __cplusplus'
    f.puts 'extern "C" {'
    f.puts '#endif'

    print_each_symbol(function_symbols, f) { |s|
      f.puts "extern #{s.return_type} #{s.fakeqd_name}(#{s.argument_list});"
    }

    f.puts '#ifdef __cplusplus'
    f.puts '} /* extern "C" */'
    f.puts '#endif'

    f.puts '#pragma GCC diagnostic pop'

    f.puts '#endif /* ! defined(__QUICKDRAWAPI__) */'
  }

  open("#{dir}/../src/fakeQD.cpp", 'w') { |f|
    print_header(f, qd_api_headers)
    f.puts '#include "fakeQD.h"'
    f.puts '#if ! defined(__QUICKDRAWAPI__)'

    f.puts '#include <dlfcn.h>'

    f.puts '#pragma GCC diagnostic push'
    f.puts '#pragma GCC diagnostic ignored "-Wdeprecated-declarations"'

    f.puts 'extern "C" {'

    print_each_symbol(function_symbols, f) { |s|
      f.puts "typedef #{s.return_type} (*#{s.name}Func)(#{s.argument_list});"
    }

    f.puts '} /* extern "C" */'

    f.puts 'class QuickDrawAPIWrapper'
    f.puts '{'
    f.puts 'public:'
    f.puts '    QuickDrawAPIWrapper()'
    f.puts '        : m_initialized(false)'
    f.puts '        , m_qd_dylib_handle(0)'
    print_each_symbol(function_symbols, f) { |s|
      f.puts "        , m_#{s.name}Func(0)"
    }
    f.puts '    {}'
    f.puts '    ~QuickDrawAPIWrapper()'
    f.puts '    {'
    print_each_symbol(function_symbols, f) { |s|
      f.puts "        m_#{s.name}Func = 0;"
    }
    f.puts '        if (m_qd_dylib_handle) {'
    f.puts '            dlclose(m_qd_dylib_handle);'
    f.puts '            m_qd_dylib_handle = 0;'
    f.puts '        }'
    f.puts '        m_initialized = false;'
    f.puts '    }'
    print_each_symbol(function_symbols, f) { |s|
      index = -1
      f.puts "    #{s.return_type} #{s.fakeqd_name}(#{s.argument_list_with_name})"
      f.puts '    {'
      f.puts '        initializeIfNeeded();'
      f.puts "        if (m_#{s.name}Func) {"
      func_call = "m_#{s.name}Func(#{s.argument_list_without_type})"
      if s.return_type == 'void' then
        f.puts "            #{func_call};"
      else
        f.puts "            return #{func_call};"
      end
      if s.return_type != 'void' then
      f.puts '        } else {'
        f.puts "            return (#{s.return_type})0;"
      end
      f.puts '        }'
      f.puts '    }'
    }
    f.puts 'private:'
    f.puts '    void initializeIfNeeded()'
    f.puts '    {'
    f.puts '        if (!m_initialized) {'
    f.puts '            assert(!m_qd_dylib_handle);'
    f.puts '            m_qd_dylib_handle = dlopen("/System/Library/Frameworks/ApplicationServices.framework/Frameworks/QD.framework/QD", RTLD_LAZY);'
    f.puts '            if (m_qd_dylib_handle) {'
    print_each_symbol(function_symbols, f) { |s|
      f.puts "                m_#{s.name}Func = getProcAddress<#{s.name}Func>(m_qd_dylib_handle, \"#{s.name}\");"
    }
    f.puts '            }'
    f.puts '            m_initialized = true;'
    f.puts '        }'
    f.puts '    }'
    f.puts '    template<class Func>'
    f.puts '    Func getProcAddress(void * handle, char const* name) const'
    f.puts '    {'
    f.puts '        assert(handle);'
    f.puts '        assert(name);'
    f.puts '        return reinterpret_cast<Func>(dlsym(handle, name));'
    f.puts '    }'
    f.puts 'private:'
    f.puts '    bool m_initialized;'
    f.puts '    void * m_qd_dylib_handle;'
    print_each_symbol(function_symbols, f) { |s|
      f.puts "    #{s.name}Func m_#{s.name}Func;"
    }
    f.puts '};'
    f.puts 'static QuickDrawAPIWrapper s_wrapper;'

    f.puts 'extern "C" {'

    print_each_symbol(function_symbols, f) { |s|
      index = -1
      f.puts "#{s.return_type} #{s.fakeqd_name}(#{s.argument_list_with_name})"


      f.puts '{'
      func_call = "s_wrapper.#{s.fakeqd_name}(#{s.argument_list_without_type})"
      if s.return_type == 'void' then
        f.puts "    #{func_call};"
      else
        f.puts "    return #{func_call};"
      end
      f.puts '}'
    }

    f.puts '} /* extern "C" */'

    f.puts '#pragma GCC diagnostic pop'

    f.puts '#endif /* ! defined(__QUICKDRAWAPI__) */'
  }
end

begin
  raise 'Argument needed: specify the file path of QuickDrawAPI.h and QuickDrawTypes.h' if ARGV.length == 0
  ARGV.each { |file|
    raise "File not found: #{file}" unless File.exists?(file)
  }
  main(ARGV)
rescue => e
  puts "Error: #{e}"
  exit 1
end
