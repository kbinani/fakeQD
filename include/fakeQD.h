#include <Availability.h>
#include <ApplicationServices/ApplicationServices.h>
#if MAC_OS_X_VERSION_10_6 < MAC_OS_X_VERSION_MIN_REQUIRED
#define NewCMBitmapCallBackUPP fakeQD_NewCMBitmapCallBackUPP
#define DisposeCMBitmapCallBackUPP fakeQD_DisposeCMBitmapCallBackUPP
#define InvokeCMBitmapCallBackUPP fakeQD_InvokeCMBitmapCallBackUPP
#define NewRegionToRectsUPP fakeQD_NewRegionToRectsUPP
#define DisposeRegionToRectsUPP fakeQD_DisposeRegionToRectsUPP
#define InvokeRegionToRectsUPP fakeQD_InvokeRegionToRectsUPP
#define QDRegionToRects fakeQD_QDRegionToRects
#define LockPortBits fakeQD_LockPortBits
#define UnlockPortBits fakeQD_UnlockPortBits
#define MacSetPort fakeQD_MacSetPort
#define GetPort fakeQD_GetPort
#define QDSwapPort fakeQD_QDSwapPort
#define GrafDevice fakeQD_GrafDevice
#define SetPortBits fakeQD_SetPortBits
#define PortSize fakeQD_PortSize
#define MovePortTo fakeQD_MovePortTo
#define SetOrigin fakeQD_SetOrigin
#define SetClip fakeQD_SetClip
#define GetClip fakeQD_GetClip
#define ClipRect fakeQD_ClipRect
#define BackPat fakeQD_BackPat
#define InitCursor fakeQD_InitCursor
#define HideCursor fakeQD_HideCursor
#define MacShowCursor fakeQD_MacShowCursor
#define ObscureCursor fakeQD_ObscureCursor
#define HidePen fakeQD_HidePen
#define ShowPen fakeQD_ShowPen
#define GetPen fakeQD_GetPen
#define PenSize fakeQD_PenSize
#define PenMode fakeQD_PenMode
#define PenPat fakeQD_PenPat
#define PenNormal fakeQD_PenNormal
#define MoveTo fakeQD_MoveTo
#define Move fakeQD_Move
#define MacLineTo fakeQD_MacLineTo
#define Line fakeQD_Line
#define ForeColor fakeQD_ForeColor
#define BackColor fakeQD_BackColor
#define ColorBit fakeQD_ColorBit
#define MacSetRect fakeQD_MacSetRect
#define MacOffsetRect fakeQD_MacOffsetRect
#define MacInsetRect fakeQD_MacInsetRect
#define SectRect fakeQD_SectRect
#define MacUnionRect fakeQD_MacUnionRect
#define MacEqualRect fakeQD_MacEqualRect
#define EmptyRect fakeQD_EmptyRect
#define MacFrameRect fakeQD_MacFrameRect
#define PaintRect fakeQD_PaintRect
#define EraseRect fakeQD_EraseRect
#define MacInvertRect fakeQD_MacInvertRect
#define MacFillRect fakeQD_MacFillRect
#define FrameOval fakeQD_FrameOval
#define PaintOval fakeQD_PaintOval
#define EraseOval fakeQD_EraseOval
#define InvertOval fakeQD_InvertOval
#define FillOval fakeQD_FillOval
#define FrameRoundRect fakeQD_FrameRoundRect
#define PaintRoundRect fakeQD_PaintRoundRect
#define EraseRoundRect fakeQD_EraseRoundRect
#define InvertRoundRect fakeQD_InvertRoundRect
#define FillRoundRect fakeQD_FillRoundRect
#define FrameArc fakeQD_FrameArc
#define PaintArc fakeQD_PaintArc
#define EraseArc fakeQD_EraseArc
#define InvertArc fakeQD_InvertArc
#define FillArc fakeQD_FillArc
#define NewRgn fakeQD_NewRgn
#define OpenRgn fakeQD_OpenRgn
#define CloseRgn fakeQD_CloseRgn
#define BitMapToRegion fakeQD_BitMapToRegion
#define RgnToHandle fakeQD_RgnToHandle
#define HandleToRgn fakeQD_HandleToRgn
#define DisposeRgn fakeQD_DisposeRgn
#define MacCopyRgn fakeQD_MacCopyRgn
#define SetEmptyRgn fakeQD_SetEmptyRgn
#define MacSetRectRgn fakeQD_MacSetRectRgn
#define RectRgn fakeQD_RectRgn
#define MacOffsetRgn fakeQD_MacOffsetRgn
#define InsetRgn fakeQD_InsetRgn
#define SectRgn fakeQD_SectRgn
#define MacUnionRgn fakeQD_MacUnionRgn
#define DiffRgn fakeQD_DiffRgn
#define MacXorRgn fakeQD_MacXorRgn
#define RectInRgn fakeQD_RectInRgn
#define MacEqualRgn fakeQD_MacEqualRgn
#define EmptyRgn fakeQD_EmptyRgn
#define MacFrameRgn fakeQD_MacFrameRgn
#define MacPaintRgn fakeQD_MacPaintRgn
#define EraseRgn fakeQD_EraseRgn
#define MacInvertRgn fakeQD_MacInvertRgn
#define MacFillRgn fakeQD_MacFillRgn
#define ScrollRect fakeQD_ScrollRect
#define CopyBits fakeQD_CopyBits
#define SeedFill fakeQD_SeedFill
#define CalcMask fakeQD_CalcMask
#define CopyMask fakeQD_CopyMask
#define OpenPicture fakeQD_OpenPicture
#define PicComment fakeQD_PicComment
#define ClosePicture fakeQD_ClosePicture
#define QDGetPictureBounds fakeQD_QDGetPictureBounds
#define DrawPicture fakeQD_DrawPicture
#define KillPicture fakeQD_KillPicture
#define OpenPoly fakeQD_OpenPoly
#define ClosePoly fakeQD_ClosePoly
#define KillPoly fakeQD_KillPoly
#define OffsetPoly fakeQD_OffsetPoly
#define FramePoly fakeQD_FramePoly
#define PaintPoly fakeQD_PaintPoly
#define ErasePoly fakeQD_ErasePoly
#define InvertPoly fakeQD_InvertPoly
#define FillPoly fakeQD_FillPoly
#define SetPt fakeQD_SetPt
#define LocalToGlobal fakeQD_LocalToGlobal
#define GlobalToLocal fakeQD_GlobalToLocal
#define Random fakeQD_Random
#define StuffHex fakeQD_StuffHex
#define MacGetPixel fakeQD_MacGetPixel
#define ScalePt fakeQD_ScalePt
#define MapPt fakeQD_MapPt
#define MapRect fakeQD_MapRect
#define MapRgn fakeQD_MapRgn
#define MapPoly fakeQD_MapPoly
#define StdRect fakeQD_StdRect
#define StdRRect fakeQD_StdRRect
#define StdOval fakeQD_StdOval
#define StdArc fakeQD_StdArc
#define StdPoly fakeQD_StdPoly
#define StdRgn fakeQD_StdRgn
#define StdBits fakeQD_StdBits
#define StdComment fakeQD_StdComment
#define StdGetPic fakeQD_StdGetPic
#define StdPutPic fakeQD_StdPutPic
#define StdOpcode fakeQD_StdOpcode
#define AddPt fakeQD_AddPt
#define EqualPt fakeQD_EqualPt
#define MacPtInRect fakeQD_MacPtInRect
#define Pt2Rect fakeQD_Pt2Rect
#define PtToAngle fakeQD_PtToAngle
#define SubPt fakeQD_SubPt
#define PtInRgn fakeQD_PtInRgn
#define StdLine fakeQD_StdLine
#define NewPixMap fakeQD_NewPixMap
#define DisposePixMap fakeQD_DisposePixMap
#define CopyPixMap fakeQD_CopyPixMap
#define NewPixPat fakeQD_NewPixPat
#define DisposePixPat fakeQD_DisposePixPat
#define CopyPixPat fakeQD_CopyPixPat
#define PenPixPat fakeQD_PenPixPat
#define BackPixPat fakeQD_BackPixPat
#define GetPixPat fakeQD_GetPixPat
#define MakeRGBPat fakeQD_MakeRGBPat
#define FillCRect fakeQD_FillCRect
#define FillCOval fakeQD_FillCOval
#define FillCRoundRect fakeQD_FillCRoundRect
#define FillCArc fakeQD_FillCArc
#define FillCRgn fakeQD_FillCRgn
#define FillCPoly fakeQD_FillCPoly
#define RGBForeColor fakeQD_RGBForeColor
#define RGBBackColor fakeQD_RGBBackColor
#define SetCPixel fakeQD_SetCPixel
#define SetPortPix fakeQD_SetPortPix
#define GetCPixel fakeQD_GetCPixel
#define GetForeColor fakeQD_GetForeColor
#define GetBackColor fakeQD_GetBackColor
#define SeedCFill fakeQD_SeedCFill
#define CalcCMask fakeQD_CalcCMask
#define OpenCPicture fakeQD_OpenCPicture
#define OpColor fakeQD_OpColor
#define HiliteColor fakeQD_HiliteColor
#define DisposeCTable fakeQD_DisposeCTable
#define GetCTable fakeQD_GetCTable
#define AllocCursor fakeQD_AllocCursor
#define SetStdCProcs fakeQD_SetStdCProcs
#define GetMaxDevice fakeQD_GetMaxDevice
#define GetCTSeed fakeQD_GetCTSeed
#define GetDeviceList fakeQD_GetDeviceList
#define GetMainDevice fakeQD_GetMainDevice
#define GetNextDevice fakeQD_GetNextDevice
#define TestDeviceAttribute fakeQD_TestDeviceAttribute
#define SetDeviceAttribute fakeQD_SetDeviceAttribute
#define InitGDevice fakeQD_InitGDevice
#define NewGDevice fakeQD_NewGDevice
#define DisposeGDevice fakeQD_DisposeGDevice
#define SetGDevice fakeQD_SetGDevice
#define GetGDevice fakeQD_GetGDevice
#define Color2Index fakeQD_Color2Index
#define Index2Color fakeQD_Index2Color
#define InvertColor fakeQD_InvertColor
#define RealColor fakeQD_RealColor
#define GetSubTable fakeQD_GetSubTable
#define AddSearch fakeQD_AddSearch
#define AddComp fakeQD_AddComp
#define DelSearch fakeQD_DelSearch
#define DelComp fakeQD_DelComp
#define SetClientID fakeQD_SetClientID
#define ProtectEntry fakeQD_ProtectEntry
#define ReserveEntry fakeQD_ReserveEntry
#define SetEntries fakeQD_SetEntries
#define QDError fakeQD_QDError
#define CopyDeepMask fakeQD_CopyDeepMask
#define GetMaskTable fakeQD_GetMaskTable
#define GetPattern fakeQD_GetPattern
#define GetPicture fakeQD_GetPicture
#define DeltaPoint fakeQD_DeltaPoint
#define ShieldCursor fakeQD_ShieldCursor
#define ScreenRes fakeQD_ScreenRes
#define GetIndPattern fakeQD_GetIndPattern
#define deltapoint fakeQD_deltapoint
#define PackBits fakeQD_PackBits
#define UnpackBits fakeQD_UnpackBits
#define SlopeFromAngle fakeQD_SlopeFromAngle
#define AngleFromSlope fakeQD_AngleFromSlope
#define OpenCursorComponent fakeQD_OpenCursorComponent
#define CloseCursorComponent fakeQD_CloseCursorComponent
#define SetCursorComponent fakeQD_SetCursorComponent
#define CursorComponentChanged fakeQD_CursorComponentChanged
#define CursorComponentSetData fakeQD_CursorComponentSetData
#define CWMatchPixMap fakeQD_CWMatchPixMap
#define CWCheckPixMap fakeQD_CWCheckPixMap
#define NCMBeginMatching fakeQD_NCMBeginMatching
#define CMEndMatching fakeQD_CMEndMatching
#define NCMDrawMatchedPicture fakeQD_NCMDrawMatchedPicture
#define CMEnableMatchingComment fakeQD_CMEnableMatchingComment
#define NCMUseProfileComment fakeQD_NCMUseProfileComment
#define IsValidPort fakeQD_IsValidPort
#define IsValidRgnHandle fakeQD_IsValidRgnHandle
#define GetPortPixMap fakeQD_GetPortPixMap
#define GetPortBitMapForCopyBits fakeQD_GetPortBitMapForCopyBits
#define GetPortBounds fakeQD_GetPortBounds
#define GetPortForeColor fakeQD_GetPortForeColor
#define GetPortBackColor fakeQD_GetPortBackColor
#define GetPortOpColor fakeQD_GetPortOpColor
#define GetPortHiliteColor fakeQD_GetPortHiliteColor
#define GetPortGrafProcs fakeQD_GetPortGrafProcs
#define GetPortTextFont fakeQD_GetPortTextFont
#define GetPortTextFace fakeQD_GetPortTextFace
#define GetPortTextMode fakeQD_GetPortTextMode
#define GetPortTextSize fakeQD_GetPortTextSize
#define GetPortChExtra fakeQD_GetPortChExtra
#define GetPortFracHPenLocation fakeQD_GetPortFracHPenLocation
#define GetPortSpExtra fakeQD_GetPortSpExtra
#define GetPortPenVisibility fakeQD_GetPortPenVisibility
#define GetPortVisibleRegion fakeQD_GetPortVisibleRegion
#define GetPortClipRegion fakeQD_GetPortClipRegion
#define GetPortBackPixPat fakeQD_GetPortBackPixPat
#define GetPortPenPixPat fakeQD_GetPortPenPixPat
#define GetPortFillPixPat fakeQD_GetPortFillPixPat
#define GetPortPenSize fakeQD_GetPortPenSize
#define GetPortPenMode fakeQD_GetPortPenMode
#define GetPortPenLocation fakeQD_GetPortPenLocation
#define IsPortRegionBeingDefined fakeQD_IsPortRegionBeingDefined
#define IsPortPictureBeingDefined fakeQD_IsPortPictureBeingDefined
#define IsPortPolyBeingDefined fakeQD_IsPortPolyBeingDefined
#define IsPortOffscreen fakeQD_IsPortOffscreen
#define IsPortColor fakeQD_IsPortColor
#define IsPortVisibleRegionEmpty fakeQD_IsPortVisibleRegionEmpty
#define IsPortClipRegionEmpty fakeQD_IsPortClipRegionEmpty
#define SectRegionWithPortClipRegion fakeQD_SectRegionWithPortClipRegion
#define SectRegionWithPortVisibleRegion fakeQD_SectRegionWithPortVisibleRegion
#define SwapPortPicSaveHandle fakeQD_SwapPortPicSaveHandle
#define SwapPortPolySaveHandle fakeQD_SwapPortPolySaveHandle
#define SwapPortRegionSaveHandle fakeQD_SwapPortRegionSaveHandle
#define SetPortBounds fakeQD_SetPortBounds
#define SetPortOpColor fakeQD_SetPortOpColor
#define SetPortGrafProcs fakeQD_SetPortGrafProcs
#define SetPortTextFont fakeQD_SetPortTextFont
#define SetPortTextSize fakeQD_SetPortTextSize
#define SetPortTextFace fakeQD_SetPortTextFace
#define SetPortTextMode fakeQD_SetPortTextMode
#define SetPortVisibleRegion fakeQD_SetPortVisibleRegion
#define SetPortClipRegion fakeQD_SetPortClipRegion
#define SetPortPenPixPat fakeQD_SetPortPenPixPat
#define SetPortFillPixPat fakeQD_SetPortFillPixPat
#define SetPortBackPixPat fakeQD_SetPortBackPixPat
#define SetPortPenSize fakeQD_SetPortPenSize
#define SetPortPenMode fakeQD_SetPortPenMode
#define SetPortFracHPenLocation fakeQD_SetPortFracHPenLocation
#define GetPixBounds fakeQD_GetPixBounds
#define GetPixDepth fakeQD_GetPixDepth
#define GetQDGlobalsRandomSeed fakeQD_GetQDGlobalsRandomSeed
#define GetQDGlobalsScreenBits fakeQD_GetQDGlobalsScreenBits
#define GetQDGlobalsDarkGray fakeQD_GetQDGlobalsDarkGray
#define GetQDGlobalsLightGray fakeQD_GetQDGlobalsLightGray
#define GetQDGlobalsGray fakeQD_GetQDGlobalsGray
#define GetQDGlobalsBlack fakeQD_GetQDGlobalsBlack
#define GetQDGlobalsWhite fakeQD_GetQDGlobalsWhite
#define GetQDGlobalsThePort fakeQD_GetQDGlobalsThePort
#define SetQDGlobalsRandomSeed fakeQD_SetQDGlobalsRandomSeed
#define GetRegionBounds fakeQD_GetRegionBounds
#define IsRegionRectangular fakeQD_IsRegionRectangular
#define CreateNewPort fakeQD_CreateNewPort
#define DisposePort fakeQD_DisposePort
#define SetQDError fakeQD_SetQDError
#define QDLocalToGlobalPoint fakeQD_QDLocalToGlobalPoint
#define QDGlobalToLocalPoint fakeQD_QDGlobalToLocalPoint
#define QDLocalToGlobalRect fakeQD_QDLocalToGlobalRect
#define QDGlobalToLocalRect fakeQD_QDGlobalToLocalRect
#define QDLocalToGlobalRegion fakeQD_QDLocalToGlobalRegion
#define QDGlobalToLocalRegion fakeQD_QDGlobalToLocalRegion
#define QDIsPortBuffered fakeQD_QDIsPortBuffered
#define QDIsPortBufferDirty fakeQD_QDIsPortBufferDirty
#define QDFlushPortBuffer fakeQD_QDFlushPortBuffer
#define QDGetDirtyRegion fakeQD_QDGetDirtyRegion
#define QDSetDirtyRegion fakeQD_QDSetDirtyRegion
#define QDAddRectToDirtyRegion fakeQD_QDAddRectToDirtyRegion
#define QDAddRegionToDirtyRegion fakeQD_QDAddRegionToDirtyRegion
#define CreateCGContextForPort fakeQD_CreateCGContextForPort
#define ClipCGContextToRegion fakeQD_ClipCGContextToRegion
#define SyncCGContextOriginWithPort fakeQD_SyncCGContextOriginWithPort
#define QDBeginCGContext fakeQD_QDBeginCGContext
#define QDEndCGContext fakeQD_QDEndCGContext
#define CreateNewPortForCGDisplayID fakeQD_CreateNewPortForCGDisplayID
#define QDDisplayWaitCursor fakeQD_QDDisplayWaitCursor
#define QDSetPatternOrigin fakeQD_QDSetPatternOrigin
#define QDGetPatternOrigin fakeQD_QDGetPatternOrigin
#define QDIsNamedPixMapCursorRegistered fakeQD_QDIsNamedPixMapCursorRegistered
#define QDRegisterNamedPixMapCursor fakeQD_QDRegisterNamedPixMapCursor
#define QDUnregisterNamedPixMapCursur fakeQD_QDUnregisterNamedPixMapCursur
#define QDUnregisterNamedPixMapCursor fakeQD_QDUnregisterNamedPixMapCursor
#define QDSetNamedPixMapCursor fakeQD_QDSetNamedPixMapCursor
#define QDSetCursorScale fakeQD_QDSetCursorScale
#define QDGetCursorScale fakeQD_QDGetCursorScale
#define QDGetCursorData fakeQD_QDGetCursorData
#define QDSwapTextFlags fakeQD_QDSwapTextFlags
#define QDSwapPortTextFlags fakeQD_QDSwapPortTextFlags
#define QDGetCGDirectDisplayID fakeQD_QDGetCGDirectDisplayID
#define LMGetScrVRes fakeQD_LMGetScrVRes
#define LMSetScrVRes fakeQD_LMSetScrVRes
#define LMGetScrHRes fakeQD_LMGetScrHRes
#define LMSetScrHRes fakeQD_LMSetScrHRes
#define LMGetMainDevice fakeQD_LMGetMainDevice
#define LMSetMainDevice fakeQD_LMSetMainDevice
#define LMGetDeviceList fakeQD_LMGetDeviceList
#define LMSetDeviceList fakeQD_LMSetDeviceList
#define LMGetQDColors fakeQD_LMGetQDColors
#define LMSetQDColors fakeQD_LMSetQDColors
#define LMGetWidthListHand fakeQD_LMGetWidthListHand
#define LMSetWidthListHand fakeQD_LMSetWidthListHand
#define LMGetHiliteMode fakeQD_LMGetHiliteMode
#define LMSetHiliteMode fakeQD_LMSetHiliteMode
#define LMGetWidthPtr fakeQD_LMGetWidthPtr
#define LMSetWidthPtr fakeQD_LMSetWidthPtr
#define LMGetWidthTabHandle fakeQD_LMGetWidthTabHandle
#define LMSetWidthTabHandle fakeQD_LMSetWidthTabHandle
#define LMGetLastSPExtra fakeQD_LMGetLastSPExtra
#define LMSetLastSPExtra fakeQD_LMSetLastSPExtra
#define LMGetLastFOND fakeQD_LMGetLastFOND
#define LMSetLastFOND fakeQD_LMSetLastFOND
#define LMGetFractEnable fakeQD_LMGetFractEnable
#define LMSetFractEnable fakeQD_LMSetFractEnable
#define LMGetTheGDevice fakeQD_LMGetTheGDevice
#define LMSetTheGDevice fakeQD_LMSetTheGDevice
#define LMGetHiliteRGB fakeQD_LMGetHiliteRGB
#define LMSetHiliteRGB fakeQD_LMSetHiliteRGB
#define LMGetCursorNew fakeQD_LMGetCursorNew
#define LMSetCursorNew fakeQD_LMSetCursorNew
#define SetPort fakeQD_MacSetPort
#define SetCursor fakeQD_MacSetCursor
#define ShowCursor fakeQD_MacShowCursor
#define LineTo fakeQD_MacLineTo
#define SetRect fakeQD_MacSetRect
#define OffsetRect fakeQD_MacOffsetRect
#define InsetRect fakeQD_MacInsetRect
#define UnionRect fakeQD_MacUnionRect
#define EqualRect fakeQD_MacEqualRect
#define FrameRect fakeQD_MacFrameRect
#define InvertRect fakeQD_MacInvertRect
#define FillRect fakeQD_MacFillRect
#define CopyRgn fakeQD_MacCopyRgn
#define SetRectRgn fakeQD_MacSetRectRgn
#define OffsetRgn fakeQD_MacOffsetRgn
#define UnionRgn fakeQD_MacUnionRgn
#define XorRgn fakeQD_MacXorRgn
#define EqualRgn fakeQD_MacEqualRgn
#define FrameRgn fakeQD_MacFrameRgn
#define PaintRgn fakeQD_MacPaintRgn
#define InvertRgn fakeQD_MacInvertRgn
#define FillRgn fakeQD_MacFillRgn
#define GetPixel fakeQD_MacGetPixel
#define PtInRect fakeQD_MacPtInRect
#define GetCursor fakeQD_MacGetCursor
#define kQDRegionToRectsMsgInit fakeQD_kQDRegionToRectsMsgInit
#define kQDRegionToRectsMsgParse fakeQD_kQDRegionToRectsMsgParse
#define kQDRegionToRectsMsgTerminate fakeQD_kQDRegionToRectsMsgTerminate
#define kQDParseRegionFromTop fakeQD_kQDParseRegionFromTop
#define kQDParseRegionFromBottom fakeQD_kQDParseRegionFromBottom
#define kQDParseRegionFromLeft fakeQD_kQDParseRegionFromLeft
#define kQDParseRegionFromRight fakeQD_kQDParseRegionFromRight
#define kQDParseRegionFromTopLeft fakeQD_kQDParseRegionFromTopLeft
#define kQDParseRegionFromBottomRight fakeQD_kQDParseRegionFromBottomRight
#define colorXorXFer fakeQD_colorXorXFer
#define noiseXFer fakeQD_noiseXFer
#define customXFer fakeQD_customXFer
#define kXFer1PixelAtATime fakeQD_kXFer1PixelAtATime
#define kXFerConvertPixelToRGB32 fakeQD_kXFerConvertPixelToRGB32
#define kCursorComponentsVersion fakeQD_kCursorComponentsVersion
#define kCursorComponentType fakeQD_kCursorComponentType
#define cursorDoesAnimate fakeQD_cursorDoesAnimate
#define cursorDoesHardware fakeQD_cursorDoesHardware
#define cursorDoesUnreadableScreenBits fakeQD_cursorDoesUnreadableScreenBits
#define kRenderCursorInHardware fakeQD_kRenderCursorInHardware
#define kRenderCursorInSoftware fakeQD_kRenderCursorInSoftware
#define kCursorComponentInit fakeQD_kCursorComponentInit
#define kCursorComponentGetInfo fakeQD_kCursorComponentGetInfo
#define kCursorComponentSetOutputMode fakeQD_kCursorComponentSetOutputMode
#define kCursorComponentSetData fakeQD_kCursorComponentSetData
#define kCursorComponentReconfigure fakeQD_kCursorComponentReconfigure
#define kCursorComponentDraw fakeQD_kCursorComponentDraw
#define kCursorComponentErase fakeQD_kCursorComponentErase
#define kCursorComponentMove fakeQD_kCursorComponentMove
#define kCursorComponentAnimate fakeQD_kCursorComponentAnimate
#define kCursorComponentLastReserved fakeQD_kCursorComponentLastReserved
#define kQDXArrowCursor fakeQD_kQDXArrowCursor
#define kQDXIBeamCursor fakeQD_kQDXIBeamCursor
#define kQDXIBeamXORCursor fakeQD_kQDXIBeamXORCursor
#define kQDXAliasCursor fakeQD_kQDXAliasCursor
#define kQDXCopyCursor fakeQD_kQDXCopyCursor
#define kQDXMoveCursor fakeQD_kQDXMoveCursor
#define kQDXNumberOfSystemCursors fakeQD_kQDXNumberOfSystemCursors
#define kQDUseDefaultTextRendering fakeQD_kQDUseDefaultTextRendering
#define kQDUseTrueTypeScalerGlyphs fakeQD_kQDUseTrueTypeScalerGlyphs
#define kQDUseCGTextRendering fakeQD_kQDUseCGTextRendering
#define kQDUseCGTextMetrics fakeQD_kQDUseCGTextMetrics
#define kQDSupportedFlags fakeQD_kQDSupportedFlags
#define kQDDontChangeFlags fakeQD_kQDDontChangeFlags
enum
{
    fakeQD_kQDRegionToRectsMsgInit = 1,
    fakeQD_kQDRegionToRectsMsgParse = 2,
    fakeQD_kQDRegionToRectsMsgTerminate = 3,
    fakeQD_kQDParseRegionFromTop = (1 << 0),
    fakeQD_kQDParseRegionFromBottom = (1 << 1),
    fakeQD_kQDParseRegionFromLeft = (1 << 2),
    fakeQD_kQDParseRegionFromRight = (1 << 3),
    fakeQD_kQDParseRegionFromTopLeft = kQDParseRegionFromTop | kQDParseRegionFromLeft,
    fakeQD_kQDParseRegionFromBottomRight = kQDParseRegionFromBottom | kQDParseRegionFromRight,
    fakeQD_colorXorXFer = 52,
    fakeQD_noiseXFer = 53,
    fakeQD_customXFer = 54,
    fakeQD_kXFer1PixelAtATime = 0x00000001,
    fakeQD_kXFerConvertPixelToRGB32 = 0x00000002,
    fakeQD_kCursorComponentsVersion = 0x00010001,
    fakeQD_kCursorComponentType = 'curs',
    fakeQD_cursorDoesAnimate = 1L << 0,
    fakeQD_cursorDoesHardware = 1L << 1,
    fakeQD_cursorDoesUnreadableScreenBits = 1L << 2,
    fakeQD_kRenderCursorInHardware = 1L << 0,
    fakeQD_kRenderCursorInSoftware = 1L << 1,
    fakeQD_kCursorComponentInit = 0x0001,
    fakeQD_kCursorComponentGetInfo = 0x0002,
    fakeQD_kCursorComponentSetOutputMode = 0x0003,
    fakeQD_kCursorComponentSetData = 0x0004,
    fakeQD_kCursorComponentReconfigure = 0x0005,
    fakeQD_kCursorComponentDraw = 0x0006,
    fakeQD_kCursorComponentErase = 0x0007,
    fakeQD_kCursorComponentMove = 0x0008,
    fakeQD_kCursorComponentAnimate = 0x0009,
    fakeQD_kCursorComponentLastReserved = 0x0050,
    fakeQD_kQDXArrowCursor = 0,
    fakeQD_kQDXIBeamCursor = 1,
    fakeQD_kQDXIBeamXORCursor = 2,
    fakeQD_kQDXAliasCursor = 3,
    fakeQD_kQDXCopyCursor = 4,
    fakeQD_kQDXMoveCursor = 5,
    fakeQD_kQDXNumberOfSystemCursors = 6,
    fakeQD_kQDUseDefaultTextRendering = 0,
    fakeQD_kQDUseTrueTypeScalerGlyphs = (1 << 0),
    fakeQD_kQDUseCGTextRendering = (1 << 1),
    fakeQD_kQDUseCGTextMetrics = (1 << 2),
    fakeQD_kQDSupportedFlags = kQDUseTrueTypeScalerGlyphs | kQDUseCGTextRendering | kQDUseCGTextMetrics,
    fakeQD_kQDDontChangeFlags = (int)0xFFFFFFFF
};
#ifdef __cplusplus
extern "C" {
#endif
extern CMBitmapCallBackUPP fakeQD_NewCMBitmapCallBackUPP(CMBitmapCallBackProcPtr);
extern void fakeQD_DisposeCMBitmapCallBackUPP(CMBitmapCallBackUPP);
extern Boolean fakeQD_InvokeCMBitmapCallBackUPP(long, void *, CMBitmapCallBackUPP);
extern RegionToRectsUPP fakeQD_NewRegionToRectsUPP(RegionToRectsProcPtr);
extern void fakeQD_DisposeRegionToRectsUPP(RegionToRectsUPP);
extern OSStatus fakeQD_InvokeRegionToRectsUPP(UInt16, RgnHandle, const Rect *, void *, RegionToRectsUPP);
extern OSStatus fakeQD_QDRegionToRects(RgnHandle, QDRegionParseDirection, RegionToRectsUPP, void *);
extern OSErr fakeQD_LockPortBits(GrafPtr);
extern OSErr fakeQD_UnlockPortBits(GrafPtr);
extern void fakeQD_MacSetPort(GrafPtr);
extern void fakeQD_GetPort(GrafPtr *);
extern Boolean fakeQD_QDSwapPort(CGrafPtr, CGrafPtr *);
extern void fakeQD_GrafDevice(short);
extern void fakeQD_SetPortBits(const BitMap *);
extern void fakeQD_PortSize(short, short);
extern void fakeQD_MovePortTo(short, short);
extern void fakeQD_SetOrigin(short, short);
extern void fakeQD_SetClip(RgnHandle);
extern void fakeQD_GetClip(RgnHandle);
extern void fakeQD_ClipRect(const Rect *);
extern void fakeQD_BackPat(const Pattern *);
extern void fakeQD_InitCursor();
extern void fakeQD_HideCursor();
extern void fakeQD_MacShowCursor();
extern void fakeQD_ObscureCursor();
extern void fakeQD_HidePen();
extern void fakeQD_ShowPen();
extern void fakeQD_GetPen(Point *);
extern void fakeQD_PenSize(short, short);
extern void fakeQD_PenMode(short);
extern void fakeQD_PenPat(const Pattern *);
extern void fakeQD_PenNormal();
extern void fakeQD_MoveTo(short, short);
extern void fakeQD_Move(short, short);
extern void fakeQD_MacLineTo(short, short);
extern void fakeQD_Line(short, short);
extern void fakeQD_ForeColor(long);
extern void fakeQD_BackColor(long);
extern void fakeQD_ColorBit(short);
extern void fakeQD_MacSetRect(Rect *, short, short, short, short);
extern void fakeQD_MacOffsetRect(Rect *, short, short);
extern void fakeQD_MacInsetRect(Rect *, short, short);
extern Boolean fakeQD_SectRect(const Rect *, const Rect *, Rect *);
extern void fakeQD_MacUnionRect(const Rect *, const Rect *, Rect *);
extern Boolean fakeQD_MacEqualRect(const Rect *, const Rect *);
extern Boolean fakeQD_EmptyRect(const Rect *);
extern void fakeQD_MacFrameRect(const Rect *);
extern void fakeQD_PaintRect(const Rect *);
extern void fakeQD_EraseRect(const Rect *);
extern void fakeQD_MacInvertRect(const Rect *);
extern void fakeQD_MacFillRect(const Rect *, const Pattern *);
extern void fakeQD_FrameOval(const Rect *);
extern void fakeQD_PaintOval(const Rect *);
extern void fakeQD_EraseOval(const Rect *);
extern void fakeQD_InvertOval(const Rect *);
extern void fakeQD_FillOval(const Rect *, const Pattern *);
extern void fakeQD_FrameRoundRect(const Rect *, short, short);
extern void fakeQD_PaintRoundRect(const Rect *, short, short);
extern void fakeQD_EraseRoundRect(const Rect *, short, short);
extern void fakeQD_InvertRoundRect(const Rect *, short, short);
extern void fakeQD_FillRoundRect(const Rect *, short, short, const Pattern *);
extern void fakeQD_FrameArc(const Rect *, short, short);
extern void fakeQD_PaintArc(const Rect *, short, short);
extern void fakeQD_EraseArc(const Rect *, short, short);
extern void fakeQD_InvertArc(const Rect *, short, short);
extern void fakeQD_FillArc(const Rect *, short, short, const Pattern *);
extern RgnHandle fakeQD_NewRgn();
extern void fakeQD_OpenRgn();
extern void fakeQD_CloseRgn(RgnHandle);
extern OSErr fakeQD_BitMapToRegion(RgnHandle, const BitMap *);
extern void fakeQD_RgnToHandle(RgnHandle, Handle);
extern void fakeQD_HandleToRgn(Handle, RgnHandle);
extern void fakeQD_DisposeRgn(RgnHandle);
extern void fakeQD_MacCopyRgn(RgnHandle, RgnHandle);
extern void fakeQD_SetEmptyRgn(RgnHandle);
extern void fakeQD_MacSetRectRgn(RgnHandle, short, short, short, short);
extern void fakeQD_RectRgn(RgnHandle, const Rect *);
extern void fakeQD_MacOffsetRgn(RgnHandle, short, short);
extern void fakeQD_InsetRgn(RgnHandle, short, short);
extern void fakeQD_SectRgn(RgnHandle, RgnHandle, RgnHandle);
extern void fakeQD_MacUnionRgn(RgnHandle, RgnHandle, RgnHandle);
extern void fakeQD_DiffRgn(RgnHandle, RgnHandle, RgnHandle);
extern void fakeQD_MacXorRgn(RgnHandle, RgnHandle, RgnHandle);
extern Boolean fakeQD_RectInRgn(const Rect *, RgnHandle);
extern Boolean fakeQD_MacEqualRgn(RgnHandle, RgnHandle);
extern Boolean fakeQD_EmptyRgn(RgnHandle);
extern void fakeQD_MacFrameRgn(RgnHandle);
extern void fakeQD_MacPaintRgn(RgnHandle);
extern void fakeQD_EraseRgn(RgnHandle);
extern void fakeQD_MacInvertRgn(RgnHandle);
extern void fakeQD_MacFillRgn(RgnHandle, const Pattern *);
extern void fakeQD_ScrollRect(const Rect *, short, short, RgnHandle);
extern void fakeQD_CopyBits(const BitMap *, const BitMap *, const Rect *, const Rect *, short, RgnHandle);
extern void fakeQD_SeedFill(const void *, void *, short, short, short, short, short, short);
extern void fakeQD_CalcMask(const void *, void *, short, short, short, short);
extern void fakeQD_CopyMask(const BitMap *, const BitMap *, const BitMap *, const Rect *, const Rect *, const Rect *);
extern PicHandle fakeQD_OpenPicture(const Rect *);
extern void fakeQD_PicComment(short, short, Handle);
extern void fakeQD_ClosePicture();
extern Rect * fakeQD_QDGetPictureBounds(PicHandle, Rect *);
extern void fakeQD_DrawPicture(PicHandle, const Rect *);
extern void fakeQD_KillPicture(PicHandle);
extern PolyHandle fakeQD_OpenPoly();
extern void fakeQD_ClosePoly();
extern void fakeQD_KillPoly(PolyHandle);
extern void fakeQD_OffsetPoly(PolyHandle, short, short);
extern void fakeQD_FramePoly(PolyHandle);
extern void fakeQD_PaintPoly(PolyHandle);
extern void fakeQD_ErasePoly(PolyHandle);
extern void fakeQD_InvertPoly(PolyHandle);
extern void fakeQD_FillPoly(PolyHandle, const Pattern *);
extern void fakeQD_SetPt(Point *, short, short);
extern void fakeQD_LocalToGlobal(Point *);
extern void fakeQD_GlobalToLocal(Point *);
extern short fakeQD_Random();
extern void fakeQD_StuffHex(void *, ConstStr255Param);
extern Boolean fakeQD_MacGetPixel(short, short);
extern void fakeQD_ScalePt(Point *, const Rect *, const Rect *);
extern void fakeQD_MapPt(Point *, const Rect *, const Rect *);
extern void fakeQD_MapRect(Rect *, const Rect *, const Rect *);
extern void fakeQD_MapRgn(RgnHandle, const Rect *, const Rect *);
extern void fakeQD_MapPoly(PolyHandle, const Rect *, const Rect *);
extern void fakeQD_StdRect(GrafVerb, const Rect *);
extern void fakeQD_StdRRect(GrafVerb, const Rect *, short, short);
extern void fakeQD_StdOval(GrafVerb, const Rect *);
extern void fakeQD_StdArc(GrafVerb, const Rect *, short, short);
extern void fakeQD_StdPoly(GrafVerb, PolyHandle);
extern void fakeQD_StdRgn(GrafVerb, RgnHandle);
extern void fakeQD_StdBits(const BitMap *, const Rect *, const Rect *, short, RgnHandle);
extern void fakeQD_StdComment(short, short, Handle);
extern void fakeQD_StdGetPic(void *, short);
extern void fakeQD_StdPutPic(const void *, short);
extern void fakeQD_StdOpcode(const Rect *, const Rect *, UInt16, SInt16);
extern void fakeQD_AddPt(Point, Point *);
extern Boolean fakeQD_EqualPt(Point, Point);
extern Boolean fakeQD_MacPtInRect(Point, const Rect *);
extern void fakeQD_Pt2Rect(Point, Point, Rect *);
extern void fakeQD_PtToAngle(const Rect *, Point, short *);
extern void fakeQD_SubPt(Point, Point *);
extern Boolean fakeQD_PtInRgn(Point, RgnHandle);
extern void fakeQD_StdLine(Point);
extern PixMapHandle fakeQD_NewPixMap();
extern void fakeQD_DisposePixMap(PixMapHandle);
extern void fakeQD_CopyPixMap(PixMapHandle, PixMapHandle);
extern PixPatHandle fakeQD_NewPixPat();
extern void fakeQD_DisposePixPat(PixPatHandle);
extern void fakeQD_CopyPixPat(PixPatHandle, PixPatHandle);
extern void fakeQD_PenPixPat(PixPatHandle);
extern void fakeQD_BackPixPat(PixPatHandle);
extern PixPatHandle fakeQD_GetPixPat(short);
extern void fakeQD_MakeRGBPat(PixPatHandle, const RGBColor *);
extern void fakeQD_FillCRect(const Rect *, PixPatHandle);
extern void fakeQD_FillCOval(const Rect *, PixPatHandle);
extern void fakeQD_FillCRoundRect(const Rect *, short, short, PixPatHandle);
extern void fakeQD_FillCArc(const Rect *, short, short, PixPatHandle);
extern void fakeQD_FillCRgn(RgnHandle, PixPatHandle);
extern void fakeQD_FillCPoly(PolyHandle, PixPatHandle);
extern void fakeQD_RGBForeColor(const RGBColor *);
extern void fakeQD_RGBBackColor(const RGBColor *);
extern void fakeQD_SetCPixel(short, short, const RGBColor *);
extern void fakeQD_SetPortPix(PixMapHandle);
extern void fakeQD_GetCPixel(short, short, RGBColor *);
extern void fakeQD_GetForeColor(RGBColor *);
extern void fakeQD_GetBackColor(RGBColor *);
extern void fakeQD_SeedCFill(const BitMap *, const BitMap *, const Rect *, const Rect *, short, short, ColorSearchUPP, long);
extern void fakeQD_CalcCMask(const BitMap *, const BitMap *, const Rect *, const Rect *, const RGBColor *, ColorSearchUPP, long);
extern PicHandle fakeQD_OpenCPicture(const OpenCPicParams *);
extern void fakeQD_OpColor(const RGBColor *);
extern void fakeQD_HiliteColor(const RGBColor *);
extern void fakeQD_DisposeCTable(CTabHandle);
extern CTabHandle fakeQD_GetCTable(short);
extern void fakeQD_AllocCursor();
extern void fakeQD_SetStdCProcs(CQDProcs *);
extern GDHandle fakeQD_GetMaxDevice(const Rect *);
extern long fakeQD_GetCTSeed();
extern GDHandle fakeQD_GetDeviceList();
extern GDHandle fakeQD_GetMainDevice();
extern GDHandle fakeQD_GetNextDevice(GDHandle);
extern Boolean fakeQD_TestDeviceAttribute(GDHandle, short);
extern void fakeQD_SetDeviceAttribute(GDHandle, short, Boolean);
extern void fakeQD_InitGDevice(short, long, GDHandle);
extern GDHandle fakeQD_NewGDevice(short, long);
extern void fakeQD_DisposeGDevice(GDHandle);
extern void fakeQD_SetGDevice(GDHandle);
extern GDHandle fakeQD_GetGDevice();
extern long fakeQD_Color2Index(const RGBColor *);
extern void fakeQD_Index2Color(long, RGBColor *);
extern void fakeQD_InvertColor(RGBColor *);
extern Boolean fakeQD_RealColor(const RGBColor *);
extern void fakeQD_GetSubTable(CTabHandle, short, CTabHandle);
extern void fakeQD_AddSearch(ColorSearchUPP);
extern void fakeQD_AddComp(ColorComplementUPP);
extern void fakeQD_DelSearch(ColorSearchUPP);
extern void fakeQD_DelComp(ColorComplementUPP);
extern void fakeQD_SetClientID(short);
extern void fakeQD_ProtectEntry(short, Boolean);
extern void fakeQD_ReserveEntry(short, Boolean);
extern void fakeQD_SetEntries(short, short, CSpecArray);
extern short fakeQD_QDError();
extern void fakeQD_CopyDeepMask(const BitMap *, const BitMap *, const BitMap *, const Rect *, const Rect *, const Rect *, short, RgnHandle);
extern Ptr fakeQD_GetMaskTable();
extern PatHandle fakeQD_GetPattern(short);
extern PicHandle fakeQD_GetPicture(short);
extern long fakeQD_DeltaPoint(Point, Point);
extern void fakeQD_ShieldCursor(const Rect *, Point);
extern void fakeQD_ScreenRes(short *, short *);
extern void fakeQD_GetIndPattern(Pattern *, short, short);
extern long fakeQD_deltapoint(Point *, Point *);
extern void fakeQD_PackBits(Ptr *, Ptr *, short);
extern void fakeQD_UnpackBits(Ptr *, Ptr *, short);
extern Fixed fakeQD_SlopeFromAngle(short);
extern short fakeQD_AngleFromSlope(Fixed);
extern OSErr fakeQD_OpenCursorComponent(Component, ComponentInstance *);
extern OSErr fakeQD_CloseCursorComponent(ComponentInstance);
extern OSErr fakeQD_SetCursorComponent(ComponentInstance);
extern OSErr fakeQD_CursorComponentChanged(ComponentInstance);
extern OSErr fakeQD_CursorComponentSetData(ComponentInstance, long);
extern CMError fakeQD_CWMatchPixMap(CMWorldRef, PixMap *, CMBitmapCallBackUPP, void *);
extern CMError fakeQD_CWCheckPixMap(CMWorldRef, PixMap *, CMBitmapCallBackUPP, void *, BitMap *);
extern CMError fakeQD_NCMBeginMatching(CMProfileRef, CMProfileRef, CMMatchRef *);
extern void fakeQD_CMEndMatching(CMMatchRef);
extern void fakeQD_NCMDrawMatchedPicture(PicHandle, CMProfileRef, Rect *);
extern void fakeQD_CMEnableMatchingComment(Boolean);
extern CMError fakeQD_NCMUseProfileComment(CMProfileRef, UInt32);
extern Boolean fakeQD_IsValidPort(CGrafPtr);
extern Boolean fakeQD_IsValidRgnHandle(RgnHandle);
extern PixMapHandle fakeQD_GetPortPixMap(CGrafPtr);
extern const BitMap * fakeQD_GetPortBitMapForCopyBits(CGrafPtr);
extern Rect * fakeQD_GetPortBounds(CGrafPtr, Rect *);
extern RGBColor * fakeQD_GetPortForeColor(CGrafPtr, RGBColor *);
extern RGBColor * fakeQD_GetPortBackColor(CGrafPtr, RGBColor *);
extern RGBColor * fakeQD_GetPortOpColor(CGrafPtr, RGBColor *);
extern RGBColor * fakeQD_GetPortHiliteColor(CGrafPtr, RGBColor *);
extern CQDProcsPtr fakeQD_GetPortGrafProcs(CGrafPtr);
extern short fakeQD_GetPortTextFont(CGrafPtr);
extern Style fakeQD_GetPortTextFace(CGrafPtr);
extern short fakeQD_GetPortTextMode(CGrafPtr);
extern short fakeQD_GetPortTextSize(CGrafPtr);
extern short fakeQD_GetPortChExtra(CGrafPtr);
extern short fakeQD_GetPortFracHPenLocation(CGrafPtr);
extern Fixed fakeQD_GetPortSpExtra(CGrafPtr);
extern short fakeQD_GetPortPenVisibility(CGrafPtr);
extern RgnHandle fakeQD_GetPortVisibleRegion(CGrafPtr, RgnHandle);
extern RgnHandle fakeQD_GetPortClipRegion(CGrafPtr, RgnHandle);
extern PixPatHandle fakeQD_GetPortBackPixPat(CGrafPtr, PixPatHandle);
extern PixPatHandle fakeQD_GetPortPenPixPat(CGrafPtr, PixPatHandle);
extern PixPatHandle fakeQD_GetPortFillPixPat(CGrafPtr, PixPatHandle);
extern Point * fakeQD_GetPortPenSize(CGrafPtr, Point *);
extern SInt32 fakeQD_GetPortPenMode(CGrafPtr);
extern Point * fakeQD_GetPortPenLocation(CGrafPtr, Point *);
extern Boolean fakeQD_IsPortRegionBeingDefined(CGrafPtr);
extern Boolean fakeQD_IsPortPictureBeingDefined(CGrafPtr);
extern Boolean fakeQD_IsPortPolyBeingDefined(CGrafPtr);
extern Boolean fakeQD_IsPortOffscreen(CGrafPtr);
extern Boolean fakeQD_IsPortColor(CGrafPtr);
extern Boolean fakeQD_IsPortVisibleRegionEmpty(CGrafPtr);
extern Boolean fakeQD_IsPortClipRegionEmpty(CGrafPtr);
extern void fakeQD_SectRegionWithPortClipRegion(CGrafPtr, RgnHandle);
extern void fakeQD_SectRegionWithPortVisibleRegion(CGrafPtr, RgnHandle);
extern Handle fakeQD_SwapPortPicSaveHandle(CGrafPtr, Handle);
extern Handle fakeQD_SwapPortPolySaveHandle(CGrafPtr, Handle);
extern Handle fakeQD_SwapPortRegionSaveHandle(CGrafPtr, Handle);
extern void fakeQD_SetPortBounds(CGrafPtr, const Rect *);
extern void fakeQD_SetPortOpColor(CGrafPtr, const RGBColor *);
extern void fakeQD_SetPortGrafProcs(CGrafPtr, CQDProcsPtr);
extern void fakeQD_SetPortTextFont(CGrafPtr, short);
extern void fakeQD_SetPortTextSize(CGrafPtr, short);
extern void fakeQD_SetPortTextFace(CGrafPtr, StyleParameter);
extern void fakeQD_SetPortTextMode(CGrafPtr, short);
extern void fakeQD_SetPortVisibleRegion(CGrafPtr, RgnHandle);
extern void fakeQD_SetPortClipRegion(CGrafPtr, RgnHandle);
extern void fakeQD_SetPortPenPixPat(CGrafPtr, PixPatHandle);
extern void fakeQD_SetPortFillPixPat(CGrafPtr, PixPatHandle);
extern void fakeQD_SetPortBackPixPat(CGrafPtr, PixPatHandle);
extern void fakeQD_SetPortPenSize(CGrafPtr, Point);
extern void fakeQD_SetPortPenMode(CGrafPtr, SInt32);
extern void fakeQD_SetPortFracHPenLocation(CGrafPtr, short);
extern Rect * fakeQD_GetPixBounds(PixMapHandle, Rect *);
extern short fakeQD_GetPixDepth(PixMapHandle);
extern long fakeQD_GetQDGlobalsRandomSeed();
extern BitMap * fakeQD_GetQDGlobalsScreenBits(BitMap *);
extern Pattern * fakeQD_GetQDGlobalsDarkGray(Pattern *);
extern Pattern * fakeQD_GetQDGlobalsLightGray(Pattern *);
extern Pattern * fakeQD_GetQDGlobalsGray(Pattern *);
extern Pattern * fakeQD_GetQDGlobalsBlack(Pattern *);
extern Pattern * fakeQD_GetQDGlobalsWhite(Pattern *);
extern CGrafPtr fakeQD_GetQDGlobalsThePort();
extern void fakeQD_SetQDGlobalsRandomSeed(long);
extern Rect * fakeQD_GetRegionBounds(RgnHandle, Rect *);
extern Boolean fakeQD_IsRegionRectangular(RgnHandle);
extern CGrafPtr fakeQD_CreateNewPort();
extern void fakeQD_DisposePort(CGrafPtr);
extern void fakeQD_SetQDError(OSErr);
extern Point * fakeQD_QDLocalToGlobalPoint(CGrafPtr, Point *);
extern Point * fakeQD_QDGlobalToLocalPoint(CGrafPtr, Point *);
extern Rect * fakeQD_QDLocalToGlobalRect(CGrafPtr, Rect *);
extern Rect * fakeQD_QDGlobalToLocalRect(CGrafPtr, Rect *);
extern RgnHandle fakeQD_QDLocalToGlobalRegion(CGrafPtr, RgnHandle);
extern RgnHandle fakeQD_QDGlobalToLocalRegion(CGrafPtr, RgnHandle);
extern Boolean fakeQD_QDIsPortBuffered(CGrafPtr);
extern Boolean fakeQD_QDIsPortBufferDirty(CGrafPtr);
extern void fakeQD_QDFlushPortBuffer(CGrafPtr, RgnHandle);
extern OSStatus fakeQD_QDGetDirtyRegion(CGrafPtr, RgnHandle);
extern OSStatus fakeQD_QDSetDirtyRegion(CGrafPtr, RgnHandle);
extern OSStatus fakeQD_QDAddRectToDirtyRegion(CGrafPtr, const Rect *);
extern OSStatus fakeQD_QDAddRegionToDirtyRegion(CGrafPtr, RgnHandle);
extern OSStatus fakeQD_CreateCGContextForPort(CGrafPtr, CGContextRef *);
extern OSStatus fakeQD_ClipCGContextToRegion(CGContextRef, const Rect *, RgnHandle);
extern OSStatus fakeQD_SyncCGContextOriginWithPort(CGContextRef, CGrafPtr);
extern OSStatus fakeQD_QDBeginCGContext(CGrafPtr, CGContextRef *);
extern OSStatus fakeQD_QDEndCGContext(CGrafPtr, CGContextRef *);
extern CGrafPtr fakeQD_CreateNewPortForCGDisplayID(UInt32);
extern void fakeQD_QDDisplayWaitCursor(Boolean);
extern void fakeQD_QDSetPatternOrigin(Point);
extern void fakeQD_QDGetPatternOrigin(Point *);
extern Boolean fakeQD_QDIsNamedPixMapCursorRegistered(const char);
extern OSStatus fakeQD_QDRegisterNamedPixMapCursor(PixMapHandle, PixMapHandle, Point, const char);
extern OSStatus fakeQD_QDUnregisterNamedPixMapCursur(const char);
extern OSStatus fakeQD_QDUnregisterNamedPixMapCursor(const char);
extern OSStatus fakeQD_QDSetNamedPixMapCursor(const char);
extern OSStatus fakeQD_QDSetCursorScale(float);
extern OSStatus fakeQD_QDGetCursorScale(float *);
extern OSStatus fakeQD_QDGetCursorData(Boolean, PixMapHandle *, Point *);
extern UInt32 fakeQD_QDSwapTextFlags(UInt32);
extern UInt32 fakeQD_QDSwapPortTextFlags(CGrafPtr, UInt32);
extern CGDirectDisplayID fakeQD_QDGetCGDirectDisplayID(GDHandle);
extern SInt16 fakeQD_LMGetScrVRes();
extern void fakeQD_LMSetScrVRes(SInt16);
extern SInt16 fakeQD_LMGetScrHRes();
extern void fakeQD_LMSetScrHRes(SInt16);
extern GDHandle fakeQD_LMGetMainDevice();
extern void fakeQD_LMSetMainDevice(GDHandle);
extern GDHandle fakeQD_LMGetDeviceList();
extern void fakeQD_LMSetDeviceList(GDHandle);
extern Handle fakeQD_LMGetQDColors();
extern void fakeQD_LMSetQDColors(Handle);
extern Handle fakeQD_LMGetWidthListHand();
extern void fakeQD_LMSetWidthListHand(Handle);
extern UInt8 fakeQD_LMGetHiliteMode();
extern void fakeQD_LMSetHiliteMode(UInt8);
extern Ptr fakeQD_LMGetWidthPtr();
extern void fakeQD_LMSetWidthPtr(Ptr);
extern Handle fakeQD_LMGetWidthTabHandle();
extern void fakeQD_LMSetWidthTabHandle(Handle);
extern SInt32 fakeQD_LMGetLastSPExtra();
extern void fakeQD_LMSetLastSPExtra(SInt32);
extern Handle fakeQD_LMGetLastFOND();
extern void fakeQD_LMSetLastFOND(Handle);
extern UInt8 fakeQD_LMGetFractEnable();
extern void fakeQD_LMSetFractEnable(UInt8);
extern GDHandle fakeQD_LMGetTheGDevice();
extern void fakeQD_LMSetTheGDevice(GDHandle);
extern void fakeQD_LMGetHiliteRGB(RGBColor *);
extern void fakeQD_LMSetHiliteRGB(const RGBColor *);
extern Boolean fakeQD_LMGetCursorNew();
extern void fakeQD_LMSetCursorNew(Boolean);
#ifdef __cplusplus
} // extern "C"
#endif
#endif
