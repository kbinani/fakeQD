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

  def initialize(function_symbol)
    function_symbol.gsub!(/\)$/, '')
    return_type_and_name, arguments = function_symbol.gsub(/\)$/, '').split('(')
    @name = return_type_and_name.split(' ').reverse.first
    @return_type = return_type_and_name.split(' ').reverse.drop(1).reverse.join(' ')

    argument_list = arguments.split(',')
    if argument_list.length == 1 and argument_list[0] == 'void' then
      @arguments = []
    else
      @arguments = argument_list.map { |argument|
        FunctionArgument.new(argument)
      }
    end
  end


  def to_s
    arguments = @arguments.map { |_| _.to_s }.join(', ')
    "#{@return_type} #{@name}(#{arguments})"
  end


  def <=>(other)
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


def get_header_contents(draw_api_header_list)
  contents = ''
  draw_api_header_list.each { |file|
    contents << open(file)
      .read
      .force_encoding('MacRoman')
      .encode('UTF-8')
      .gsub(/#if OLDROUTINENAMES.+?#endif/m, '')
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
  contents = get_header_contents(draw_api_header_list)

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


def main(qd_api_header)
  function_symbols = extract_extern_function_symbols(qd_api_header)
  enums = extract_enums(qd_api_header)

  open('../include/fakeQD.h', 'w') { |f|
    f.puts '#include <Availability.h>'
    f.puts '#include <ApplicationServices/ApplicationServices.h>'

    f.puts '#if MAC_OS_X_VERSION_10_6 < MAC_OS_X_VERSION_MIN_REQUIRED'

    function_symbols.each { |s|
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
      f.puts "#define #{func} fakeQD_Mac#{func}"
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

    f.puts '#ifdef __cplusplus'
    f.puts 'extern "C" {'
    f.puts '#endif'

    function_symbols.each { |s|
      f.puts "extern #{s.return_type} #{s.fakeqd_name}(#{s.argument_list});"
    }

    f.puts '#ifdef __cplusplus'
    f.puts '} // extern "C"'
    f.puts '#endif'

    f.puts '#endif'
  }

  open('../src/fakeQD.cpp', 'w') { |f|
    f.puts '#include "fakeQD.h"'
    f.puts '#if MAC_OS_X_VERSION_10_6 < MAC_OS_X_VERSION_MIN_REQUIRED'

    [
      '#include <dlfcn.h>',
      '#include <string>',
    ].each { |_| f.puts _ }

    f.puts '#ifdef __cplusplus'
    f.puts 'extern "C" {'
    f.puts '#endif'

    function_symbols.each { |s|
      f.puts "typedef #{s.return_type} (*#{s.name}Func)(#{s.argument_list});"
    }

    f.puts '#ifdef __cplusplus'
    f.puts '} // extern "C"'
    f.puts '#endif'

    f.puts 'class QuickDrawAPIWrapper'
    f.puts '{'
    f.puts 'public:'
    f.puts '    QuickDrawAPIWrapper()'
    f.puts '        : m_initialized(false)'
    f.puts '        , m_qd_dylib_handle(0)'
    function_symbols.each { |s|
      f.puts "        , m_#{s.name}Func(0)"
    }
    f.puts '    {}'
    f.puts '    ~QuickDrawAPIWrapper()'
    f.puts '    {'
    function_symbols.each { |s|
      f.puts "        m_#{s.name}Func = 0;"
    }
    f.puts '        if (m_qd_dylib_handle) {'
    f.puts '            dlclose(m_qd_dylib_handle);'
    f.puts '            m_qd_dylib_handle = 0;'
    f.puts '        }'
    f.puts '    }'
    function_symbols.each { |s|
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
    function_symbols.each { |s|
      f.puts "            m_#{s.name}Func = getProcAddress<#{s.name}Func>(\"#{s.name}\");"
    }
    f.puts '            m_initialized = true;'
    f.puts '        }'
    f.puts '    }'
    f.puts '    void* getHandle()'
    f.puts '    {'
    f.puts '        if (!m_qd_dylib_handle) {'
    f.puts '            m_qd_dylib_handle = dlopen("/System/Library/Frameworks/ApplicationServices.framework/Frameworks/QD.framework/QD", RTLD_LAZY);'
    f.puts '        }'
    f.puts '        return m_qd_dylib_handle;'
    f.puts '    }'
    f.puts '    template<class Func>'
    f.puts '    Func getProcAddress(const char* name)'
    f.puts '    {'
    f.puts '        void * handle = getHandle();'
    f.puts '        if (handle) {'
    f.puts '            return reinterpret_cast<Func>(dlsym(handle, name));'
    f.puts '        } else {'
    f.puts '            return 0;'
    f.puts '        }'
    f.puts '    }'
    f.puts 'private:'
    f.puts '    bool m_initialized;'
    f.puts '    void* m_qd_dylib_handle;'
    function_symbols.each { |s|
      f.puts "    #{s.name}Func m_#{s.name}Func;"
    }
    f.puts '};'
    f.puts 'QuickDrawAPIWrapper s_wrapper;'

    f.puts '#ifdef __cplusplus'
    f.puts 'extern "C" {'
    f.puts '#endif'

    function_symbols.each { |s|
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

    f.puts '#ifdef __cplusplus'
    f.puts '} // extern "C"'
    f.puts '#endif'

    f.puts '#endif'
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
