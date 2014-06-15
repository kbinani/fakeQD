#include <Availability.h>
#include <ApplicationServices/ApplicationServices.h>
#if MAC_OS_X_VERSION_10_6 < MAC_OS_X_VERSION_MIN_REQUIRED
#define AddComp fakeQD_AddComp
#define AddPt fakeQD_AddPt
#define AddSearch fakeQD_AddSearch
#define AllocCursor fakeQD_AllocCursor
#define AngleFromSlope fakeQD_AngleFromSlope
#define BackColor fakeQD_BackColor
#define BackPat fakeQD_BackPat
#define BackPixPat fakeQD_BackPixPat
#define BitMapToRegion fakeQD_BitMapToRegion
#define CMEnableMatchingComment fakeQD_CMEnableMatchingComment
#define CMEndMatching fakeQD_CMEndMatching
#define CWCheckPixMap fakeQD_CWCheckPixMap
#define CWMatchPixMap fakeQD_CWMatchPixMap
#define CalcCMask fakeQD_CalcCMask
#define CalcMask fakeQD_CalcMask
#define ClipCGContextToRegion fakeQD_ClipCGContextToRegion
#define ClipRect fakeQD_ClipRect
#define CloseCursorComponent fakeQD_CloseCursorComponent
#define ClosePicture fakeQD_ClosePicture
#define ClosePoly fakeQD_ClosePoly
#define CloseRgn fakeQD_CloseRgn
#define Color2Index fakeQD_Color2Index
#define ColorBit fakeQD_ColorBit
#define CopyBits fakeQD_CopyBits
#define CopyDeepMask fakeQD_CopyDeepMask
#define CopyMask fakeQD_CopyMask
#define CopyPixMap fakeQD_CopyPixMap
#define CopyPixPat fakeQD_CopyPixPat
#define CreateCGContextForPort fakeQD_CreateCGContextForPort
#define CreateNewPort fakeQD_CreateNewPort
#define CreateNewPortForCGDisplayID fakeQD_CreateNewPortForCGDisplayID
#define CursorComponentChanged fakeQD_CursorComponentChanged
#define CursorComponentSetData fakeQD_CursorComponentSetData
#define DelComp fakeQD_DelComp
#define DelSearch fakeQD_DelSearch
#define DeltaPoint fakeQD_DeltaPoint
#define DiffRgn fakeQD_DiffRgn
#define DisposeCMBitmapCallBackUPP fakeQD_DisposeCMBitmapCallBackUPP
#define DisposeCTable fakeQD_DisposeCTable
#define DisposeColorComplementUPP fakeQD_DisposeColorComplementUPP
#define DisposeColorSearchUPP fakeQD_DisposeColorSearchUPP
#define DisposeDragGrayRgnUPP fakeQD_DisposeDragGrayRgnUPP
#define DisposeGDevice fakeQD_DisposeGDevice
#define DisposePixMap fakeQD_DisposePixMap
#define DisposePixPat fakeQD_DisposePixPat
#define DisposePort fakeQD_DisposePort
#define DisposeQDArcUPP fakeQD_DisposeQDArcUPP
#define DisposeQDBitsUPP fakeQD_DisposeQDBitsUPP
#define DisposeQDCommentUPP fakeQD_DisposeQDCommentUPP
#define DisposeQDGetPicUPP fakeQD_DisposeQDGetPicUPP
#define DisposeQDJShieldCursorUPP fakeQD_DisposeQDJShieldCursorUPP
#define DisposeQDLineUPP fakeQD_DisposeQDLineUPP
#define DisposeQDOpcodeUPP fakeQD_DisposeQDOpcodeUPP
#define DisposeQDOvalUPP fakeQD_DisposeQDOvalUPP
#define DisposeQDPolyUPP fakeQD_DisposeQDPolyUPP
#define DisposeQDPutPicUPP fakeQD_DisposeQDPutPicUPP
#define DisposeQDRRectUPP fakeQD_DisposeQDRRectUPP
#define DisposeQDRectUPP fakeQD_DisposeQDRectUPP
#define DisposeQDRgnUPP fakeQD_DisposeQDRgnUPP
#define DisposeQDStdGlyphsUPP fakeQD_DisposeQDStdGlyphsUPP
#define DisposeQDTextUPP fakeQD_DisposeQDTextUPP
#define DisposeQDTxMeasUPP fakeQD_DisposeQDTxMeasUPP
#define DisposeRegionToRectsUPP fakeQD_DisposeRegionToRectsUPP
#define DisposeRgn fakeQD_DisposeRgn
#define DrawPicture fakeQD_DrawPicture
#define EmptyRect fakeQD_EmptyRect
#define EmptyRgn fakeQD_EmptyRgn
#define EqualPt fakeQD_EqualPt
#define EraseArc fakeQD_EraseArc
#define EraseOval fakeQD_EraseOval
#define ErasePoly fakeQD_ErasePoly
#define EraseRect fakeQD_EraseRect
#define EraseRgn fakeQD_EraseRgn
#define EraseRoundRect fakeQD_EraseRoundRect
#define FillArc fakeQD_FillArc
#define FillCArc fakeQD_FillCArc
#define FillCOval fakeQD_FillCOval
#define FillCPoly fakeQD_FillCPoly
#define FillCRect fakeQD_FillCRect
#define FillCRgn fakeQD_FillCRgn
#define FillCRoundRect fakeQD_FillCRoundRect
#define FillOval fakeQD_FillOval
#define FillPoly fakeQD_FillPoly
#define FillRoundRect fakeQD_FillRoundRect
#define ForeColor fakeQD_ForeColor
#define FrameArc fakeQD_FrameArc
#define FrameOval fakeQD_FrameOval
#define FramePoly fakeQD_FramePoly
#define FrameRoundRect fakeQD_FrameRoundRect
#define GetBackColor fakeQD_GetBackColor
#define GetCPixel fakeQD_GetCPixel
#define GetCTSeed fakeQD_GetCTSeed
#define GetCTable fakeQD_GetCTable
#define GetClip fakeQD_GetClip
#define GetDeviceList fakeQD_GetDeviceList
#define GetForeColor fakeQD_GetForeColor
#define GetGDevice fakeQD_GetGDevice
#define GetIndPattern fakeQD_GetIndPattern
#define GetMainDevice fakeQD_GetMainDevice
#define GetMaskTable fakeQD_GetMaskTable
#define GetMaxDevice fakeQD_GetMaxDevice
#define GetNextDevice fakeQD_GetNextDevice
#define GetPattern fakeQD_GetPattern
#define GetPen fakeQD_GetPen
#define GetPicture fakeQD_GetPicture
#define GetPixBounds fakeQD_GetPixBounds
#define GetPixDepth fakeQD_GetPixDepth
#define GetPixPat fakeQD_GetPixPat
#define GetPort fakeQD_GetPort
#define GetPortBackColor fakeQD_GetPortBackColor
#define GetPortBackPixPat fakeQD_GetPortBackPixPat
#define GetPortBitMapForCopyBits fakeQD_GetPortBitMapForCopyBits
#define GetPortBounds fakeQD_GetPortBounds
#define GetPortChExtra fakeQD_GetPortChExtra
#define GetPortClipRegion fakeQD_GetPortClipRegion
#define GetPortFillPixPat fakeQD_GetPortFillPixPat
#define GetPortForeColor fakeQD_GetPortForeColor
#define GetPortFracHPenLocation fakeQD_GetPortFracHPenLocation
#define GetPortGrafProcs fakeQD_GetPortGrafProcs
#define GetPortHiliteColor fakeQD_GetPortHiliteColor
#define GetPortOpColor fakeQD_GetPortOpColor
#define GetPortPenLocation fakeQD_GetPortPenLocation
#define GetPortPenMode fakeQD_GetPortPenMode
#define GetPortPenPixPat fakeQD_GetPortPenPixPat
#define GetPortPenSize fakeQD_GetPortPenSize
#define GetPortPenVisibility fakeQD_GetPortPenVisibility
#define GetPortPixMap fakeQD_GetPortPixMap
#define GetPortSpExtra fakeQD_GetPortSpExtra
#define GetPortTextFace fakeQD_GetPortTextFace
#define GetPortTextFont fakeQD_GetPortTextFont
#define GetPortTextMode fakeQD_GetPortTextMode
#define GetPortTextSize fakeQD_GetPortTextSize
#define GetPortVisibleRegion fakeQD_GetPortVisibleRegion
#define GetQDGlobalsBlack fakeQD_GetQDGlobalsBlack
#define GetQDGlobalsDarkGray fakeQD_GetQDGlobalsDarkGray
#define GetQDGlobalsGray fakeQD_GetQDGlobalsGray
#define GetQDGlobalsLightGray fakeQD_GetQDGlobalsLightGray
#define GetQDGlobalsRandomSeed fakeQD_GetQDGlobalsRandomSeed
#define GetQDGlobalsScreenBits fakeQD_GetQDGlobalsScreenBits
#define GetQDGlobalsThePort fakeQD_GetQDGlobalsThePort
#define GetQDGlobalsWhite fakeQD_GetQDGlobalsWhite
#define GetRegionBounds fakeQD_GetRegionBounds
#define GetSubTable fakeQD_GetSubTable
#define GlobalToLocal fakeQD_GlobalToLocal
#define GrafDevice fakeQD_GrafDevice
#define HandleToRgn fakeQD_HandleToRgn
#define HideCursor fakeQD_HideCursor
#define HidePen fakeQD_HidePen
#define HiliteColor fakeQD_HiliteColor
#define Index2Color fakeQD_Index2Color
#define InitCursor fakeQD_InitCursor
#define InitGDevice fakeQD_InitGDevice
#define InsetRgn fakeQD_InsetRgn
#define InvertArc fakeQD_InvertArc
#define InvertColor fakeQD_InvertColor
#define InvertOval fakeQD_InvertOval
#define InvertPoly fakeQD_InvertPoly
#define InvertRoundRect fakeQD_InvertRoundRect
#define InvokeCMBitmapCallBackUPP fakeQD_InvokeCMBitmapCallBackUPP
#define InvokeColorComplementUPP fakeQD_InvokeColorComplementUPP
#define InvokeColorSearchUPP fakeQD_InvokeColorSearchUPP
#define InvokeDragGrayRgnUPP fakeQD_InvokeDragGrayRgnUPP
#define InvokeQDArcUPP fakeQD_InvokeQDArcUPP
#define InvokeQDBitsUPP fakeQD_InvokeQDBitsUPP
#define InvokeQDCommentUPP fakeQD_InvokeQDCommentUPP
#define InvokeQDGetPicUPP fakeQD_InvokeQDGetPicUPP
#define InvokeQDJShieldCursorUPP fakeQD_InvokeQDJShieldCursorUPP
#define InvokeQDLineUPP fakeQD_InvokeQDLineUPP
#define InvokeQDOpcodeUPP fakeQD_InvokeQDOpcodeUPP
#define InvokeQDOvalUPP fakeQD_InvokeQDOvalUPP
#define InvokeQDPolyUPP fakeQD_InvokeQDPolyUPP
#define InvokeQDPutPicUPP fakeQD_InvokeQDPutPicUPP
#define InvokeQDRRectUPP fakeQD_InvokeQDRRectUPP
#define InvokeQDRectUPP fakeQD_InvokeQDRectUPP
#define InvokeQDRgnUPP fakeQD_InvokeQDRgnUPP
#define InvokeQDStdGlyphsUPP fakeQD_InvokeQDStdGlyphsUPP
#define InvokeQDTextUPP fakeQD_InvokeQDTextUPP
#define InvokeQDTxMeasUPP fakeQD_InvokeQDTxMeasUPP
#define InvokeRegionToRectsUPP fakeQD_InvokeRegionToRectsUPP
#define IsPortClipRegionEmpty fakeQD_IsPortClipRegionEmpty
#define IsPortColor fakeQD_IsPortColor
#define IsPortOffscreen fakeQD_IsPortOffscreen
#define IsPortPictureBeingDefined fakeQD_IsPortPictureBeingDefined
#define IsPortPolyBeingDefined fakeQD_IsPortPolyBeingDefined
#define IsPortRegionBeingDefined fakeQD_IsPortRegionBeingDefined
#define IsPortVisibleRegionEmpty fakeQD_IsPortVisibleRegionEmpty
#define IsRegionRectangular fakeQD_IsRegionRectangular
#define IsValidPort fakeQD_IsValidPort
#define IsValidRgnHandle fakeQD_IsValidRgnHandle
#define KillPicture fakeQD_KillPicture
#define KillPoly fakeQD_KillPoly
#define LMGetCursorNew fakeQD_LMGetCursorNew
#define LMGetDeviceList fakeQD_LMGetDeviceList
#define LMGetFractEnable fakeQD_LMGetFractEnable
#define LMGetHiliteMode fakeQD_LMGetHiliteMode
#define LMGetHiliteRGB fakeQD_LMGetHiliteRGB
#define LMGetLastFOND fakeQD_LMGetLastFOND
#define LMGetLastSPExtra fakeQD_LMGetLastSPExtra
#define LMGetMainDevice fakeQD_LMGetMainDevice
#define LMGetQDColors fakeQD_LMGetQDColors
#define LMGetScrHRes fakeQD_LMGetScrHRes
#define LMGetScrVRes fakeQD_LMGetScrVRes
#define LMGetTheGDevice fakeQD_LMGetTheGDevice
#define LMGetWidthListHand fakeQD_LMGetWidthListHand
#define LMGetWidthPtr fakeQD_LMGetWidthPtr
#define LMGetWidthTabHandle fakeQD_LMGetWidthTabHandle
#define LMSetCursorNew fakeQD_LMSetCursorNew
#define LMSetDeviceList fakeQD_LMSetDeviceList
#define LMSetFractEnable fakeQD_LMSetFractEnable
#define LMSetHiliteMode fakeQD_LMSetHiliteMode
#define LMSetHiliteRGB fakeQD_LMSetHiliteRGB
#define LMSetLastFOND fakeQD_LMSetLastFOND
#define LMSetLastSPExtra fakeQD_LMSetLastSPExtra
#define LMSetMainDevice fakeQD_LMSetMainDevice
#define LMSetQDColors fakeQD_LMSetQDColors
#define LMSetScrHRes fakeQD_LMSetScrHRes
#define LMSetScrVRes fakeQD_LMSetScrVRes
#define LMSetTheGDevice fakeQD_LMSetTheGDevice
#define LMSetWidthListHand fakeQD_LMSetWidthListHand
#define LMSetWidthPtr fakeQD_LMSetWidthPtr
#define LMSetWidthTabHandle fakeQD_LMSetWidthTabHandle
#define Line fakeQD_Line
#define LocalToGlobal fakeQD_LocalToGlobal
#define LockPortBits fakeQD_LockPortBits
#define MacCopyRgn fakeQD_MacCopyRgn
#define MacEqualRect fakeQD_MacEqualRect
#define MacEqualRgn fakeQD_MacEqualRgn
#define MacFillRect fakeQD_MacFillRect
#define MacFillRgn fakeQD_MacFillRgn
#define MacFrameRect fakeQD_MacFrameRect
#define MacFrameRgn fakeQD_MacFrameRgn
#define MacGetPixel fakeQD_MacGetPixel
#define MacInsetRect fakeQD_MacInsetRect
#define MacInvertRect fakeQD_MacInvertRect
#define MacInvertRgn fakeQD_MacInvertRgn
#define MacLineTo fakeQD_MacLineTo
#define MacOffsetRect fakeQD_MacOffsetRect
#define MacOffsetRgn fakeQD_MacOffsetRgn
#define MacPaintRgn fakeQD_MacPaintRgn
#define MacPtInRect fakeQD_MacPtInRect
#define MacSetPort fakeQD_MacSetPort
#define MacSetRect fakeQD_MacSetRect
#define MacSetRectRgn fakeQD_MacSetRectRgn
#define MacShowCursor fakeQD_MacShowCursor
#define MacUnionRect fakeQD_MacUnionRect
#define MacUnionRgn fakeQD_MacUnionRgn
#define MacXorRgn fakeQD_MacXorRgn
#define MakeRGBPat fakeQD_MakeRGBPat
#define MapPoly fakeQD_MapPoly
#define MapPt fakeQD_MapPt
#define MapRect fakeQD_MapRect
#define MapRgn fakeQD_MapRgn
#define Move fakeQD_Move
#define MovePortTo fakeQD_MovePortTo
#define MoveTo fakeQD_MoveTo
#define NCMBeginMatching fakeQD_NCMBeginMatching
#define NCMDrawMatchedPicture fakeQD_NCMDrawMatchedPicture
#define NCMUseProfileComment fakeQD_NCMUseProfileComment
#define NewCMBitmapCallBackUPP fakeQD_NewCMBitmapCallBackUPP
#define NewColorComplementUPP fakeQD_NewColorComplementUPP
#define NewColorSearchUPP fakeQD_NewColorSearchUPP
#define NewDragGrayRgnUPP fakeQD_NewDragGrayRgnUPP
#define NewGDevice fakeQD_NewGDevice
#define NewPixMap fakeQD_NewPixMap
#define NewPixPat fakeQD_NewPixPat
#define NewQDArcUPP fakeQD_NewQDArcUPP
#define NewQDBitsUPP fakeQD_NewQDBitsUPP
#define NewQDCommentUPP fakeQD_NewQDCommentUPP
#define NewQDGetPicUPP fakeQD_NewQDGetPicUPP
#define NewQDJShieldCursorUPP fakeQD_NewQDJShieldCursorUPP
#define NewQDLineUPP fakeQD_NewQDLineUPP
#define NewQDOpcodeUPP fakeQD_NewQDOpcodeUPP
#define NewQDOvalUPP fakeQD_NewQDOvalUPP
#define NewQDPolyUPP fakeQD_NewQDPolyUPP
#define NewQDPutPicUPP fakeQD_NewQDPutPicUPP
#define NewQDRRectUPP fakeQD_NewQDRRectUPP
#define NewQDRectUPP fakeQD_NewQDRectUPP
#define NewQDRgnUPP fakeQD_NewQDRgnUPP
#define NewQDStdGlyphsUPP fakeQD_NewQDStdGlyphsUPP
#define NewQDTextUPP fakeQD_NewQDTextUPP
#define NewQDTxMeasUPP fakeQD_NewQDTxMeasUPP
#define NewRegionToRectsUPP fakeQD_NewRegionToRectsUPP
#define NewRgn fakeQD_NewRgn
#define ObscureCursor fakeQD_ObscureCursor
#define OffsetPoly fakeQD_OffsetPoly
#define OpColor fakeQD_OpColor
#define OpenCPicture fakeQD_OpenCPicture
#define OpenCursorComponent fakeQD_OpenCursorComponent
#define OpenPicture fakeQD_OpenPicture
#define OpenPoly fakeQD_OpenPoly
#define OpenRgn fakeQD_OpenRgn
#define PackBits fakeQD_PackBits
#define PaintArc fakeQD_PaintArc
#define PaintOval fakeQD_PaintOval
#define PaintPoly fakeQD_PaintPoly
#define PaintRect fakeQD_PaintRect
#define PaintRoundRect fakeQD_PaintRoundRect
#define PenMode fakeQD_PenMode
#define PenNormal fakeQD_PenNormal
#define PenPat fakeQD_PenPat
#define PenPixPat fakeQD_PenPixPat
#define PenSize fakeQD_PenSize
#define PicComment fakeQD_PicComment
#define PortSize fakeQD_PortSize
#define ProtectEntry fakeQD_ProtectEntry
#define Pt2Rect fakeQD_Pt2Rect
#define PtInRgn fakeQD_PtInRgn
#define PtToAngle fakeQD_PtToAngle
#define QDAddRectToDirtyRegion fakeQD_QDAddRectToDirtyRegion
#define QDAddRegionToDirtyRegion fakeQD_QDAddRegionToDirtyRegion
#define QDBeginCGContext fakeQD_QDBeginCGContext
#define QDDisplayWaitCursor fakeQD_QDDisplayWaitCursor
#define QDEndCGContext fakeQD_QDEndCGContext
#define QDError fakeQD_QDError
#define QDFlushPortBuffer fakeQD_QDFlushPortBuffer
#define QDGetCGDirectDisplayID fakeQD_QDGetCGDirectDisplayID
#define QDGetCursorData fakeQD_QDGetCursorData
#define QDGetCursorScale fakeQD_QDGetCursorScale
#define QDGetDirtyRegion fakeQD_QDGetDirtyRegion
#define QDGetPatternOrigin fakeQD_QDGetPatternOrigin
#define QDGetPictureBounds fakeQD_QDGetPictureBounds
#define QDGlobalToLocalPoint fakeQD_QDGlobalToLocalPoint
#define QDGlobalToLocalRect fakeQD_QDGlobalToLocalRect
#define QDGlobalToLocalRegion fakeQD_QDGlobalToLocalRegion
#define QDIsNamedPixMapCursorRegistered fakeQD_QDIsNamedPixMapCursorRegistered
#define QDIsPortBufferDirty fakeQD_QDIsPortBufferDirty
#define QDIsPortBuffered fakeQD_QDIsPortBuffered
#define QDLocalToGlobalPoint fakeQD_QDLocalToGlobalPoint
#define QDLocalToGlobalRect fakeQD_QDLocalToGlobalRect
#define QDLocalToGlobalRegion fakeQD_QDLocalToGlobalRegion
#define QDRegionToRects fakeQD_QDRegionToRects
#define QDRegisterNamedPixMapCursor fakeQD_QDRegisterNamedPixMapCursor
#define QDSetCursorScale fakeQD_QDSetCursorScale
#define QDSetDirtyRegion fakeQD_QDSetDirtyRegion
#define QDSetNamedPixMapCursor fakeQD_QDSetNamedPixMapCursor
#define QDSetPatternOrigin fakeQD_QDSetPatternOrigin
#define QDSwapPort fakeQD_QDSwapPort
#define QDSwapPortTextFlags fakeQD_QDSwapPortTextFlags
#define QDSwapTextFlags fakeQD_QDSwapTextFlags
#define QDUnregisterNamedPixMapCursor fakeQD_QDUnregisterNamedPixMapCursor
#define QDUnregisterNamedPixMapCursur fakeQD_QDUnregisterNamedPixMapCursur
#define RGBBackColor fakeQD_RGBBackColor
#define RGBForeColor fakeQD_RGBForeColor
#define Random fakeQD_Random
#define RealColor fakeQD_RealColor
#define RectInRgn fakeQD_RectInRgn
#define RectRgn fakeQD_RectRgn
#define ReserveEntry fakeQD_ReserveEntry
#define RgnToHandle fakeQD_RgnToHandle
#define ScalePt fakeQD_ScalePt
#define ScreenRes fakeQD_ScreenRes
#define ScrollRect fakeQD_ScrollRect
#define SectRect fakeQD_SectRect
#define SectRegionWithPortClipRegion fakeQD_SectRegionWithPortClipRegion
#define SectRegionWithPortVisibleRegion fakeQD_SectRegionWithPortVisibleRegion
#define SectRgn fakeQD_SectRgn
#define SeedCFill fakeQD_SeedCFill
#define SeedFill fakeQD_SeedFill
#define SetCPixel fakeQD_SetCPixel
#define SetClientID fakeQD_SetClientID
#define SetClip fakeQD_SetClip
#define SetCursorComponent fakeQD_SetCursorComponent
#define SetDeviceAttribute fakeQD_SetDeviceAttribute
#define SetEmptyRgn fakeQD_SetEmptyRgn
#define SetEntries fakeQD_SetEntries
#define SetGDevice fakeQD_SetGDevice
#define SetOrigin fakeQD_SetOrigin
#define SetPortBackPixPat fakeQD_SetPortBackPixPat
#define SetPortBits fakeQD_SetPortBits
#define SetPortBounds fakeQD_SetPortBounds
#define SetPortClipRegion fakeQD_SetPortClipRegion
#define SetPortFillPixPat fakeQD_SetPortFillPixPat
#define SetPortFracHPenLocation fakeQD_SetPortFracHPenLocation
#define SetPortGrafProcs fakeQD_SetPortGrafProcs
#define SetPortOpColor fakeQD_SetPortOpColor
#define SetPortPenMode fakeQD_SetPortPenMode
#define SetPortPenPixPat fakeQD_SetPortPenPixPat
#define SetPortPenSize fakeQD_SetPortPenSize
#define SetPortPix fakeQD_SetPortPix
#define SetPortTextFace fakeQD_SetPortTextFace
#define SetPortTextFont fakeQD_SetPortTextFont
#define SetPortTextMode fakeQD_SetPortTextMode
#define SetPortTextSize fakeQD_SetPortTextSize
#define SetPortVisibleRegion fakeQD_SetPortVisibleRegion
#define SetPt fakeQD_SetPt
#define SetQDError fakeQD_SetQDError
#define SetQDGlobalsRandomSeed fakeQD_SetQDGlobalsRandomSeed
#define SetStdCProcs fakeQD_SetStdCProcs
#define ShieldCursor fakeQD_ShieldCursor
#define ShowPen fakeQD_ShowPen
#define SlopeFromAngle fakeQD_SlopeFromAngle
#define StdArc fakeQD_StdArc
#define StdBits fakeQD_StdBits
#define StdComment fakeQD_StdComment
#define StdGetPic fakeQD_StdGetPic
#define StdLine fakeQD_StdLine
#define StdOpcode fakeQD_StdOpcode
#define StdOval fakeQD_StdOval
#define StdPoly fakeQD_StdPoly
#define StdPutPic fakeQD_StdPutPic
#define StdRRect fakeQD_StdRRect
#define StdRect fakeQD_StdRect
#define StdRgn fakeQD_StdRgn
#define StuffHex fakeQD_StuffHex
#define SubPt fakeQD_SubPt
#define SwapPortPicSaveHandle fakeQD_SwapPortPicSaveHandle
#define SwapPortPolySaveHandle fakeQD_SwapPortPolySaveHandle
#define SwapPortRegionSaveHandle fakeQD_SwapPortRegionSaveHandle
#define SyncCGContextOriginWithPort fakeQD_SyncCGContextOriginWithPort
#define TestDeviceAttribute fakeQD_TestDeviceAttribute
#define UnlockPortBits fakeQD_UnlockPortBits
#define UnpackBits fakeQD_UnpackBits
#define deltapoint fakeQD_deltapoint
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
#define invalColReq fakeQD_invalColReq
#define srcCopy fakeQD_srcCopy
#define srcOr fakeQD_srcOr
#define srcXor fakeQD_srcXor
#define srcBic fakeQD_srcBic
#define notSrcCopy fakeQD_notSrcCopy
#define notSrcOr fakeQD_notSrcOr
#define notSrcXor fakeQD_notSrcXor
#define notSrcBic fakeQD_notSrcBic
#define patCopy fakeQD_patCopy
#define patOr fakeQD_patOr
#define patXor fakeQD_patXor
#define patBic fakeQD_patBic
#define notPatCopy fakeQD_notPatCopy
#define notPatOr fakeQD_notPatOr
#define notPatXor fakeQD_notPatXor
#define notPatBic fakeQD_notPatBic
#define grayishTextOr fakeQD_grayishTextOr
#define hilitetransfermode fakeQD_hilitetransfermode
#define hilite fakeQD_hilite
#define blend fakeQD_blend
#define addPin fakeQD_addPin
#define addOver fakeQD_addOver
#define subPin fakeQD_subPin
#define addMax fakeQD_addMax
#define adMax fakeQD_adMax
#define subOver fakeQD_subOver
#define adMin fakeQD_adMin
#define ditherCopy fakeQD_ditherCopy
#define transparent fakeQD_transparent
#define italicBit fakeQD_italicBit
#define ulineBit fakeQD_ulineBit
#define outlineBit fakeQD_outlineBit
#define shadowBit fakeQD_shadowBit
#define condenseBit fakeQD_condenseBit
#define extendBit fakeQD_extendBit
#define normalBit fakeQD_normalBit
#define inverseBit fakeQD_inverseBit
#define redBit fakeQD_redBit
#define greenBit fakeQD_greenBit
#define blueBit fakeQD_blueBit
#define cyanBit fakeQD_cyanBit
#define magentaBit fakeQD_magentaBit
#define yellowBit fakeQD_yellowBit
#define blackBit fakeQD_blackBit
#define blackColor fakeQD_blackColor
#define whiteColor fakeQD_whiteColor
#define redColor fakeQD_redColor
#define greenColor fakeQD_greenColor
#define blueColor fakeQD_blueColor
#define cyanColor fakeQD_cyanColor
#define magentaColor fakeQD_magentaColor
#define yellowColor fakeQD_yellowColor
#define picLParen fakeQD_picLParen
#define picRParen fakeQD_picRParen
#define clutType fakeQD_clutType
#define fixedType fakeQD_fixedType
#define directType fakeQD_directType
#define gdDevType fakeQD_gdDevType
#define interlacedDevice fakeQD_interlacedDevice
#define hwMirroredDevice fakeQD_hwMirroredDevice
#define roundedDevice fakeQD_roundedDevice
#define hasAuxMenuBar fakeQD_hasAuxMenuBar
#define burstDevice fakeQD_burstDevice
#define ext32Device fakeQD_ext32Device
#define ramInit fakeQD_ramInit
#define mainScreen fakeQD_mainScreen
#define allInit fakeQD_allInit
#define screenDevice fakeQD_screenDevice
#define noDriver fakeQD_noDriver
#define screenActive fakeQD_screenActive
#define hiliteBit fakeQD_hiliteBit
#define pHiliteBit fakeQD_pHiliteBit
#define defQDColors fakeQD_defQDColors
#define RGBDirect fakeQD_RGBDirect
#define baseAddr32 fakeQD_baseAddr32
#define sysPatListID fakeQD_sysPatListID
#define iBeamCursor fakeQD_iBeamCursor
#define crossCursor fakeQD_crossCursor
#define plusCursor fakeQD_plusCursor
#define watchCursor fakeQD_watchCursor
#define kQDGrafVerbFrame fakeQD_kQDGrafVerbFrame
#define kQDGrafVerbPaint fakeQD_kQDGrafVerbPaint
#define kQDGrafVerbErase fakeQD_kQDGrafVerbErase
#define kQDGrafVerbInvert fakeQD_kQDGrafVerbInvert
#define kQDGrafVerbFill fakeQD_kQDGrafVerbFill
#define chunky fakeQD_chunky
#define chunkyPlanar fakeQD_chunkyPlanar
#define planar fakeQD_planar
#define singleDevicesBit fakeQD_singleDevicesBit
#define dontMatchSeedsBit fakeQD_dontMatchSeedsBit
#define allDevicesBit fakeQD_allDevicesBit
#define singleDevices fakeQD_singleDevices
#define dontMatchSeeds fakeQD_dontMatchSeeds
#define allDevices fakeQD_allDevices
#define kPrinterFontStatus fakeQD_kPrinterFontStatus
#define kPrinterScalingStatus fakeQD_kPrinterScalingStatus
#define kNoConstraint fakeQD_kNoConstraint
#define kVerticalConstraint fakeQD_kVerticalConstraint
#define kHorizontalConstraint fakeQD_kHorizontalConstraint
#define k1MonochromePixelFormat fakeQD_k1MonochromePixelFormat
#define k2IndexedPixelFormat fakeQD_k2IndexedPixelFormat
#define k4IndexedPixelFormat fakeQD_k4IndexedPixelFormat
#define k8IndexedPixelFormat fakeQD_k8IndexedPixelFormat
#define k16BE555PixelFormat fakeQD_k16BE555PixelFormat
#define k24RGBPixelFormat fakeQD_k24RGBPixelFormat
#define k32ARGBPixelFormat fakeQD_k32ARGBPixelFormat
#define k1IndexedGrayPixelFormat fakeQD_k1IndexedGrayPixelFormat
#define k2IndexedGrayPixelFormat fakeQD_k2IndexedGrayPixelFormat
#define k4IndexedGrayPixelFormat fakeQD_k4IndexedGrayPixelFormat
#define k8IndexedGrayPixelFormat fakeQD_k8IndexedGrayPixelFormat
#define k16LE555PixelFormat fakeQD_k16LE555PixelFormat
#define k16LE5551PixelFormat fakeQD_k16LE5551PixelFormat
#define k16BE565PixelFormat fakeQD_k16BE565PixelFormat
#define k16LE565PixelFormat fakeQD_k16LE565PixelFormat
#define k24BGRPixelFormat fakeQD_k24BGRPixelFormat
#define k32BGRAPixelFormat fakeQD_k32BGRAPixelFormat
#define k32ABGRPixelFormat fakeQD_k32ABGRPixelFormat
#define k32RGBAPixelFormat fakeQD_k32RGBAPixelFormat
#define kYUVSPixelFormat fakeQD_kYUVSPixelFormat
#define kYUVUPixelFormat fakeQD_kYUVUPixelFormat
#define kYVU9PixelFormat fakeQD_kYVU9PixelFormat
#define kYUV411PixelFormat fakeQD_kYUV411PixelFormat
#define kYVYU422PixelFormat fakeQD_kYVYU422PixelFormat
#define kUYVY422PixelFormat fakeQD_kUYVY422PixelFormat
#define kYUV211PixelFormat fakeQD_kYUV211PixelFormat
#define k2vuyPixelFormat fakeQD_k2vuyPixelFormat
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
    fakeQD_kQDDontChangeFlags = (int)0xFFFFFFFF,
    fakeQD_invalColReq = -1,
    fakeQD_srcCopy = 0,
    fakeQD_srcOr = 1,
    fakeQD_srcXor = 2,
    fakeQD_srcBic = 3,
    fakeQD_notSrcCopy = 4,
    fakeQD_notSrcOr = 5,
    fakeQD_notSrcXor = 6,
    fakeQD_notSrcBic = 7,
    fakeQD_patCopy = 8,
    fakeQD_patOr = 9,
    fakeQD_patXor = 10,
    fakeQD_patBic = 11,
    fakeQD_notPatCopy = 12,
    fakeQD_notPatOr = 13,
    fakeQD_notPatXor = 14,
    fakeQD_notPatBic = 15,
    fakeQD_grayishTextOr = 49,
    fakeQD_hilitetransfermode = 50,
    fakeQD_hilite = 50,
    fakeQD_blend = 32,
    fakeQD_addPin = 33,
    fakeQD_addOver = 34,
    fakeQD_subPin = 35,
    fakeQD_addMax = 37,
    fakeQD_adMax = 37,
    fakeQD_subOver = 38,
    fakeQD_adMin = 39,
    fakeQD_ditherCopy = 64,
    fakeQD_transparent = 36,
    fakeQD_italicBit = 1,
    fakeQD_ulineBit = 2,
    fakeQD_outlineBit = 3,
    fakeQD_shadowBit = 4,
    fakeQD_condenseBit = 5,
    fakeQD_extendBit = 6,
    fakeQD_normalBit = 0,
    fakeQD_inverseBit = 1,
    fakeQD_redBit = 4,
    fakeQD_greenBit = 3,
    fakeQD_blueBit = 2,
    fakeQD_cyanBit = 8,
    fakeQD_magentaBit = 7,
    fakeQD_yellowBit = 6,
    fakeQD_blackBit = 5,
    fakeQD_blackColor = 33,
    fakeQD_whiteColor = 30,
    fakeQD_redColor = 205,
    fakeQD_greenColor = 341,
    fakeQD_blueColor = 409,
    fakeQD_cyanColor = 273,
    fakeQD_magentaColor = 137,
    fakeQD_yellowColor = 69,
    fakeQD_picLParen = 0,
    fakeQD_picRParen = 1,
    fakeQD_clutType = 0,
    fakeQD_fixedType = 1,
    fakeQD_directType = 2,
    fakeQD_gdDevType = 0,
    fakeQD_interlacedDevice = 2,
    fakeQD_hwMirroredDevice = 4,
    fakeQD_roundedDevice = 5,
    fakeQD_hasAuxMenuBar = 6,
    fakeQD_burstDevice = 7,
    fakeQD_ext32Device = 8,
    fakeQD_ramInit = 10,
    fakeQD_mainScreen = 11,
    fakeQD_allInit = 12,
    fakeQD_screenDevice = 13,
    fakeQD_noDriver = 14,
    fakeQD_screenActive = 15,
    fakeQD_hiliteBit = 7,
    fakeQD_pHiliteBit = 0,
    fakeQD_defQDColors = 127,
    fakeQD_RGBDirect = 16,
    fakeQD_baseAddr32 = 4,
    fakeQD_sysPatListID = 0,
    fakeQD_iBeamCursor = 1,
    fakeQD_crossCursor = 2,
    fakeQD_plusCursor = 3,
    fakeQD_watchCursor = 4,
    fakeQD_kQDGrafVerbFrame = 0,
    fakeQD_kQDGrafVerbPaint = 1,
    fakeQD_kQDGrafVerbErase = 2,
    fakeQD_kQDGrafVerbInvert = 3,
    fakeQD_kQDGrafVerbFill = 4,
    fakeQD_chunky = 0,
    fakeQD_chunkyPlanar = 1,
    fakeQD_planar = 2,
    fakeQD_singleDevicesBit = 0,
    fakeQD_dontMatchSeedsBit = 1,
    fakeQD_allDevicesBit = 2,
    fakeQD_singleDevices = 1 << singleDevicesBit,
    fakeQD_dontMatchSeeds = 1 << dontMatchSeedsBit,
    fakeQD_allDevices = 1 << allDevicesBit,
    fakeQD_kPrinterFontStatus = 0,
    fakeQD_kPrinterScalingStatus = 1,
    fakeQD_kNoConstraint = 0,
    fakeQD_kVerticalConstraint = 1,
    fakeQD_kHorizontalConstraint = 2,
    fakeQD_k1MonochromePixelFormat = 0x00000001,
    fakeQD_k2IndexedPixelFormat = 0x00000002,
    fakeQD_k4IndexedPixelFormat = 0x00000004,
    fakeQD_k8IndexedPixelFormat = 0x00000008,
    fakeQD_k16BE555PixelFormat = 0x00000010,
    fakeQD_k24RGBPixelFormat = 0x00000018,
    fakeQD_k32ARGBPixelFormat = 0x00000020,
    fakeQD_k1IndexedGrayPixelFormat = 0x00000021,
    fakeQD_k2IndexedGrayPixelFormat = 0x00000022,
    fakeQD_k4IndexedGrayPixelFormat = 0x00000024,
    fakeQD_k8IndexedGrayPixelFormat = 0x00000028,
    fakeQD_k16LE555PixelFormat = 'L555',
    fakeQD_k16LE5551PixelFormat = '5551',
    fakeQD_k16BE565PixelFormat = 'B565',
    fakeQD_k16LE565PixelFormat = 'L565',
    fakeQD_k24BGRPixelFormat = '24BG',
    fakeQD_k32BGRAPixelFormat = 'BGRA',
    fakeQD_k32ABGRPixelFormat = 'ABGR',
    fakeQD_k32RGBAPixelFormat = 'RGBA',
    fakeQD_kYUVSPixelFormat = 'yuvs',
    fakeQD_kYUVUPixelFormat = 'yuvu',
    fakeQD_kYVU9PixelFormat = 'YVU9',
    fakeQD_kYUV411PixelFormat = 'Y411',
    fakeQD_kYVYU422PixelFormat = 'YVYU',
    fakeQD_kUYVY422PixelFormat = 'UYVY',
    fakeQD_kYUV211PixelFormat = 'Y211',
    fakeQD_k2vuyPixelFormat = '2vuy'
};
#ifdef __cplusplus
extern "C" {
#endif
extern void fakeQD_AddComp(ColorComplementUPP);
extern void fakeQD_AddPt(Point, Point *);
extern void fakeQD_AddSearch(ColorSearchUPP);
extern void fakeQD_AllocCursor();
extern short fakeQD_AngleFromSlope(Fixed);
extern void fakeQD_BackColor(long);
extern void fakeQD_BackPat(const Pattern *);
extern void fakeQD_BackPixPat(PixPatHandle);
extern OSErr fakeQD_BitMapToRegion(RgnHandle, const BitMap *);
extern void fakeQD_CMEnableMatchingComment(Boolean);
extern void fakeQD_CMEndMatching(CMMatchRef);
extern CMError fakeQD_CWCheckPixMap(CMWorldRef, PixMap *, CMBitmapCallBackUPP, void *, BitMap *);
extern CMError fakeQD_CWMatchPixMap(CMWorldRef, PixMap *, CMBitmapCallBackUPP, void *);
extern void fakeQD_CalcCMask(const BitMap *, const BitMap *, const Rect *, const Rect *, const RGBColor *, ColorSearchUPP, long);
extern void fakeQD_CalcMask(const void *, void *, short, short, short, short);
extern OSStatus fakeQD_ClipCGContextToRegion(CGContextRef, const Rect *, RgnHandle);
extern void fakeQD_ClipRect(const Rect *);
extern OSErr fakeQD_CloseCursorComponent(ComponentInstance);
extern void fakeQD_ClosePicture();
extern void fakeQD_ClosePoly();
extern void fakeQD_CloseRgn(RgnHandle);
extern long fakeQD_Color2Index(const RGBColor *);
extern void fakeQD_ColorBit(short);
extern void fakeQD_CopyBits(const BitMap *, const BitMap *, const Rect *, const Rect *, short, RgnHandle);
extern void fakeQD_CopyDeepMask(const BitMap *, const BitMap *, const BitMap *, const Rect *, const Rect *, const Rect *, short, RgnHandle);
extern void fakeQD_CopyMask(const BitMap *, const BitMap *, const BitMap *, const Rect *, const Rect *, const Rect *);
extern void fakeQD_CopyPixMap(PixMapHandle, PixMapHandle);
extern void fakeQD_CopyPixPat(PixPatHandle, PixPatHandle);
extern OSStatus fakeQD_CreateCGContextForPort(CGrafPtr, CGContextRef *);
extern CGrafPtr fakeQD_CreateNewPort();
extern CGrafPtr fakeQD_CreateNewPortForCGDisplayID(UInt32);
extern OSErr fakeQD_CursorComponentChanged(ComponentInstance);
extern OSErr fakeQD_CursorComponentSetData(ComponentInstance, long);
extern void fakeQD_DelComp(ColorComplementUPP);
extern void fakeQD_DelSearch(ColorSearchUPP);
extern long fakeQD_DeltaPoint(Point, Point);
extern void fakeQD_DiffRgn(RgnHandle, RgnHandle, RgnHandle);
extern void fakeQD_DisposeCMBitmapCallBackUPP(CMBitmapCallBackUPP);
extern void fakeQD_DisposeCTable(CTabHandle);
extern void fakeQD_DisposeColorComplementUPP(ColorComplementUPP);
extern void fakeQD_DisposeColorSearchUPP(ColorSearchUPP);
extern void fakeQD_DisposeDragGrayRgnUPP(DragGrayRgnUPP);
extern void fakeQD_DisposeGDevice(GDHandle);
extern void fakeQD_DisposePixMap(PixMapHandle);
extern void fakeQD_DisposePixPat(PixPatHandle);
extern void fakeQD_DisposePort(CGrafPtr);
extern void fakeQD_DisposeQDArcUPP(QDArcUPP);
extern void fakeQD_DisposeQDBitsUPP(QDBitsUPP);
extern void fakeQD_DisposeQDCommentUPP(QDCommentUPP);
extern void fakeQD_DisposeQDGetPicUPP(QDGetPicUPP);
extern void fakeQD_DisposeQDJShieldCursorUPP(QDJShieldCursorUPP);
extern void fakeQD_DisposeQDLineUPP(QDLineUPP);
extern void fakeQD_DisposeQDOpcodeUPP(QDOpcodeUPP);
extern void fakeQD_DisposeQDOvalUPP(QDOvalUPP);
extern void fakeQD_DisposeQDPolyUPP(QDPolyUPP);
extern void fakeQD_DisposeQDPutPicUPP(QDPutPicUPP);
extern void fakeQD_DisposeQDRRectUPP(QDRRectUPP);
extern void fakeQD_DisposeQDRectUPP(QDRectUPP);
extern void fakeQD_DisposeQDRgnUPP(QDRgnUPP);
extern void fakeQD_DisposeQDStdGlyphsUPP(QDStdGlyphsUPP);
extern void fakeQD_DisposeQDTextUPP(QDTextUPP);
extern void fakeQD_DisposeQDTxMeasUPP(QDTxMeasUPP);
extern void fakeQD_DisposeRegionToRectsUPP(RegionToRectsUPP);
extern void fakeQD_DisposeRgn(RgnHandle);
extern void fakeQD_DrawPicture(PicHandle, const Rect *);
extern Boolean fakeQD_EmptyRect(const Rect *);
extern Boolean fakeQD_EmptyRgn(RgnHandle);
extern Boolean fakeQD_EqualPt(Point, Point);
extern void fakeQD_EraseArc(const Rect *, short, short);
extern void fakeQD_EraseOval(const Rect *);
extern void fakeQD_ErasePoly(PolyHandle);
extern void fakeQD_EraseRect(const Rect *);
extern void fakeQD_EraseRgn(RgnHandle);
extern void fakeQD_EraseRoundRect(const Rect *, short, short);
extern void fakeQD_FillArc(const Rect *, short, short, const Pattern *);
extern void fakeQD_FillCArc(const Rect *, short, short, PixPatHandle);
extern void fakeQD_FillCOval(const Rect *, PixPatHandle);
extern void fakeQD_FillCPoly(PolyHandle, PixPatHandle);
extern void fakeQD_FillCRect(const Rect *, PixPatHandle);
extern void fakeQD_FillCRgn(RgnHandle, PixPatHandle);
extern void fakeQD_FillCRoundRect(const Rect *, short, short, PixPatHandle);
extern void fakeQD_FillOval(const Rect *, const Pattern *);
extern void fakeQD_FillPoly(PolyHandle, const Pattern *);
extern void fakeQD_FillRoundRect(const Rect *, short, short, const Pattern *);
extern void fakeQD_ForeColor(long);
extern void fakeQD_FrameArc(const Rect *, short, short);
extern void fakeQD_FrameOval(const Rect *);
extern void fakeQD_FramePoly(PolyHandle);
extern void fakeQD_FrameRoundRect(const Rect *, short, short);
extern void fakeQD_GetBackColor(RGBColor *);
extern void fakeQD_GetCPixel(short, short, RGBColor *);
extern long fakeQD_GetCTSeed();
extern CTabHandle fakeQD_GetCTable(short);
extern void fakeQD_GetClip(RgnHandle);
extern GDHandle fakeQD_GetDeviceList();
extern void fakeQD_GetForeColor(RGBColor *);
extern GDHandle fakeQD_GetGDevice();
extern void fakeQD_GetIndPattern(Pattern *, short, short);
extern GDHandle fakeQD_GetMainDevice();
extern Ptr fakeQD_GetMaskTable();
extern GDHandle fakeQD_GetMaxDevice(const Rect *);
extern GDHandle fakeQD_GetNextDevice(GDHandle);
extern PatHandle fakeQD_GetPattern(short);
extern void fakeQD_GetPen(Point *);
extern PicHandle fakeQD_GetPicture(short);
extern Rect * fakeQD_GetPixBounds(PixMapHandle, Rect *);
extern short fakeQD_GetPixDepth(PixMapHandle);
extern PixPatHandle fakeQD_GetPixPat(short);
extern void fakeQD_GetPort(GrafPtr *);
extern RGBColor * fakeQD_GetPortBackColor(CGrafPtr, RGBColor *);
extern PixPatHandle fakeQD_GetPortBackPixPat(CGrafPtr, PixPatHandle);
extern const BitMap * fakeQD_GetPortBitMapForCopyBits(CGrafPtr);
extern Rect * fakeQD_GetPortBounds(CGrafPtr, Rect *);
extern short fakeQD_GetPortChExtra(CGrafPtr);
extern RgnHandle fakeQD_GetPortClipRegion(CGrafPtr, RgnHandle);
extern PixPatHandle fakeQD_GetPortFillPixPat(CGrafPtr, PixPatHandle);
extern RGBColor * fakeQD_GetPortForeColor(CGrafPtr, RGBColor *);
extern short fakeQD_GetPortFracHPenLocation(CGrafPtr);
extern CQDProcsPtr fakeQD_GetPortGrafProcs(CGrafPtr);
extern RGBColor * fakeQD_GetPortHiliteColor(CGrafPtr, RGBColor *);
extern RGBColor * fakeQD_GetPortOpColor(CGrafPtr, RGBColor *);
extern Point * fakeQD_GetPortPenLocation(CGrafPtr, Point *);
extern SInt32 fakeQD_GetPortPenMode(CGrafPtr);
extern PixPatHandle fakeQD_GetPortPenPixPat(CGrafPtr, PixPatHandle);
extern Point * fakeQD_GetPortPenSize(CGrafPtr, Point *);
extern short fakeQD_GetPortPenVisibility(CGrafPtr);
extern PixMapHandle fakeQD_GetPortPixMap(CGrafPtr);
extern Fixed fakeQD_GetPortSpExtra(CGrafPtr);
extern Style fakeQD_GetPortTextFace(CGrafPtr);
extern short fakeQD_GetPortTextFont(CGrafPtr);
extern short fakeQD_GetPortTextMode(CGrafPtr);
extern short fakeQD_GetPortTextSize(CGrafPtr);
extern RgnHandle fakeQD_GetPortVisibleRegion(CGrafPtr, RgnHandle);
extern Pattern * fakeQD_GetQDGlobalsBlack(Pattern *);
extern Pattern * fakeQD_GetQDGlobalsDarkGray(Pattern *);
extern Pattern * fakeQD_GetQDGlobalsGray(Pattern *);
extern Pattern * fakeQD_GetQDGlobalsLightGray(Pattern *);
extern long fakeQD_GetQDGlobalsRandomSeed();
extern BitMap * fakeQD_GetQDGlobalsScreenBits(BitMap *);
extern CGrafPtr fakeQD_GetQDGlobalsThePort();
extern Pattern * fakeQD_GetQDGlobalsWhite(Pattern *);
extern Rect * fakeQD_GetRegionBounds(RgnHandle, Rect *);
extern void fakeQD_GetSubTable(CTabHandle, short, CTabHandle);
extern void fakeQD_GlobalToLocal(Point *);
extern void fakeQD_GrafDevice(short);
extern void fakeQD_HandleToRgn(Handle, RgnHandle);
extern void fakeQD_HideCursor();
extern void fakeQD_HidePen();
extern void fakeQD_HiliteColor(const RGBColor *);
extern void fakeQD_Index2Color(long, RGBColor *);
extern void fakeQD_InitCursor();
extern void fakeQD_InitGDevice(short, long, GDHandle);
extern void fakeQD_InsetRgn(RgnHandle, short, short);
extern void fakeQD_InvertArc(const Rect *, short, short);
extern void fakeQD_InvertColor(RGBColor *);
extern void fakeQD_InvertOval(const Rect *);
extern void fakeQD_InvertPoly(PolyHandle);
extern void fakeQD_InvertRoundRect(const Rect *, short, short);
extern Boolean fakeQD_InvokeCMBitmapCallBackUPP(long, void *, CMBitmapCallBackUPP);
extern Boolean fakeQD_InvokeColorComplementUPP(RGBColor *, ColorComplementUPP);
extern Boolean fakeQD_InvokeColorSearchUPP(RGBColor *, long *, ColorSearchUPP);
extern void fakeQD_InvokeDragGrayRgnUPP(DragGrayRgnUPP);
extern void fakeQD_InvokeQDArcUPP(GrafVerb, const Rect *, short, short, QDArcUPP);
extern void fakeQD_InvokeQDBitsUPP(const BitMap *, const Rect *, const Rect *, short, RgnHandle, QDBitsUPP);
extern void fakeQD_InvokeQDCommentUPP(short, short, Handle, QDCommentUPP);
extern void fakeQD_InvokeQDGetPicUPP(void *, short, QDGetPicUPP);
extern void fakeQD_InvokeQDJShieldCursorUPP(short, short, short, short, QDJShieldCursorUPP);
extern void fakeQD_InvokeQDLineUPP(Point, QDLineUPP);
extern void fakeQD_InvokeQDOpcodeUPP(const Rect *, const Rect *, UInt16, SInt16, QDOpcodeUPP);
extern void fakeQD_InvokeQDOvalUPP(GrafVerb, const Rect *, QDOvalUPP);
extern void fakeQD_InvokeQDPolyUPP(GrafVerb, PolyHandle, QDPolyUPP);
extern void fakeQD_InvokeQDPutPicUPP(const void *, short, QDPutPicUPP);
extern void fakeQD_InvokeQDRRectUPP(GrafVerb, const Rect *, short, short, QDRRectUPP);
extern void fakeQD_InvokeQDRectUPP(GrafVerb, const Rect *, QDRectUPP);
extern void fakeQD_InvokeQDRgnUPP(GrafVerb, RgnHandle, QDRgnUPP);
extern OSStatus fakeQD_InvokeQDStdGlyphsUPP(void *, ByteCount, QDStdGlyphsUPP);
extern void fakeQD_InvokeQDTextUPP(short, const void *, Point, Point, QDTextUPP);
extern short fakeQD_InvokeQDTxMeasUPP(short, const void *, Point *, Point *, FontInfo *, QDTxMeasUPP);
extern OSStatus fakeQD_InvokeRegionToRectsUPP(UInt16, RgnHandle, const Rect *, void *, RegionToRectsUPP);
extern Boolean fakeQD_IsPortClipRegionEmpty(CGrafPtr);
extern Boolean fakeQD_IsPortColor(CGrafPtr);
extern Boolean fakeQD_IsPortOffscreen(CGrafPtr);
extern Boolean fakeQD_IsPortPictureBeingDefined(CGrafPtr);
extern Boolean fakeQD_IsPortPolyBeingDefined(CGrafPtr);
extern Boolean fakeQD_IsPortRegionBeingDefined(CGrafPtr);
extern Boolean fakeQD_IsPortVisibleRegionEmpty(CGrafPtr);
extern Boolean fakeQD_IsRegionRectangular(RgnHandle);
extern Boolean fakeQD_IsValidPort(CGrafPtr);
extern Boolean fakeQD_IsValidRgnHandle(RgnHandle);
extern void fakeQD_KillPicture(PicHandle);
extern void fakeQD_KillPoly(PolyHandle);
extern Boolean fakeQD_LMGetCursorNew();
extern GDHandle fakeQD_LMGetDeviceList();
extern UInt8 fakeQD_LMGetFractEnable();
extern UInt8 fakeQD_LMGetHiliteMode();
extern void fakeQD_LMGetHiliteRGB(RGBColor *);
extern Handle fakeQD_LMGetLastFOND();
extern SInt32 fakeQD_LMGetLastSPExtra();
extern GDHandle fakeQD_LMGetMainDevice();
extern Handle fakeQD_LMGetQDColors();
extern SInt16 fakeQD_LMGetScrHRes();
extern SInt16 fakeQD_LMGetScrVRes();
extern GDHandle fakeQD_LMGetTheGDevice();
extern Handle fakeQD_LMGetWidthListHand();
extern Ptr fakeQD_LMGetWidthPtr();
extern Handle fakeQD_LMGetWidthTabHandle();
extern void fakeQD_LMSetCursorNew(Boolean);
extern void fakeQD_LMSetDeviceList(GDHandle);
extern void fakeQD_LMSetFractEnable(UInt8);
extern void fakeQD_LMSetHiliteMode(UInt8);
extern void fakeQD_LMSetHiliteRGB(const RGBColor *);
extern void fakeQD_LMSetLastFOND(Handle);
extern void fakeQD_LMSetLastSPExtra(SInt32);
extern void fakeQD_LMSetMainDevice(GDHandle);
extern void fakeQD_LMSetQDColors(Handle);
extern void fakeQD_LMSetScrHRes(SInt16);
extern void fakeQD_LMSetScrVRes(SInt16);
extern void fakeQD_LMSetTheGDevice(GDHandle);
extern void fakeQD_LMSetWidthListHand(Handle);
extern void fakeQD_LMSetWidthPtr(Ptr);
extern void fakeQD_LMSetWidthTabHandle(Handle);
extern void fakeQD_Line(short, short);
extern void fakeQD_LocalToGlobal(Point *);
extern OSErr fakeQD_LockPortBits(GrafPtr);
extern void fakeQD_MacCopyRgn(RgnHandle, RgnHandle);
extern Boolean fakeQD_MacEqualRect(const Rect *, const Rect *);
extern Boolean fakeQD_MacEqualRgn(RgnHandle, RgnHandle);
extern void fakeQD_MacFillRect(const Rect *, const Pattern *);
extern void fakeQD_MacFillRgn(RgnHandle, const Pattern *);
extern void fakeQD_MacFrameRect(const Rect *);
extern void fakeQD_MacFrameRgn(RgnHandle);
extern Boolean fakeQD_MacGetPixel(short, short);
extern void fakeQD_MacInsetRect(Rect *, short, short);
extern void fakeQD_MacInvertRect(const Rect *);
extern void fakeQD_MacInvertRgn(RgnHandle);
extern void fakeQD_MacLineTo(short, short);
extern void fakeQD_MacOffsetRect(Rect *, short, short);
extern void fakeQD_MacOffsetRgn(RgnHandle, short, short);
extern void fakeQD_MacPaintRgn(RgnHandle);
extern Boolean fakeQD_MacPtInRect(Point, const Rect *);
extern void fakeQD_MacSetPort(GrafPtr);
extern void fakeQD_MacSetRect(Rect *, short, short, short, short);
extern void fakeQD_MacSetRectRgn(RgnHandle, short, short, short, short);
extern void fakeQD_MacShowCursor();
extern void fakeQD_MacUnionRect(const Rect *, const Rect *, Rect *);
extern void fakeQD_MacUnionRgn(RgnHandle, RgnHandle, RgnHandle);
extern void fakeQD_MacXorRgn(RgnHandle, RgnHandle, RgnHandle);
extern void fakeQD_MakeRGBPat(PixPatHandle, const RGBColor *);
extern void fakeQD_MapPoly(PolyHandle, const Rect *, const Rect *);
extern void fakeQD_MapPt(Point *, const Rect *, const Rect *);
extern void fakeQD_MapRect(Rect *, const Rect *, const Rect *);
extern void fakeQD_MapRgn(RgnHandle, const Rect *, const Rect *);
extern void fakeQD_Move(short, short);
extern void fakeQD_MovePortTo(short, short);
extern void fakeQD_MoveTo(short, short);
extern CMError fakeQD_NCMBeginMatching(CMProfileRef, CMProfileRef, CMMatchRef *);
extern void fakeQD_NCMDrawMatchedPicture(PicHandle, CMProfileRef, Rect *);
extern CMError fakeQD_NCMUseProfileComment(CMProfileRef, UInt32);
extern CMBitmapCallBackUPP fakeQD_NewCMBitmapCallBackUPP(CMBitmapCallBackProcPtr);
extern ColorComplementUPP fakeQD_NewColorComplementUPP(ColorComplementProcPtr);
extern ColorSearchUPP fakeQD_NewColorSearchUPP(ColorSearchProcPtr);
extern DragGrayRgnUPP fakeQD_NewDragGrayRgnUPP(DragGrayRgnProcPtr);
extern GDHandle fakeQD_NewGDevice(short, long);
extern PixMapHandle fakeQD_NewPixMap();
extern PixPatHandle fakeQD_NewPixPat();
extern QDArcUPP fakeQD_NewQDArcUPP(QDArcProcPtr);
extern QDBitsUPP fakeQD_NewQDBitsUPP(QDBitsProcPtr);
extern QDCommentUPP fakeQD_NewQDCommentUPP(QDCommentProcPtr);
extern QDGetPicUPP fakeQD_NewQDGetPicUPP(QDGetPicProcPtr);
extern QDJShieldCursorUPP fakeQD_NewQDJShieldCursorUPP(QDJShieldCursorProcPtr);
extern QDLineUPP fakeQD_NewQDLineUPP(QDLineProcPtr);
extern QDOpcodeUPP fakeQD_NewQDOpcodeUPP(QDOpcodeProcPtr);
extern QDOvalUPP fakeQD_NewQDOvalUPP(QDOvalProcPtr);
extern QDPolyUPP fakeQD_NewQDPolyUPP(QDPolyProcPtr);
extern QDPutPicUPP fakeQD_NewQDPutPicUPP(QDPutPicProcPtr);
extern QDRRectUPP fakeQD_NewQDRRectUPP(QDRRectProcPtr);
extern QDRectUPP fakeQD_NewQDRectUPP(QDRectProcPtr);
extern QDRgnUPP fakeQD_NewQDRgnUPP(QDRgnProcPtr);
extern QDStdGlyphsUPP fakeQD_NewQDStdGlyphsUPP(QDStdGlyphsProcPtr);
extern QDTextUPP fakeQD_NewQDTextUPP(QDTextProcPtr);
extern QDTxMeasUPP fakeQD_NewQDTxMeasUPP(QDTxMeasProcPtr);
extern RegionToRectsUPP fakeQD_NewRegionToRectsUPP(RegionToRectsProcPtr);
extern RgnHandle fakeQD_NewRgn();
extern void fakeQD_ObscureCursor();
extern void fakeQD_OffsetPoly(PolyHandle, short, short);
extern void fakeQD_OpColor(const RGBColor *);
extern PicHandle fakeQD_OpenCPicture(const OpenCPicParams *);
extern OSErr fakeQD_OpenCursorComponent(Component, ComponentInstance *);
extern PicHandle fakeQD_OpenPicture(const Rect *);
extern PolyHandle fakeQD_OpenPoly();
extern void fakeQD_OpenRgn();
extern void fakeQD_PackBits(Ptr *, Ptr *, short);
extern void fakeQD_PaintArc(const Rect *, short, short);
extern void fakeQD_PaintOval(const Rect *);
extern void fakeQD_PaintPoly(PolyHandle);
extern void fakeQD_PaintRect(const Rect *);
extern void fakeQD_PaintRoundRect(const Rect *, short, short);
extern void fakeQD_PenMode(short);
extern void fakeQD_PenNormal();
extern void fakeQD_PenPat(const Pattern *);
extern void fakeQD_PenPixPat(PixPatHandle);
extern void fakeQD_PenSize(short, short);
extern void fakeQD_PicComment(short, short, Handle);
extern void fakeQD_PortSize(short, short);
extern void fakeQD_ProtectEntry(short, Boolean);
extern void fakeQD_Pt2Rect(Point, Point, Rect *);
extern Boolean fakeQD_PtInRgn(Point, RgnHandle);
extern void fakeQD_PtToAngle(const Rect *, Point, short *);
extern OSStatus fakeQD_QDAddRectToDirtyRegion(CGrafPtr, const Rect *);
extern OSStatus fakeQD_QDAddRegionToDirtyRegion(CGrafPtr, RgnHandle);
extern OSStatus fakeQD_QDBeginCGContext(CGrafPtr, CGContextRef *);
extern void fakeQD_QDDisplayWaitCursor(Boolean);
extern OSStatus fakeQD_QDEndCGContext(CGrafPtr, CGContextRef *);
extern short fakeQD_QDError();
extern void fakeQD_QDFlushPortBuffer(CGrafPtr, RgnHandle);
extern CGDirectDisplayID fakeQD_QDGetCGDirectDisplayID(GDHandle);
extern OSStatus fakeQD_QDGetCursorData(Boolean, PixMapHandle *, Point *);
extern OSStatus fakeQD_QDGetCursorScale(float *);
extern OSStatus fakeQD_QDGetDirtyRegion(CGrafPtr, RgnHandle);
extern void fakeQD_QDGetPatternOrigin(Point *);
extern Rect * fakeQD_QDGetPictureBounds(PicHandle, Rect *);
extern Point * fakeQD_QDGlobalToLocalPoint(CGrafPtr, Point *);
extern Rect * fakeQD_QDGlobalToLocalRect(CGrafPtr, Rect *);
extern RgnHandle fakeQD_QDGlobalToLocalRegion(CGrafPtr, RgnHandle);
extern Boolean fakeQD_QDIsNamedPixMapCursorRegistered(const char);
extern Boolean fakeQD_QDIsPortBufferDirty(CGrafPtr);
extern Boolean fakeQD_QDIsPortBuffered(CGrafPtr);
extern Point * fakeQD_QDLocalToGlobalPoint(CGrafPtr, Point *);
extern Rect * fakeQD_QDLocalToGlobalRect(CGrafPtr, Rect *);
extern RgnHandle fakeQD_QDLocalToGlobalRegion(CGrafPtr, RgnHandle);
extern OSStatus fakeQD_QDRegionToRects(RgnHandle, QDRegionParseDirection, RegionToRectsUPP, void *);
extern OSStatus fakeQD_QDRegisterNamedPixMapCursor(PixMapHandle, PixMapHandle, Point, const char);
extern OSStatus fakeQD_QDSetCursorScale(float);
extern OSStatus fakeQD_QDSetDirtyRegion(CGrafPtr, RgnHandle);
extern OSStatus fakeQD_QDSetNamedPixMapCursor(const char);
extern void fakeQD_QDSetPatternOrigin(Point);
extern Boolean fakeQD_QDSwapPort(CGrafPtr, CGrafPtr *);
extern UInt32 fakeQD_QDSwapPortTextFlags(CGrafPtr, UInt32);
extern UInt32 fakeQD_QDSwapTextFlags(UInt32);
extern OSStatus fakeQD_QDUnregisterNamedPixMapCursor(const char);
extern OSStatus fakeQD_QDUnregisterNamedPixMapCursur(const char);
extern void fakeQD_RGBBackColor(const RGBColor *);
extern void fakeQD_RGBForeColor(const RGBColor *);
extern short fakeQD_Random();
extern Boolean fakeQD_RealColor(const RGBColor *);
extern Boolean fakeQD_RectInRgn(const Rect *, RgnHandle);
extern void fakeQD_RectRgn(RgnHandle, const Rect *);
extern void fakeQD_ReserveEntry(short, Boolean);
extern void fakeQD_RgnToHandle(RgnHandle, Handle);
extern void fakeQD_ScalePt(Point *, const Rect *, const Rect *);
extern void fakeQD_ScreenRes(short *, short *);
extern void fakeQD_ScrollRect(const Rect *, short, short, RgnHandle);
extern Boolean fakeQD_SectRect(const Rect *, const Rect *, Rect *);
extern void fakeQD_SectRegionWithPortClipRegion(CGrafPtr, RgnHandle);
extern void fakeQD_SectRegionWithPortVisibleRegion(CGrafPtr, RgnHandle);
extern void fakeQD_SectRgn(RgnHandle, RgnHandle, RgnHandle);
extern void fakeQD_SeedCFill(const BitMap *, const BitMap *, const Rect *, const Rect *, short, short, ColorSearchUPP, long);
extern void fakeQD_SeedFill(const void *, void *, short, short, short, short, short, short);
extern void fakeQD_SetCPixel(short, short, const RGBColor *);
extern void fakeQD_SetClientID(short);
extern void fakeQD_SetClip(RgnHandle);
extern OSErr fakeQD_SetCursorComponent(ComponentInstance);
extern void fakeQD_SetDeviceAttribute(GDHandle, short, Boolean);
extern void fakeQD_SetEmptyRgn(RgnHandle);
extern void fakeQD_SetEntries(short, short, CSpecArray);
extern void fakeQD_SetGDevice(GDHandle);
extern void fakeQD_SetOrigin(short, short);
extern void fakeQD_SetPortBackPixPat(CGrafPtr, PixPatHandle);
extern void fakeQD_SetPortBits(const BitMap *);
extern void fakeQD_SetPortBounds(CGrafPtr, const Rect *);
extern void fakeQD_SetPortClipRegion(CGrafPtr, RgnHandle);
extern void fakeQD_SetPortFillPixPat(CGrafPtr, PixPatHandle);
extern void fakeQD_SetPortFracHPenLocation(CGrafPtr, short);
extern void fakeQD_SetPortGrafProcs(CGrafPtr, CQDProcsPtr);
extern void fakeQD_SetPortOpColor(CGrafPtr, const RGBColor *);
extern void fakeQD_SetPortPenMode(CGrafPtr, SInt32);
extern void fakeQD_SetPortPenPixPat(CGrafPtr, PixPatHandle);
extern void fakeQD_SetPortPenSize(CGrafPtr, Point);
extern void fakeQD_SetPortPix(PixMapHandle);
extern void fakeQD_SetPortTextFace(CGrafPtr, StyleParameter);
extern void fakeQD_SetPortTextFont(CGrafPtr, short);
extern void fakeQD_SetPortTextMode(CGrafPtr, short);
extern void fakeQD_SetPortTextSize(CGrafPtr, short);
extern void fakeQD_SetPortVisibleRegion(CGrafPtr, RgnHandle);
extern void fakeQD_SetPt(Point *, short, short);
extern void fakeQD_SetQDError(OSErr);
extern void fakeQD_SetQDGlobalsRandomSeed(long);
extern void fakeQD_SetStdCProcs(CQDProcs *);
extern void fakeQD_ShieldCursor(const Rect *, Point);
extern void fakeQD_ShowPen();
extern Fixed fakeQD_SlopeFromAngle(short);
extern void fakeQD_StdArc(GrafVerb, const Rect *, short, short);
extern void fakeQD_StdBits(const BitMap *, const Rect *, const Rect *, short, RgnHandle);
extern void fakeQD_StdComment(short, short, Handle);
extern void fakeQD_StdGetPic(void *, short);
extern void fakeQD_StdLine(Point);
extern void fakeQD_StdOpcode(const Rect *, const Rect *, UInt16, SInt16);
extern void fakeQD_StdOval(GrafVerb, const Rect *);
extern void fakeQD_StdPoly(GrafVerb, PolyHandle);
extern void fakeQD_StdPutPic(const void *, short);
extern void fakeQD_StdRRect(GrafVerb, const Rect *, short, short);
extern void fakeQD_StdRect(GrafVerb, const Rect *);
extern void fakeQD_StdRgn(GrafVerb, RgnHandle);
extern void fakeQD_StuffHex(void *, ConstStr255Param);
extern void fakeQD_SubPt(Point, Point *);
extern Handle fakeQD_SwapPortPicSaveHandle(CGrafPtr, Handle);
extern Handle fakeQD_SwapPortPolySaveHandle(CGrafPtr, Handle);
extern Handle fakeQD_SwapPortRegionSaveHandle(CGrafPtr, Handle);
extern OSStatus fakeQD_SyncCGContextOriginWithPort(CGContextRef, CGrafPtr);
extern Boolean fakeQD_TestDeviceAttribute(GDHandle, short);
extern OSErr fakeQD_UnlockPortBits(GrafPtr);
extern void fakeQD_UnpackBits(Ptr *, Ptr *, short);
extern long fakeQD_deltapoint(Point *, Point *);
#ifdef __cplusplus
} // extern "C"
#endif
#endif
