#include "fakeQD.h"
#if MAC_OS_X_VERSION_10_6 < MAC_OS_X_VERSION_MIN_REQUIRED
#include <dlfcn.h>
#include <string>
#ifdef __cplusplus
extern "C" {
#endif
typedef CMBitmapCallBackUPP (*NewCMBitmapCallBackUPPFunc)(CMBitmapCallBackProcPtr);
typedef void (*DisposeCMBitmapCallBackUPPFunc)(CMBitmapCallBackUPP);
typedef Boolean (*InvokeCMBitmapCallBackUPPFunc)(long, void *, CMBitmapCallBackUPP);
typedef RegionToRectsUPP (*NewRegionToRectsUPPFunc)(RegionToRectsProcPtr);
typedef void (*DisposeRegionToRectsUPPFunc)(RegionToRectsUPP);
typedef OSStatus (*InvokeRegionToRectsUPPFunc)(UInt16, RgnHandle, const Rect *, void *, RegionToRectsUPP);
typedef OSStatus (*QDRegionToRectsFunc)(RgnHandle, QDRegionParseDirection, RegionToRectsUPP, void *);
typedef OSErr (*LockPortBitsFunc)(GrafPtr);
typedef OSErr (*UnlockPortBitsFunc)(GrafPtr);
typedef void (*MacSetPortFunc)(GrafPtr);
typedef void (*GetPortFunc)(GrafPtr *);
typedef Boolean (*QDSwapPortFunc)(CGrafPtr, CGrafPtr *);
typedef void (*GrafDeviceFunc)(short);
typedef void (*SetPortBitsFunc)(const BitMap *);
typedef void (*PortSizeFunc)(short, short);
typedef void (*MovePortToFunc)(short, short);
typedef void (*SetOriginFunc)(short, short);
typedef void (*SetClipFunc)(RgnHandle);
typedef void (*GetClipFunc)(RgnHandle);
typedef void (*ClipRectFunc)(const Rect *);
typedef void (*BackPatFunc)(const Pattern *);
typedef void (*InitCursorFunc)();
typedef void (*HideCursorFunc)();
typedef void (*MacShowCursorFunc)();
typedef void (*ObscureCursorFunc)();
typedef void (*HidePenFunc)();
typedef void (*ShowPenFunc)();
typedef void (*GetPenFunc)(Point *);
typedef void (*PenSizeFunc)(short, short);
typedef void (*PenModeFunc)(short);
typedef void (*PenPatFunc)(const Pattern *);
typedef void (*PenNormalFunc)();
typedef void (*MoveToFunc)(short, short);
typedef void (*MoveFunc)(short, short);
typedef void (*MacLineToFunc)(short, short);
typedef void (*LineFunc)(short, short);
typedef void (*ForeColorFunc)(long);
typedef void (*BackColorFunc)(long);
typedef void (*ColorBitFunc)(short);
typedef void (*MacSetRectFunc)(Rect *, short, short, short, short);
typedef void (*MacOffsetRectFunc)(Rect *, short, short);
typedef void (*MacInsetRectFunc)(Rect *, short, short);
typedef Boolean (*SectRectFunc)(const Rect *, const Rect *, Rect *);
typedef void (*MacUnionRectFunc)(const Rect *, const Rect *, Rect *);
typedef Boolean (*MacEqualRectFunc)(const Rect *, const Rect *);
typedef Boolean (*EmptyRectFunc)(const Rect *);
typedef void (*MacFrameRectFunc)(const Rect *);
typedef void (*PaintRectFunc)(const Rect *);
typedef void (*EraseRectFunc)(const Rect *);
typedef void (*MacInvertRectFunc)(const Rect *);
typedef void (*MacFillRectFunc)(const Rect *, const Pattern *);
typedef void (*FrameOvalFunc)(const Rect *);
typedef void (*PaintOvalFunc)(const Rect *);
typedef void (*EraseOvalFunc)(const Rect *);
typedef void (*InvertOvalFunc)(const Rect *);
typedef void (*FillOvalFunc)(const Rect *, const Pattern *);
typedef void (*FrameRoundRectFunc)(const Rect *, short, short);
typedef void (*PaintRoundRectFunc)(const Rect *, short, short);
typedef void (*EraseRoundRectFunc)(const Rect *, short, short);
typedef void (*InvertRoundRectFunc)(const Rect *, short, short);
typedef void (*FillRoundRectFunc)(const Rect *, short, short, const Pattern *);
typedef void (*FrameArcFunc)(const Rect *, short, short);
typedef void (*PaintArcFunc)(const Rect *, short, short);
typedef void (*EraseArcFunc)(const Rect *, short, short);
typedef void (*InvertArcFunc)(const Rect *, short, short);
typedef void (*FillArcFunc)(const Rect *, short, short, const Pattern *);
typedef RgnHandle (*NewRgnFunc)();
typedef void (*OpenRgnFunc)();
typedef void (*CloseRgnFunc)(RgnHandle);
typedef OSErr (*BitMapToRegionFunc)(RgnHandle, const BitMap *);
typedef void (*RgnToHandleFunc)(RgnHandle, Handle);
typedef void (*HandleToRgnFunc)(Handle, RgnHandle);
typedef void (*DisposeRgnFunc)(RgnHandle);
typedef void (*MacCopyRgnFunc)(RgnHandle, RgnHandle);
typedef void (*SetEmptyRgnFunc)(RgnHandle);
typedef void (*MacSetRectRgnFunc)(RgnHandle, short, short, short, short);
typedef void (*RectRgnFunc)(RgnHandle, const Rect *);
typedef void (*MacOffsetRgnFunc)(RgnHandle, short, short);
typedef void (*InsetRgnFunc)(RgnHandle, short, short);
typedef void (*SectRgnFunc)(RgnHandle, RgnHandle, RgnHandle);
typedef void (*MacUnionRgnFunc)(RgnHandle, RgnHandle, RgnHandle);
typedef void (*DiffRgnFunc)(RgnHandle, RgnHandle, RgnHandle);
typedef void (*MacXorRgnFunc)(RgnHandle, RgnHandle, RgnHandle);
typedef Boolean (*RectInRgnFunc)(const Rect *, RgnHandle);
typedef Boolean (*MacEqualRgnFunc)(RgnHandle, RgnHandle);
typedef Boolean (*EmptyRgnFunc)(RgnHandle);
typedef void (*MacFrameRgnFunc)(RgnHandle);
typedef void (*MacPaintRgnFunc)(RgnHandle);
typedef void (*EraseRgnFunc)(RgnHandle);
typedef void (*MacInvertRgnFunc)(RgnHandle);
typedef void (*MacFillRgnFunc)(RgnHandle, const Pattern *);
typedef void (*ScrollRectFunc)(const Rect *, short, short, RgnHandle);
typedef void (*CopyBitsFunc)(const BitMap *, const BitMap *, const Rect *, const Rect *, short, RgnHandle);
typedef void (*SeedFillFunc)(const void *, void *, short, short, short, short, short, short);
typedef void (*CalcMaskFunc)(const void *, void *, short, short, short, short);
typedef void (*CopyMaskFunc)(const BitMap *, const BitMap *, const BitMap *, const Rect *, const Rect *, const Rect *);
typedef PicHandle (*OpenPictureFunc)(const Rect *);
typedef void (*PicCommentFunc)(short, short, Handle);
typedef void (*ClosePictureFunc)();
typedef Rect * (*QDGetPictureBoundsFunc)(PicHandle, Rect *);
typedef void (*DrawPictureFunc)(PicHandle, const Rect *);
typedef void (*KillPictureFunc)(PicHandle);
typedef PolyHandle (*OpenPolyFunc)();
typedef void (*ClosePolyFunc)();
typedef void (*KillPolyFunc)(PolyHandle);
typedef void (*OffsetPolyFunc)(PolyHandle, short, short);
typedef void (*FramePolyFunc)(PolyHandle);
typedef void (*PaintPolyFunc)(PolyHandle);
typedef void (*ErasePolyFunc)(PolyHandle);
typedef void (*InvertPolyFunc)(PolyHandle);
typedef void (*FillPolyFunc)(PolyHandle, const Pattern *);
typedef void (*SetPtFunc)(Point *, short, short);
typedef void (*LocalToGlobalFunc)(Point *);
typedef void (*GlobalToLocalFunc)(Point *);
typedef short (*RandomFunc)();
typedef void (*StuffHexFunc)(void *, ConstStr255Param);
typedef Boolean (*MacGetPixelFunc)(short, short);
typedef void (*ScalePtFunc)(Point *, const Rect *, const Rect *);
typedef void (*MapPtFunc)(Point *, const Rect *, const Rect *);
typedef void (*MapRectFunc)(Rect *, const Rect *, const Rect *);
typedef void (*MapRgnFunc)(RgnHandle, const Rect *, const Rect *);
typedef void (*MapPolyFunc)(PolyHandle, const Rect *, const Rect *);
typedef void (*StdRectFunc)(GrafVerb, const Rect *);
typedef void (*StdRRectFunc)(GrafVerb, const Rect *, short, short);
typedef void (*StdOvalFunc)(GrafVerb, const Rect *);
typedef void (*StdArcFunc)(GrafVerb, const Rect *, short, short);
typedef void (*StdPolyFunc)(GrafVerb, PolyHandle);
typedef void (*StdRgnFunc)(GrafVerb, RgnHandle);
typedef void (*StdBitsFunc)(const BitMap *, const Rect *, const Rect *, short, RgnHandle);
typedef void (*StdCommentFunc)(short, short, Handle);
typedef void (*StdGetPicFunc)(void *, short);
typedef void (*StdPutPicFunc)(const void *, short);
typedef void (*StdOpcodeFunc)(const Rect *, const Rect *, UInt16, SInt16);
typedef void (*AddPtFunc)(Point, Point *);
typedef Boolean (*EqualPtFunc)(Point, Point);
typedef Boolean (*MacPtInRectFunc)(Point, const Rect *);
typedef void (*Pt2RectFunc)(Point, Point, Rect *);
typedef void (*PtToAngleFunc)(const Rect *, Point, short *);
typedef void (*SubPtFunc)(Point, Point *);
typedef Boolean (*PtInRgnFunc)(Point, RgnHandle);
typedef void (*StdLineFunc)(Point);
typedef PixMapHandle (*NewPixMapFunc)();
typedef void (*DisposePixMapFunc)(PixMapHandle);
typedef void (*CopyPixMapFunc)(PixMapHandle, PixMapHandle);
typedef PixPatHandle (*NewPixPatFunc)();
typedef void (*DisposePixPatFunc)(PixPatHandle);
typedef void (*CopyPixPatFunc)(PixPatHandle, PixPatHandle);
typedef void (*PenPixPatFunc)(PixPatHandle);
typedef void (*BackPixPatFunc)(PixPatHandle);
typedef PixPatHandle (*GetPixPatFunc)(short);
typedef void (*MakeRGBPatFunc)(PixPatHandle, const RGBColor *);
typedef void (*FillCRectFunc)(const Rect *, PixPatHandle);
typedef void (*FillCOvalFunc)(const Rect *, PixPatHandle);
typedef void (*FillCRoundRectFunc)(const Rect *, short, short, PixPatHandle);
typedef void (*FillCArcFunc)(const Rect *, short, short, PixPatHandle);
typedef void (*FillCRgnFunc)(RgnHandle, PixPatHandle);
typedef void (*FillCPolyFunc)(PolyHandle, PixPatHandle);
typedef void (*RGBForeColorFunc)(const RGBColor *);
typedef void (*RGBBackColorFunc)(const RGBColor *);
typedef void (*SetCPixelFunc)(short, short, const RGBColor *);
typedef void (*SetPortPixFunc)(PixMapHandle);
typedef void (*GetCPixelFunc)(short, short, RGBColor *);
typedef void (*GetForeColorFunc)(RGBColor *);
typedef void (*GetBackColorFunc)(RGBColor *);
typedef void (*SeedCFillFunc)(const BitMap *, const BitMap *, const Rect *, const Rect *, short, short, ColorSearchUPP, long);
typedef void (*CalcCMaskFunc)(const BitMap *, const BitMap *, const Rect *, const Rect *, const RGBColor *, ColorSearchUPP, long);
typedef PicHandle (*OpenCPictureFunc)(const OpenCPicParams *);
typedef void (*OpColorFunc)(const RGBColor *);
typedef void (*HiliteColorFunc)(const RGBColor *);
typedef void (*DisposeCTableFunc)(CTabHandle);
typedef CTabHandle (*GetCTableFunc)(short);
typedef void (*AllocCursorFunc)();
typedef void (*SetStdCProcsFunc)(CQDProcs *);
typedef GDHandle (*GetMaxDeviceFunc)(const Rect *);
typedef long (*GetCTSeedFunc)();
typedef GDHandle (*GetDeviceListFunc)();
typedef GDHandle (*GetMainDeviceFunc)();
typedef GDHandle (*GetNextDeviceFunc)(GDHandle);
typedef Boolean (*TestDeviceAttributeFunc)(GDHandle, short);
typedef void (*SetDeviceAttributeFunc)(GDHandle, short, Boolean);
typedef void (*InitGDeviceFunc)(short, long, GDHandle);
typedef GDHandle (*NewGDeviceFunc)(short, long);
typedef void (*DisposeGDeviceFunc)(GDHandle);
typedef void (*SetGDeviceFunc)(GDHandle);
typedef GDHandle (*GetGDeviceFunc)();
typedef long (*Color2IndexFunc)(const RGBColor *);
typedef void (*Index2ColorFunc)(long, RGBColor *);
typedef void (*InvertColorFunc)(RGBColor *);
typedef Boolean (*RealColorFunc)(const RGBColor *);
typedef void (*GetSubTableFunc)(CTabHandle, short, CTabHandle);
typedef void (*AddSearchFunc)(ColorSearchUPP);
typedef void (*AddCompFunc)(ColorComplementUPP);
typedef void (*DelSearchFunc)(ColorSearchUPP);
typedef void (*DelCompFunc)(ColorComplementUPP);
typedef void (*SetClientIDFunc)(short);
typedef void (*ProtectEntryFunc)(short, Boolean);
typedef void (*ReserveEntryFunc)(short, Boolean);
typedef void (*SetEntriesFunc)(short, short, CSpecArray);
typedef short (*QDErrorFunc)();
typedef void (*CopyDeepMaskFunc)(const BitMap *, const BitMap *, const BitMap *, const Rect *, const Rect *, const Rect *, short, RgnHandle);
typedef Ptr (*GetMaskTableFunc)();
typedef PatHandle (*GetPatternFunc)(short);
typedef PicHandle (*GetPictureFunc)(short);
typedef long (*DeltaPointFunc)(Point, Point);
typedef void (*ShieldCursorFunc)(const Rect *, Point);
typedef void (*ScreenResFunc)(short *, short *);
typedef void (*GetIndPatternFunc)(Pattern *, short, short);
typedef long (*deltapointFunc)(Point *, Point *);
typedef void (*PackBitsFunc)(Ptr *, Ptr *, short);
typedef void (*UnpackBitsFunc)(Ptr *, Ptr *, short);
typedef Fixed (*SlopeFromAngleFunc)(short);
typedef short (*AngleFromSlopeFunc)(Fixed);
typedef OSErr (*OpenCursorComponentFunc)(Component, ComponentInstance *);
typedef OSErr (*CloseCursorComponentFunc)(ComponentInstance);
typedef OSErr (*SetCursorComponentFunc)(ComponentInstance);
typedef OSErr (*CursorComponentChangedFunc)(ComponentInstance);
typedef OSErr (*CursorComponentSetDataFunc)(ComponentInstance, long);
typedef CMError (*CWMatchPixMapFunc)(CMWorldRef, PixMap *, CMBitmapCallBackUPP, void *);
typedef CMError (*CWCheckPixMapFunc)(CMWorldRef, PixMap *, CMBitmapCallBackUPP, void *, BitMap *);
typedef CMError (*NCMBeginMatchingFunc)(CMProfileRef, CMProfileRef, CMMatchRef *);
typedef void (*CMEndMatchingFunc)(CMMatchRef);
typedef void (*NCMDrawMatchedPictureFunc)(PicHandle, CMProfileRef, Rect *);
typedef void (*CMEnableMatchingCommentFunc)(Boolean);
typedef CMError (*NCMUseProfileCommentFunc)(CMProfileRef, UInt32);
typedef Boolean (*IsValidPortFunc)(CGrafPtr);
typedef Boolean (*IsValidRgnHandleFunc)(RgnHandle);
typedef PixMapHandle (*GetPortPixMapFunc)(CGrafPtr);
typedef const BitMap * (*GetPortBitMapForCopyBitsFunc)(CGrafPtr);
typedef Rect * (*GetPortBoundsFunc)(CGrafPtr, Rect *);
typedef RGBColor * (*GetPortForeColorFunc)(CGrafPtr, RGBColor *);
typedef RGBColor * (*GetPortBackColorFunc)(CGrafPtr, RGBColor *);
typedef RGBColor * (*GetPortOpColorFunc)(CGrafPtr, RGBColor *);
typedef RGBColor * (*GetPortHiliteColorFunc)(CGrafPtr, RGBColor *);
typedef CQDProcsPtr (*GetPortGrafProcsFunc)(CGrafPtr);
typedef short (*GetPortTextFontFunc)(CGrafPtr);
typedef Style (*GetPortTextFaceFunc)(CGrafPtr);
typedef short (*GetPortTextModeFunc)(CGrafPtr);
typedef short (*GetPortTextSizeFunc)(CGrafPtr);
typedef short (*GetPortChExtraFunc)(CGrafPtr);
typedef short (*GetPortFracHPenLocationFunc)(CGrafPtr);
typedef Fixed (*GetPortSpExtraFunc)(CGrafPtr);
typedef short (*GetPortPenVisibilityFunc)(CGrafPtr);
typedef RgnHandle (*GetPortVisibleRegionFunc)(CGrafPtr, RgnHandle);
typedef RgnHandle (*GetPortClipRegionFunc)(CGrafPtr, RgnHandle);
typedef PixPatHandle (*GetPortBackPixPatFunc)(CGrafPtr, PixPatHandle);
typedef PixPatHandle (*GetPortPenPixPatFunc)(CGrafPtr, PixPatHandle);
typedef PixPatHandle (*GetPortFillPixPatFunc)(CGrafPtr, PixPatHandle);
typedef Point * (*GetPortPenSizeFunc)(CGrafPtr, Point *);
typedef SInt32 (*GetPortPenModeFunc)(CGrafPtr);
typedef Point * (*GetPortPenLocationFunc)(CGrafPtr, Point *);
typedef Boolean (*IsPortRegionBeingDefinedFunc)(CGrafPtr);
typedef Boolean (*IsPortPictureBeingDefinedFunc)(CGrafPtr);
typedef Boolean (*IsPortPolyBeingDefinedFunc)(CGrafPtr);
typedef Boolean (*IsPortOffscreenFunc)(CGrafPtr);
typedef Boolean (*IsPortColorFunc)(CGrafPtr);
typedef Boolean (*IsPortVisibleRegionEmptyFunc)(CGrafPtr);
typedef Boolean (*IsPortClipRegionEmptyFunc)(CGrafPtr);
typedef void (*SectRegionWithPortClipRegionFunc)(CGrafPtr, RgnHandle);
typedef void (*SectRegionWithPortVisibleRegionFunc)(CGrafPtr, RgnHandle);
typedef Handle (*SwapPortPicSaveHandleFunc)(CGrafPtr, Handle);
typedef Handle (*SwapPortPolySaveHandleFunc)(CGrafPtr, Handle);
typedef Handle (*SwapPortRegionSaveHandleFunc)(CGrafPtr, Handle);
typedef void (*SetPortBoundsFunc)(CGrafPtr, const Rect *);
typedef void (*SetPortOpColorFunc)(CGrafPtr, const RGBColor *);
typedef void (*SetPortGrafProcsFunc)(CGrafPtr, CQDProcsPtr);
typedef void (*SetPortTextFontFunc)(CGrafPtr, short);
typedef void (*SetPortTextSizeFunc)(CGrafPtr, short);
typedef void (*SetPortTextFaceFunc)(CGrafPtr, StyleParameter);
typedef void (*SetPortTextModeFunc)(CGrafPtr, short);
typedef void (*SetPortVisibleRegionFunc)(CGrafPtr, RgnHandle);
typedef void (*SetPortClipRegionFunc)(CGrafPtr, RgnHandle);
typedef void (*SetPortPenPixPatFunc)(CGrafPtr, PixPatHandle);
typedef void (*SetPortFillPixPatFunc)(CGrafPtr, PixPatHandle);
typedef void (*SetPortBackPixPatFunc)(CGrafPtr, PixPatHandle);
typedef void (*SetPortPenSizeFunc)(CGrafPtr, Point);
typedef void (*SetPortPenModeFunc)(CGrafPtr, SInt32);
typedef void (*SetPortFracHPenLocationFunc)(CGrafPtr, short);
typedef Rect * (*GetPixBoundsFunc)(PixMapHandle, Rect *);
typedef short (*GetPixDepthFunc)(PixMapHandle);
typedef long (*GetQDGlobalsRandomSeedFunc)();
typedef BitMap * (*GetQDGlobalsScreenBitsFunc)(BitMap *);
typedef Pattern * (*GetQDGlobalsDarkGrayFunc)(Pattern *);
typedef Pattern * (*GetQDGlobalsLightGrayFunc)(Pattern *);
typedef Pattern * (*GetQDGlobalsGrayFunc)(Pattern *);
typedef Pattern * (*GetQDGlobalsBlackFunc)(Pattern *);
typedef Pattern * (*GetQDGlobalsWhiteFunc)(Pattern *);
typedef CGrafPtr (*GetQDGlobalsThePortFunc)();
typedef void (*SetQDGlobalsRandomSeedFunc)(long);
typedef Rect * (*GetRegionBoundsFunc)(RgnHandle, Rect *);
typedef Boolean (*IsRegionRectangularFunc)(RgnHandle);
typedef CGrafPtr (*CreateNewPortFunc)();
typedef void (*DisposePortFunc)(CGrafPtr);
typedef void (*SetQDErrorFunc)(OSErr);
typedef Point * (*QDLocalToGlobalPointFunc)(CGrafPtr, Point *);
typedef Point * (*QDGlobalToLocalPointFunc)(CGrafPtr, Point *);
typedef Rect * (*QDLocalToGlobalRectFunc)(CGrafPtr, Rect *);
typedef Rect * (*QDGlobalToLocalRectFunc)(CGrafPtr, Rect *);
typedef RgnHandle (*QDLocalToGlobalRegionFunc)(CGrafPtr, RgnHandle);
typedef RgnHandle (*QDGlobalToLocalRegionFunc)(CGrafPtr, RgnHandle);
typedef Boolean (*QDIsPortBufferedFunc)(CGrafPtr);
typedef Boolean (*QDIsPortBufferDirtyFunc)(CGrafPtr);
typedef void (*QDFlushPortBufferFunc)(CGrafPtr, RgnHandle);
typedef OSStatus (*QDGetDirtyRegionFunc)(CGrafPtr, RgnHandle);
typedef OSStatus (*QDSetDirtyRegionFunc)(CGrafPtr, RgnHandle);
typedef OSStatus (*QDAddRectToDirtyRegionFunc)(CGrafPtr, const Rect *);
typedef OSStatus (*QDAddRegionToDirtyRegionFunc)(CGrafPtr, RgnHandle);
typedef OSStatus (*CreateCGContextForPortFunc)(CGrafPtr, CGContextRef *);
typedef OSStatus (*ClipCGContextToRegionFunc)(CGContextRef, const Rect *, RgnHandle);
typedef OSStatus (*SyncCGContextOriginWithPortFunc)(CGContextRef, CGrafPtr);
typedef OSStatus (*QDBeginCGContextFunc)(CGrafPtr, CGContextRef *);
typedef OSStatus (*QDEndCGContextFunc)(CGrafPtr, CGContextRef *);
typedef CGrafPtr (*CreateNewPortForCGDisplayIDFunc)(UInt32);
typedef void (*QDDisplayWaitCursorFunc)(Boolean);
typedef void (*QDSetPatternOriginFunc)(Point);
typedef void (*QDGetPatternOriginFunc)(Point *);
typedef Boolean (*QDIsNamedPixMapCursorRegisteredFunc)(const char);
typedef OSStatus (*QDRegisterNamedPixMapCursorFunc)(PixMapHandle, PixMapHandle, Point, const char);
typedef OSStatus (*QDUnregisterNamedPixMapCursurFunc)(const char);
typedef OSStatus (*QDUnregisterNamedPixMapCursorFunc)(const char);
typedef OSStatus (*QDSetNamedPixMapCursorFunc)(const char);
typedef OSStatus (*QDSetCursorScaleFunc)(float);
typedef OSStatus (*QDGetCursorScaleFunc)(float *);
typedef OSStatus (*QDGetCursorDataFunc)(Boolean, PixMapHandle *, Point *);
typedef UInt32 (*QDSwapTextFlagsFunc)(UInt32);
typedef UInt32 (*QDSwapPortTextFlagsFunc)(CGrafPtr, UInt32);
typedef CGDirectDisplayID (*QDGetCGDirectDisplayIDFunc)(GDHandle);
typedef SInt16 (*LMGetScrVResFunc)();
typedef void (*LMSetScrVResFunc)(SInt16);
typedef SInt16 (*LMGetScrHResFunc)();
typedef void (*LMSetScrHResFunc)(SInt16);
typedef GDHandle (*LMGetMainDeviceFunc)();
typedef void (*LMSetMainDeviceFunc)(GDHandle);
typedef GDHandle (*LMGetDeviceListFunc)();
typedef void (*LMSetDeviceListFunc)(GDHandle);
typedef Handle (*LMGetQDColorsFunc)();
typedef void (*LMSetQDColorsFunc)(Handle);
typedef Handle (*LMGetWidthListHandFunc)();
typedef void (*LMSetWidthListHandFunc)(Handle);
typedef UInt8 (*LMGetHiliteModeFunc)();
typedef void (*LMSetHiliteModeFunc)(UInt8);
typedef Ptr (*LMGetWidthPtrFunc)();
typedef void (*LMSetWidthPtrFunc)(Ptr);
typedef Handle (*LMGetWidthTabHandleFunc)();
typedef void (*LMSetWidthTabHandleFunc)(Handle);
typedef SInt32 (*LMGetLastSPExtraFunc)();
typedef void (*LMSetLastSPExtraFunc)(SInt32);
typedef Handle (*LMGetLastFONDFunc)();
typedef void (*LMSetLastFONDFunc)(Handle);
typedef UInt8 (*LMGetFractEnableFunc)();
typedef void (*LMSetFractEnableFunc)(UInt8);
typedef GDHandle (*LMGetTheGDeviceFunc)();
typedef void (*LMSetTheGDeviceFunc)(GDHandle);
typedef void (*LMGetHiliteRGBFunc)(RGBColor *);
typedef void (*LMSetHiliteRGBFunc)(const RGBColor *);
typedef Boolean (*LMGetCursorNewFunc)();
typedef void (*LMSetCursorNewFunc)(Boolean);
#ifdef __cplusplus
} // extern "C"
#endif
class QuickDrawAPIWrapper
{
public:
    QuickDrawAPIWrapper()
        : m_initialized(false)
        , m_qd_dylib_handle(0)
        , m_NewCMBitmapCallBackUPPFunc(0)
        , m_DisposeCMBitmapCallBackUPPFunc(0)
        , m_InvokeCMBitmapCallBackUPPFunc(0)
        , m_NewRegionToRectsUPPFunc(0)
        , m_DisposeRegionToRectsUPPFunc(0)
        , m_InvokeRegionToRectsUPPFunc(0)
        , m_QDRegionToRectsFunc(0)
        , m_LockPortBitsFunc(0)
        , m_UnlockPortBitsFunc(0)
        , m_MacSetPortFunc(0)
        , m_GetPortFunc(0)
        , m_QDSwapPortFunc(0)
        , m_GrafDeviceFunc(0)
        , m_SetPortBitsFunc(0)
        , m_PortSizeFunc(0)
        , m_MovePortToFunc(0)
        , m_SetOriginFunc(0)
        , m_SetClipFunc(0)
        , m_GetClipFunc(0)
        , m_ClipRectFunc(0)
        , m_BackPatFunc(0)
        , m_InitCursorFunc(0)
        , m_HideCursorFunc(0)
        , m_MacShowCursorFunc(0)
        , m_ObscureCursorFunc(0)
        , m_HidePenFunc(0)
        , m_ShowPenFunc(0)
        , m_GetPenFunc(0)
        , m_PenSizeFunc(0)
        , m_PenModeFunc(0)
        , m_PenPatFunc(0)
        , m_PenNormalFunc(0)
        , m_MoveToFunc(0)
        , m_MoveFunc(0)
        , m_MacLineToFunc(0)
        , m_LineFunc(0)
        , m_ForeColorFunc(0)
        , m_BackColorFunc(0)
        , m_ColorBitFunc(0)
        , m_MacSetRectFunc(0)
        , m_MacOffsetRectFunc(0)
        , m_MacInsetRectFunc(0)
        , m_SectRectFunc(0)
        , m_MacUnionRectFunc(0)
        , m_MacEqualRectFunc(0)
        , m_EmptyRectFunc(0)
        , m_MacFrameRectFunc(0)
        , m_PaintRectFunc(0)
        , m_EraseRectFunc(0)
        , m_MacInvertRectFunc(0)
        , m_MacFillRectFunc(0)
        , m_FrameOvalFunc(0)
        , m_PaintOvalFunc(0)
        , m_EraseOvalFunc(0)
        , m_InvertOvalFunc(0)
        , m_FillOvalFunc(0)
        , m_FrameRoundRectFunc(0)
        , m_PaintRoundRectFunc(0)
        , m_EraseRoundRectFunc(0)
        , m_InvertRoundRectFunc(0)
        , m_FillRoundRectFunc(0)
        , m_FrameArcFunc(0)
        , m_PaintArcFunc(0)
        , m_EraseArcFunc(0)
        , m_InvertArcFunc(0)
        , m_FillArcFunc(0)
        , m_NewRgnFunc(0)
        , m_OpenRgnFunc(0)
        , m_CloseRgnFunc(0)
        , m_BitMapToRegionFunc(0)
        , m_RgnToHandleFunc(0)
        , m_HandleToRgnFunc(0)
        , m_DisposeRgnFunc(0)
        , m_MacCopyRgnFunc(0)
        , m_SetEmptyRgnFunc(0)
        , m_MacSetRectRgnFunc(0)
        , m_RectRgnFunc(0)
        , m_MacOffsetRgnFunc(0)
        , m_InsetRgnFunc(0)
        , m_SectRgnFunc(0)
        , m_MacUnionRgnFunc(0)
        , m_DiffRgnFunc(0)
        , m_MacXorRgnFunc(0)
        , m_RectInRgnFunc(0)
        , m_MacEqualRgnFunc(0)
        , m_EmptyRgnFunc(0)
        , m_MacFrameRgnFunc(0)
        , m_MacPaintRgnFunc(0)
        , m_EraseRgnFunc(0)
        , m_MacInvertRgnFunc(0)
        , m_MacFillRgnFunc(0)
        , m_ScrollRectFunc(0)
        , m_CopyBitsFunc(0)
        , m_SeedFillFunc(0)
        , m_CalcMaskFunc(0)
        , m_CopyMaskFunc(0)
        , m_OpenPictureFunc(0)
        , m_PicCommentFunc(0)
        , m_ClosePictureFunc(0)
        , m_QDGetPictureBoundsFunc(0)
        , m_DrawPictureFunc(0)
        , m_KillPictureFunc(0)
        , m_OpenPolyFunc(0)
        , m_ClosePolyFunc(0)
        , m_KillPolyFunc(0)
        , m_OffsetPolyFunc(0)
        , m_FramePolyFunc(0)
        , m_PaintPolyFunc(0)
        , m_ErasePolyFunc(0)
        , m_InvertPolyFunc(0)
        , m_FillPolyFunc(0)
        , m_SetPtFunc(0)
        , m_LocalToGlobalFunc(0)
        , m_GlobalToLocalFunc(0)
        , m_RandomFunc(0)
        , m_StuffHexFunc(0)
        , m_MacGetPixelFunc(0)
        , m_ScalePtFunc(0)
        , m_MapPtFunc(0)
        , m_MapRectFunc(0)
        , m_MapRgnFunc(0)
        , m_MapPolyFunc(0)
        , m_StdRectFunc(0)
        , m_StdRRectFunc(0)
        , m_StdOvalFunc(0)
        , m_StdArcFunc(0)
        , m_StdPolyFunc(0)
        , m_StdRgnFunc(0)
        , m_StdBitsFunc(0)
        , m_StdCommentFunc(0)
        , m_StdGetPicFunc(0)
        , m_StdPutPicFunc(0)
        , m_StdOpcodeFunc(0)
        , m_AddPtFunc(0)
        , m_EqualPtFunc(0)
        , m_MacPtInRectFunc(0)
        , m_Pt2RectFunc(0)
        , m_PtToAngleFunc(0)
        , m_SubPtFunc(0)
        , m_PtInRgnFunc(0)
        , m_StdLineFunc(0)
        , m_NewPixMapFunc(0)
        , m_DisposePixMapFunc(0)
        , m_CopyPixMapFunc(0)
        , m_NewPixPatFunc(0)
        , m_DisposePixPatFunc(0)
        , m_CopyPixPatFunc(0)
        , m_PenPixPatFunc(0)
        , m_BackPixPatFunc(0)
        , m_GetPixPatFunc(0)
        , m_MakeRGBPatFunc(0)
        , m_FillCRectFunc(0)
        , m_FillCOvalFunc(0)
        , m_FillCRoundRectFunc(0)
        , m_FillCArcFunc(0)
        , m_FillCRgnFunc(0)
        , m_FillCPolyFunc(0)
        , m_RGBForeColorFunc(0)
        , m_RGBBackColorFunc(0)
        , m_SetCPixelFunc(0)
        , m_SetPortPixFunc(0)
        , m_GetCPixelFunc(0)
        , m_GetForeColorFunc(0)
        , m_GetBackColorFunc(0)
        , m_SeedCFillFunc(0)
        , m_CalcCMaskFunc(0)
        , m_OpenCPictureFunc(0)
        , m_OpColorFunc(0)
        , m_HiliteColorFunc(0)
        , m_DisposeCTableFunc(0)
        , m_GetCTableFunc(0)
        , m_AllocCursorFunc(0)
        , m_SetStdCProcsFunc(0)
        , m_GetMaxDeviceFunc(0)
        , m_GetCTSeedFunc(0)
        , m_GetDeviceListFunc(0)
        , m_GetMainDeviceFunc(0)
        , m_GetNextDeviceFunc(0)
        , m_TestDeviceAttributeFunc(0)
        , m_SetDeviceAttributeFunc(0)
        , m_InitGDeviceFunc(0)
        , m_NewGDeviceFunc(0)
        , m_DisposeGDeviceFunc(0)
        , m_SetGDeviceFunc(0)
        , m_GetGDeviceFunc(0)
        , m_Color2IndexFunc(0)
        , m_Index2ColorFunc(0)
        , m_InvertColorFunc(0)
        , m_RealColorFunc(0)
        , m_GetSubTableFunc(0)
        , m_AddSearchFunc(0)
        , m_AddCompFunc(0)
        , m_DelSearchFunc(0)
        , m_DelCompFunc(0)
        , m_SetClientIDFunc(0)
        , m_ProtectEntryFunc(0)
        , m_ReserveEntryFunc(0)
        , m_SetEntriesFunc(0)
        , m_QDErrorFunc(0)
        , m_CopyDeepMaskFunc(0)
        , m_GetMaskTableFunc(0)
        , m_GetPatternFunc(0)
        , m_GetPictureFunc(0)
        , m_DeltaPointFunc(0)
        , m_ShieldCursorFunc(0)
        , m_ScreenResFunc(0)
        , m_GetIndPatternFunc(0)
        , m_deltapointFunc(0)
        , m_PackBitsFunc(0)
        , m_UnpackBitsFunc(0)
        , m_SlopeFromAngleFunc(0)
        , m_AngleFromSlopeFunc(0)
        , m_OpenCursorComponentFunc(0)
        , m_CloseCursorComponentFunc(0)
        , m_SetCursorComponentFunc(0)
        , m_CursorComponentChangedFunc(0)
        , m_CursorComponentSetDataFunc(0)
        , m_CWMatchPixMapFunc(0)
        , m_CWCheckPixMapFunc(0)
        , m_NCMBeginMatchingFunc(0)
        , m_CMEndMatchingFunc(0)
        , m_NCMDrawMatchedPictureFunc(0)
        , m_CMEnableMatchingCommentFunc(0)
        , m_NCMUseProfileCommentFunc(0)
        , m_IsValidPortFunc(0)
        , m_IsValidRgnHandleFunc(0)
        , m_GetPortPixMapFunc(0)
        , m_GetPortBitMapForCopyBitsFunc(0)
        , m_GetPortBoundsFunc(0)
        , m_GetPortForeColorFunc(0)
        , m_GetPortBackColorFunc(0)
        , m_GetPortOpColorFunc(0)
        , m_GetPortHiliteColorFunc(0)
        , m_GetPortGrafProcsFunc(0)
        , m_GetPortTextFontFunc(0)
        , m_GetPortTextFaceFunc(0)
        , m_GetPortTextModeFunc(0)
        , m_GetPortTextSizeFunc(0)
        , m_GetPortChExtraFunc(0)
        , m_GetPortFracHPenLocationFunc(0)
        , m_GetPortSpExtraFunc(0)
        , m_GetPortPenVisibilityFunc(0)
        , m_GetPortVisibleRegionFunc(0)
        , m_GetPortClipRegionFunc(0)
        , m_GetPortBackPixPatFunc(0)
        , m_GetPortPenPixPatFunc(0)
        , m_GetPortFillPixPatFunc(0)
        , m_GetPortPenSizeFunc(0)
        , m_GetPortPenModeFunc(0)
        , m_GetPortPenLocationFunc(0)
        , m_IsPortRegionBeingDefinedFunc(0)
        , m_IsPortPictureBeingDefinedFunc(0)
        , m_IsPortPolyBeingDefinedFunc(0)
        , m_IsPortOffscreenFunc(0)
        , m_IsPortColorFunc(0)
        , m_IsPortVisibleRegionEmptyFunc(0)
        , m_IsPortClipRegionEmptyFunc(0)
        , m_SectRegionWithPortClipRegionFunc(0)
        , m_SectRegionWithPortVisibleRegionFunc(0)
        , m_SwapPortPicSaveHandleFunc(0)
        , m_SwapPortPolySaveHandleFunc(0)
        , m_SwapPortRegionSaveHandleFunc(0)
        , m_SetPortBoundsFunc(0)
        , m_SetPortOpColorFunc(0)
        , m_SetPortGrafProcsFunc(0)
        , m_SetPortTextFontFunc(0)
        , m_SetPortTextSizeFunc(0)
        , m_SetPortTextFaceFunc(0)
        , m_SetPortTextModeFunc(0)
        , m_SetPortVisibleRegionFunc(0)
        , m_SetPortClipRegionFunc(0)
        , m_SetPortPenPixPatFunc(0)
        , m_SetPortFillPixPatFunc(0)
        , m_SetPortBackPixPatFunc(0)
        , m_SetPortPenSizeFunc(0)
        , m_SetPortPenModeFunc(0)
        , m_SetPortFracHPenLocationFunc(0)
        , m_GetPixBoundsFunc(0)
        , m_GetPixDepthFunc(0)
        , m_GetQDGlobalsRandomSeedFunc(0)
        , m_GetQDGlobalsScreenBitsFunc(0)
        , m_GetQDGlobalsDarkGrayFunc(0)
        , m_GetQDGlobalsLightGrayFunc(0)
        , m_GetQDGlobalsGrayFunc(0)
        , m_GetQDGlobalsBlackFunc(0)
        , m_GetQDGlobalsWhiteFunc(0)
        , m_GetQDGlobalsThePortFunc(0)
        , m_SetQDGlobalsRandomSeedFunc(0)
        , m_GetRegionBoundsFunc(0)
        , m_IsRegionRectangularFunc(0)
        , m_CreateNewPortFunc(0)
        , m_DisposePortFunc(0)
        , m_SetQDErrorFunc(0)
        , m_QDLocalToGlobalPointFunc(0)
        , m_QDGlobalToLocalPointFunc(0)
        , m_QDLocalToGlobalRectFunc(0)
        , m_QDGlobalToLocalRectFunc(0)
        , m_QDLocalToGlobalRegionFunc(0)
        , m_QDGlobalToLocalRegionFunc(0)
        , m_QDIsPortBufferedFunc(0)
        , m_QDIsPortBufferDirtyFunc(0)
        , m_QDFlushPortBufferFunc(0)
        , m_QDGetDirtyRegionFunc(0)
        , m_QDSetDirtyRegionFunc(0)
        , m_QDAddRectToDirtyRegionFunc(0)
        , m_QDAddRegionToDirtyRegionFunc(0)
        , m_CreateCGContextForPortFunc(0)
        , m_ClipCGContextToRegionFunc(0)
        , m_SyncCGContextOriginWithPortFunc(0)
        , m_QDBeginCGContextFunc(0)
        , m_QDEndCGContextFunc(0)
        , m_CreateNewPortForCGDisplayIDFunc(0)
        , m_QDDisplayWaitCursorFunc(0)
        , m_QDSetPatternOriginFunc(0)
        , m_QDGetPatternOriginFunc(0)
        , m_QDIsNamedPixMapCursorRegisteredFunc(0)
        , m_QDRegisterNamedPixMapCursorFunc(0)
        , m_QDUnregisterNamedPixMapCursurFunc(0)
        , m_QDUnregisterNamedPixMapCursorFunc(0)
        , m_QDSetNamedPixMapCursorFunc(0)
        , m_QDSetCursorScaleFunc(0)
        , m_QDGetCursorScaleFunc(0)
        , m_QDGetCursorDataFunc(0)
        , m_QDSwapTextFlagsFunc(0)
        , m_QDSwapPortTextFlagsFunc(0)
        , m_QDGetCGDirectDisplayIDFunc(0)
        , m_LMGetScrVResFunc(0)
        , m_LMSetScrVResFunc(0)
        , m_LMGetScrHResFunc(0)
        , m_LMSetScrHResFunc(0)
        , m_LMGetMainDeviceFunc(0)
        , m_LMSetMainDeviceFunc(0)
        , m_LMGetDeviceListFunc(0)
        , m_LMSetDeviceListFunc(0)
        , m_LMGetQDColorsFunc(0)
        , m_LMSetQDColorsFunc(0)
        , m_LMGetWidthListHandFunc(0)
        , m_LMSetWidthListHandFunc(0)
        , m_LMGetHiliteModeFunc(0)
        , m_LMSetHiliteModeFunc(0)
        , m_LMGetWidthPtrFunc(0)
        , m_LMSetWidthPtrFunc(0)
        , m_LMGetWidthTabHandleFunc(0)
        , m_LMSetWidthTabHandleFunc(0)
        , m_LMGetLastSPExtraFunc(0)
        , m_LMSetLastSPExtraFunc(0)
        , m_LMGetLastFONDFunc(0)
        , m_LMSetLastFONDFunc(0)
        , m_LMGetFractEnableFunc(0)
        , m_LMSetFractEnableFunc(0)
        , m_LMGetTheGDeviceFunc(0)
        , m_LMSetTheGDeviceFunc(0)
        , m_LMGetHiliteRGBFunc(0)
        , m_LMSetHiliteRGBFunc(0)
        , m_LMGetCursorNewFunc(0)
        , m_LMSetCursorNewFunc(0)
    {}
    ~QuickDrawAPIWrapper()
    {
        m_NewCMBitmapCallBackUPPFunc = 0;
        m_DisposeCMBitmapCallBackUPPFunc = 0;
        m_InvokeCMBitmapCallBackUPPFunc = 0;
        m_NewRegionToRectsUPPFunc = 0;
        m_DisposeRegionToRectsUPPFunc = 0;
        m_InvokeRegionToRectsUPPFunc = 0;
        m_QDRegionToRectsFunc = 0;
        m_LockPortBitsFunc = 0;
        m_UnlockPortBitsFunc = 0;
        m_MacSetPortFunc = 0;
        m_GetPortFunc = 0;
        m_QDSwapPortFunc = 0;
        m_GrafDeviceFunc = 0;
        m_SetPortBitsFunc = 0;
        m_PortSizeFunc = 0;
        m_MovePortToFunc = 0;
        m_SetOriginFunc = 0;
        m_SetClipFunc = 0;
        m_GetClipFunc = 0;
        m_ClipRectFunc = 0;
        m_BackPatFunc = 0;
        m_InitCursorFunc = 0;
        m_HideCursorFunc = 0;
        m_MacShowCursorFunc = 0;
        m_ObscureCursorFunc = 0;
        m_HidePenFunc = 0;
        m_ShowPenFunc = 0;
        m_GetPenFunc = 0;
        m_PenSizeFunc = 0;
        m_PenModeFunc = 0;
        m_PenPatFunc = 0;
        m_PenNormalFunc = 0;
        m_MoveToFunc = 0;
        m_MoveFunc = 0;
        m_MacLineToFunc = 0;
        m_LineFunc = 0;
        m_ForeColorFunc = 0;
        m_BackColorFunc = 0;
        m_ColorBitFunc = 0;
        m_MacSetRectFunc = 0;
        m_MacOffsetRectFunc = 0;
        m_MacInsetRectFunc = 0;
        m_SectRectFunc = 0;
        m_MacUnionRectFunc = 0;
        m_MacEqualRectFunc = 0;
        m_EmptyRectFunc = 0;
        m_MacFrameRectFunc = 0;
        m_PaintRectFunc = 0;
        m_EraseRectFunc = 0;
        m_MacInvertRectFunc = 0;
        m_MacFillRectFunc = 0;
        m_FrameOvalFunc = 0;
        m_PaintOvalFunc = 0;
        m_EraseOvalFunc = 0;
        m_InvertOvalFunc = 0;
        m_FillOvalFunc = 0;
        m_FrameRoundRectFunc = 0;
        m_PaintRoundRectFunc = 0;
        m_EraseRoundRectFunc = 0;
        m_InvertRoundRectFunc = 0;
        m_FillRoundRectFunc = 0;
        m_FrameArcFunc = 0;
        m_PaintArcFunc = 0;
        m_EraseArcFunc = 0;
        m_InvertArcFunc = 0;
        m_FillArcFunc = 0;
        m_NewRgnFunc = 0;
        m_OpenRgnFunc = 0;
        m_CloseRgnFunc = 0;
        m_BitMapToRegionFunc = 0;
        m_RgnToHandleFunc = 0;
        m_HandleToRgnFunc = 0;
        m_DisposeRgnFunc = 0;
        m_MacCopyRgnFunc = 0;
        m_SetEmptyRgnFunc = 0;
        m_MacSetRectRgnFunc = 0;
        m_RectRgnFunc = 0;
        m_MacOffsetRgnFunc = 0;
        m_InsetRgnFunc = 0;
        m_SectRgnFunc = 0;
        m_MacUnionRgnFunc = 0;
        m_DiffRgnFunc = 0;
        m_MacXorRgnFunc = 0;
        m_RectInRgnFunc = 0;
        m_MacEqualRgnFunc = 0;
        m_EmptyRgnFunc = 0;
        m_MacFrameRgnFunc = 0;
        m_MacPaintRgnFunc = 0;
        m_EraseRgnFunc = 0;
        m_MacInvertRgnFunc = 0;
        m_MacFillRgnFunc = 0;
        m_ScrollRectFunc = 0;
        m_CopyBitsFunc = 0;
        m_SeedFillFunc = 0;
        m_CalcMaskFunc = 0;
        m_CopyMaskFunc = 0;
        m_OpenPictureFunc = 0;
        m_PicCommentFunc = 0;
        m_ClosePictureFunc = 0;
        m_QDGetPictureBoundsFunc = 0;
        m_DrawPictureFunc = 0;
        m_KillPictureFunc = 0;
        m_OpenPolyFunc = 0;
        m_ClosePolyFunc = 0;
        m_KillPolyFunc = 0;
        m_OffsetPolyFunc = 0;
        m_FramePolyFunc = 0;
        m_PaintPolyFunc = 0;
        m_ErasePolyFunc = 0;
        m_InvertPolyFunc = 0;
        m_FillPolyFunc = 0;
        m_SetPtFunc = 0;
        m_LocalToGlobalFunc = 0;
        m_GlobalToLocalFunc = 0;
        m_RandomFunc = 0;
        m_StuffHexFunc = 0;
        m_MacGetPixelFunc = 0;
        m_ScalePtFunc = 0;
        m_MapPtFunc = 0;
        m_MapRectFunc = 0;
        m_MapRgnFunc = 0;
        m_MapPolyFunc = 0;
        m_StdRectFunc = 0;
        m_StdRRectFunc = 0;
        m_StdOvalFunc = 0;
        m_StdArcFunc = 0;
        m_StdPolyFunc = 0;
        m_StdRgnFunc = 0;
        m_StdBitsFunc = 0;
        m_StdCommentFunc = 0;
        m_StdGetPicFunc = 0;
        m_StdPutPicFunc = 0;
        m_StdOpcodeFunc = 0;
        m_AddPtFunc = 0;
        m_EqualPtFunc = 0;
        m_MacPtInRectFunc = 0;
        m_Pt2RectFunc = 0;
        m_PtToAngleFunc = 0;
        m_SubPtFunc = 0;
        m_PtInRgnFunc = 0;
        m_StdLineFunc = 0;
        m_NewPixMapFunc = 0;
        m_DisposePixMapFunc = 0;
        m_CopyPixMapFunc = 0;
        m_NewPixPatFunc = 0;
        m_DisposePixPatFunc = 0;
        m_CopyPixPatFunc = 0;
        m_PenPixPatFunc = 0;
        m_BackPixPatFunc = 0;
        m_GetPixPatFunc = 0;
        m_MakeRGBPatFunc = 0;
        m_FillCRectFunc = 0;
        m_FillCOvalFunc = 0;
        m_FillCRoundRectFunc = 0;
        m_FillCArcFunc = 0;
        m_FillCRgnFunc = 0;
        m_FillCPolyFunc = 0;
        m_RGBForeColorFunc = 0;
        m_RGBBackColorFunc = 0;
        m_SetCPixelFunc = 0;
        m_SetPortPixFunc = 0;
        m_GetCPixelFunc = 0;
        m_GetForeColorFunc = 0;
        m_GetBackColorFunc = 0;
        m_SeedCFillFunc = 0;
        m_CalcCMaskFunc = 0;
        m_OpenCPictureFunc = 0;
        m_OpColorFunc = 0;
        m_HiliteColorFunc = 0;
        m_DisposeCTableFunc = 0;
        m_GetCTableFunc = 0;
        m_AllocCursorFunc = 0;
        m_SetStdCProcsFunc = 0;
        m_GetMaxDeviceFunc = 0;
        m_GetCTSeedFunc = 0;
        m_GetDeviceListFunc = 0;
        m_GetMainDeviceFunc = 0;
        m_GetNextDeviceFunc = 0;
        m_TestDeviceAttributeFunc = 0;
        m_SetDeviceAttributeFunc = 0;
        m_InitGDeviceFunc = 0;
        m_NewGDeviceFunc = 0;
        m_DisposeGDeviceFunc = 0;
        m_SetGDeviceFunc = 0;
        m_GetGDeviceFunc = 0;
        m_Color2IndexFunc = 0;
        m_Index2ColorFunc = 0;
        m_InvertColorFunc = 0;
        m_RealColorFunc = 0;
        m_GetSubTableFunc = 0;
        m_AddSearchFunc = 0;
        m_AddCompFunc = 0;
        m_DelSearchFunc = 0;
        m_DelCompFunc = 0;
        m_SetClientIDFunc = 0;
        m_ProtectEntryFunc = 0;
        m_ReserveEntryFunc = 0;
        m_SetEntriesFunc = 0;
        m_QDErrorFunc = 0;
        m_CopyDeepMaskFunc = 0;
        m_GetMaskTableFunc = 0;
        m_GetPatternFunc = 0;
        m_GetPictureFunc = 0;
        m_DeltaPointFunc = 0;
        m_ShieldCursorFunc = 0;
        m_ScreenResFunc = 0;
        m_GetIndPatternFunc = 0;
        m_deltapointFunc = 0;
        m_PackBitsFunc = 0;
        m_UnpackBitsFunc = 0;
        m_SlopeFromAngleFunc = 0;
        m_AngleFromSlopeFunc = 0;
        m_OpenCursorComponentFunc = 0;
        m_CloseCursorComponentFunc = 0;
        m_SetCursorComponentFunc = 0;
        m_CursorComponentChangedFunc = 0;
        m_CursorComponentSetDataFunc = 0;
        m_CWMatchPixMapFunc = 0;
        m_CWCheckPixMapFunc = 0;
        m_NCMBeginMatchingFunc = 0;
        m_CMEndMatchingFunc = 0;
        m_NCMDrawMatchedPictureFunc = 0;
        m_CMEnableMatchingCommentFunc = 0;
        m_NCMUseProfileCommentFunc = 0;
        m_IsValidPortFunc = 0;
        m_IsValidRgnHandleFunc = 0;
        m_GetPortPixMapFunc = 0;
        m_GetPortBitMapForCopyBitsFunc = 0;
        m_GetPortBoundsFunc = 0;
        m_GetPortForeColorFunc = 0;
        m_GetPortBackColorFunc = 0;
        m_GetPortOpColorFunc = 0;
        m_GetPortHiliteColorFunc = 0;
        m_GetPortGrafProcsFunc = 0;
        m_GetPortTextFontFunc = 0;
        m_GetPortTextFaceFunc = 0;
        m_GetPortTextModeFunc = 0;
        m_GetPortTextSizeFunc = 0;
        m_GetPortChExtraFunc = 0;
        m_GetPortFracHPenLocationFunc = 0;
        m_GetPortSpExtraFunc = 0;
        m_GetPortPenVisibilityFunc = 0;
        m_GetPortVisibleRegionFunc = 0;
        m_GetPortClipRegionFunc = 0;
        m_GetPortBackPixPatFunc = 0;
        m_GetPortPenPixPatFunc = 0;
        m_GetPortFillPixPatFunc = 0;
        m_GetPortPenSizeFunc = 0;
        m_GetPortPenModeFunc = 0;
        m_GetPortPenLocationFunc = 0;
        m_IsPortRegionBeingDefinedFunc = 0;
        m_IsPortPictureBeingDefinedFunc = 0;
        m_IsPortPolyBeingDefinedFunc = 0;
        m_IsPortOffscreenFunc = 0;
        m_IsPortColorFunc = 0;
        m_IsPortVisibleRegionEmptyFunc = 0;
        m_IsPortClipRegionEmptyFunc = 0;
        m_SectRegionWithPortClipRegionFunc = 0;
        m_SectRegionWithPortVisibleRegionFunc = 0;
        m_SwapPortPicSaveHandleFunc = 0;
        m_SwapPortPolySaveHandleFunc = 0;
        m_SwapPortRegionSaveHandleFunc = 0;
        m_SetPortBoundsFunc = 0;
        m_SetPortOpColorFunc = 0;
        m_SetPortGrafProcsFunc = 0;
        m_SetPortTextFontFunc = 0;
        m_SetPortTextSizeFunc = 0;
        m_SetPortTextFaceFunc = 0;
        m_SetPortTextModeFunc = 0;
        m_SetPortVisibleRegionFunc = 0;
        m_SetPortClipRegionFunc = 0;
        m_SetPortPenPixPatFunc = 0;
        m_SetPortFillPixPatFunc = 0;
        m_SetPortBackPixPatFunc = 0;
        m_SetPortPenSizeFunc = 0;
        m_SetPortPenModeFunc = 0;
        m_SetPortFracHPenLocationFunc = 0;
        m_GetPixBoundsFunc = 0;
        m_GetPixDepthFunc = 0;
        m_GetQDGlobalsRandomSeedFunc = 0;
        m_GetQDGlobalsScreenBitsFunc = 0;
        m_GetQDGlobalsDarkGrayFunc = 0;
        m_GetQDGlobalsLightGrayFunc = 0;
        m_GetQDGlobalsGrayFunc = 0;
        m_GetQDGlobalsBlackFunc = 0;
        m_GetQDGlobalsWhiteFunc = 0;
        m_GetQDGlobalsThePortFunc = 0;
        m_SetQDGlobalsRandomSeedFunc = 0;
        m_GetRegionBoundsFunc = 0;
        m_IsRegionRectangularFunc = 0;
        m_CreateNewPortFunc = 0;
        m_DisposePortFunc = 0;
        m_SetQDErrorFunc = 0;
        m_QDLocalToGlobalPointFunc = 0;
        m_QDGlobalToLocalPointFunc = 0;
        m_QDLocalToGlobalRectFunc = 0;
        m_QDGlobalToLocalRectFunc = 0;
        m_QDLocalToGlobalRegionFunc = 0;
        m_QDGlobalToLocalRegionFunc = 0;
        m_QDIsPortBufferedFunc = 0;
        m_QDIsPortBufferDirtyFunc = 0;
        m_QDFlushPortBufferFunc = 0;
        m_QDGetDirtyRegionFunc = 0;
        m_QDSetDirtyRegionFunc = 0;
        m_QDAddRectToDirtyRegionFunc = 0;
        m_QDAddRegionToDirtyRegionFunc = 0;
        m_CreateCGContextForPortFunc = 0;
        m_ClipCGContextToRegionFunc = 0;
        m_SyncCGContextOriginWithPortFunc = 0;
        m_QDBeginCGContextFunc = 0;
        m_QDEndCGContextFunc = 0;
        m_CreateNewPortForCGDisplayIDFunc = 0;
        m_QDDisplayWaitCursorFunc = 0;
        m_QDSetPatternOriginFunc = 0;
        m_QDGetPatternOriginFunc = 0;
        m_QDIsNamedPixMapCursorRegisteredFunc = 0;
        m_QDRegisterNamedPixMapCursorFunc = 0;
        m_QDUnregisterNamedPixMapCursurFunc = 0;
        m_QDUnregisterNamedPixMapCursorFunc = 0;
        m_QDSetNamedPixMapCursorFunc = 0;
        m_QDSetCursorScaleFunc = 0;
        m_QDGetCursorScaleFunc = 0;
        m_QDGetCursorDataFunc = 0;
        m_QDSwapTextFlagsFunc = 0;
        m_QDSwapPortTextFlagsFunc = 0;
        m_QDGetCGDirectDisplayIDFunc = 0;
        m_LMGetScrVResFunc = 0;
        m_LMSetScrVResFunc = 0;
        m_LMGetScrHResFunc = 0;
        m_LMSetScrHResFunc = 0;
        m_LMGetMainDeviceFunc = 0;
        m_LMSetMainDeviceFunc = 0;
        m_LMGetDeviceListFunc = 0;
        m_LMSetDeviceListFunc = 0;
        m_LMGetQDColorsFunc = 0;
        m_LMSetQDColorsFunc = 0;
        m_LMGetWidthListHandFunc = 0;
        m_LMSetWidthListHandFunc = 0;
        m_LMGetHiliteModeFunc = 0;
        m_LMSetHiliteModeFunc = 0;
        m_LMGetWidthPtrFunc = 0;
        m_LMSetWidthPtrFunc = 0;
        m_LMGetWidthTabHandleFunc = 0;
        m_LMSetWidthTabHandleFunc = 0;
        m_LMGetLastSPExtraFunc = 0;
        m_LMSetLastSPExtraFunc = 0;
        m_LMGetLastFONDFunc = 0;
        m_LMSetLastFONDFunc = 0;
        m_LMGetFractEnableFunc = 0;
        m_LMSetFractEnableFunc = 0;
        m_LMGetTheGDeviceFunc = 0;
        m_LMSetTheGDeviceFunc = 0;
        m_LMGetHiliteRGBFunc = 0;
        m_LMSetHiliteRGBFunc = 0;
        m_LMGetCursorNewFunc = 0;
        m_LMSetCursorNewFunc = 0;
        if (m_qd_dylib_handle) {
            dlclose(m_qd_dylib_handle);
            m_qd_dylib_handle = 0;
        }
    }
    CMBitmapCallBackUPP fakeQD_NewCMBitmapCallBackUPP(CMBitmapCallBackProcPtr a0)
    {
        initializeIfNeeded();
        if (m_NewCMBitmapCallBackUPPFunc) {
            return m_NewCMBitmapCallBackUPPFunc(a0);
        } else {
            return (CMBitmapCallBackUPP)0;
        }
    }
    void fakeQD_DisposeCMBitmapCallBackUPP(CMBitmapCallBackUPP a0)
    {
        initializeIfNeeded();
        if (m_DisposeCMBitmapCallBackUPPFunc) {
            m_DisposeCMBitmapCallBackUPPFunc(a0);
        }
    }
    Boolean fakeQD_InvokeCMBitmapCallBackUPP(long a0, void * a1, CMBitmapCallBackUPP a2)
    {
        initializeIfNeeded();
        if (m_InvokeCMBitmapCallBackUPPFunc) {
            return m_InvokeCMBitmapCallBackUPPFunc(a0, a1, a2);
        } else {
            return (Boolean)0;
        }
    }
    RegionToRectsUPP fakeQD_NewRegionToRectsUPP(RegionToRectsProcPtr a0)
    {
        initializeIfNeeded();
        if (m_NewRegionToRectsUPPFunc) {
            return m_NewRegionToRectsUPPFunc(a0);
        } else {
            return (RegionToRectsUPP)0;
        }
    }
    void fakeQD_DisposeRegionToRectsUPP(RegionToRectsUPP a0)
    {
        initializeIfNeeded();
        if (m_DisposeRegionToRectsUPPFunc) {
            m_DisposeRegionToRectsUPPFunc(a0);
        }
    }
    OSStatus fakeQD_InvokeRegionToRectsUPP(UInt16 a0, RgnHandle a1, const Rect * a2, void * a3, RegionToRectsUPP a4)
    {
        initializeIfNeeded();
        if (m_InvokeRegionToRectsUPPFunc) {
            return m_InvokeRegionToRectsUPPFunc(a0, a1, a2, a3, a4);
        } else {
            return (OSStatus)0;
        }
    }
    OSStatus fakeQD_QDRegionToRects(RgnHandle a0, QDRegionParseDirection a1, RegionToRectsUPP a2, void * a3)
    {
        initializeIfNeeded();
        if (m_QDRegionToRectsFunc) {
            return m_QDRegionToRectsFunc(a0, a1, a2, a3);
        } else {
            return (OSStatus)0;
        }
    }
    OSErr fakeQD_LockPortBits(GrafPtr a0)
    {
        initializeIfNeeded();
        if (m_LockPortBitsFunc) {
            return m_LockPortBitsFunc(a0);
        } else {
            return (OSErr)0;
        }
    }
    OSErr fakeQD_UnlockPortBits(GrafPtr a0)
    {
        initializeIfNeeded();
        if (m_UnlockPortBitsFunc) {
            return m_UnlockPortBitsFunc(a0);
        } else {
            return (OSErr)0;
        }
    }
    void fakeQD_MacSetPort(GrafPtr a0)
    {
        initializeIfNeeded();
        if (m_MacSetPortFunc) {
            m_MacSetPortFunc(a0);
        }
    }
    void fakeQD_GetPort(GrafPtr * a0)
    {
        initializeIfNeeded();
        if (m_GetPortFunc) {
            m_GetPortFunc(a0);
        }
    }
    Boolean fakeQD_QDSwapPort(CGrafPtr a0, CGrafPtr * a1)
    {
        initializeIfNeeded();
        if (m_QDSwapPortFunc) {
            return m_QDSwapPortFunc(a0, a1);
        } else {
            return (Boolean)0;
        }
    }
    void fakeQD_GrafDevice(short a0)
    {
        initializeIfNeeded();
        if (m_GrafDeviceFunc) {
            m_GrafDeviceFunc(a0);
        }
    }
    void fakeQD_SetPortBits(const BitMap * a0)
    {
        initializeIfNeeded();
        if (m_SetPortBitsFunc) {
            m_SetPortBitsFunc(a0);
        }
    }
    void fakeQD_PortSize(short a0, short a1)
    {
        initializeIfNeeded();
        if (m_PortSizeFunc) {
            m_PortSizeFunc(a0, a1);
        }
    }
    void fakeQD_MovePortTo(short a0, short a1)
    {
        initializeIfNeeded();
        if (m_MovePortToFunc) {
            m_MovePortToFunc(a0, a1);
        }
    }
    void fakeQD_SetOrigin(short a0, short a1)
    {
        initializeIfNeeded();
        if (m_SetOriginFunc) {
            m_SetOriginFunc(a0, a1);
        }
    }
    void fakeQD_SetClip(RgnHandle a0)
    {
        initializeIfNeeded();
        if (m_SetClipFunc) {
            m_SetClipFunc(a0);
        }
    }
    void fakeQD_GetClip(RgnHandle a0)
    {
        initializeIfNeeded();
        if (m_GetClipFunc) {
            m_GetClipFunc(a0);
        }
    }
    void fakeQD_ClipRect(const Rect * a0)
    {
        initializeIfNeeded();
        if (m_ClipRectFunc) {
            m_ClipRectFunc(a0);
        }
    }
    void fakeQD_BackPat(const Pattern * a0)
    {
        initializeIfNeeded();
        if (m_BackPatFunc) {
            m_BackPatFunc(a0);
        }
    }
    void fakeQD_InitCursor()
    {
        initializeIfNeeded();
        if (m_InitCursorFunc) {
            m_InitCursorFunc();
        }
    }
    void fakeQD_HideCursor()
    {
        initializeIfNeeded();
        if (m_HideCursorFunc) {
            m_HideCursorFunc();
        }
    }
    void fakeQD_MacShowCursor()
    {
        initializeIfNeeded();
        if (m_MacShowCursorFunc) {
            m_MacShowCursorFunc();
        }
    }
    void fakeQD_ObscureCursor()
    {
        initializeIfNeeded();
        if (m_ObscureCursorFunc) {
            m_ObscureCursorFunc();
        }
    }
    void fakeQD_HidePen()
    {
        initializeIfNeeded();
        if (m_HidePenFunc) {
            m_HidePenFunc();
        }
    }
    void fakeQD_ShowPen()
    {
        initializeIfNeeded();
        if (m_ShowPenFunc) {
            m_ShowPenFunc();
        }
    }
    void fakeQD_GetPen(Point * a0)
    {
        initializeIfNeeded();
        if (m_GetPenFunc) {
            m_GetPenFunc(a0);
        }
    }
    void fakeQD_PenSize(short a0, short a1)
    {
        initializeIfNeeded();
        if (m_PenSizeFunc) {
            m_PenSizeFunc(a0, a1);
        }
    }
    void fakeQD_PenMode(short a0)
    {
        initializeIfNeeded();
        if (m_PenModeFunc) {
            m_PenModeFunc(a0);
        }
    }
    void fakeQD_PenPat(const Pattern * a0)
    {
        initializeIfNeeded();
        if (m_PenPatFunc) {
            m_PenPatFunc(a0);
        }
    }
    void fakeQD_PenNormal()
    {
        initializeIfNeeded();
        if (m_PenNormalFunc) {
            m_PenNormalFunc();
        }
    }
    void fakeQD_MoveTo(short a0, short a1)
    {
        initializeIfNeeded();
        if (m_MoveToFunc) {
            m_MoveToFunc(a0, a1);
        }
    }
    void fakeQD_Move(short a0, short a1)
    {
        initializeIfNeeded();
        if (m_MoveFunc) {
            m_MoveFunc(a0, a1);
        }
    }
    void fakeQD_MacLineTo(short a0, short a1)
    {
        initializeIfNeeded();
        if (m_MacLineToFunc) {
            m_MacLineToFunc(a0, a1);
        }
    }
    void fakeQD_Line(short a0, short a1)
    {
        initializeIfNeeded();
        if (m_LineFunc) {
            m_LineFunc(a0, a1);
        }
    }
    void fakeQD_ForeColor(long a0)
    {
        initializeIfNeeded();
        if (m_ForeColorFunc) {
            m_ForeColorFunc(a0);
        }
    }
    void fakeQD_BackColor(long a0)
    {
        initializeIfNeeded();
        if (m_BackColorFunc) {
            m_BackColorFunc(a0);
        }
    }
    void fakeQD_ColorBit(short a0)
    {
        initializeIfNeeded();
        if (m_ColorBitFunc) {
            m_ColorBitFunc(a0);
        }
    }
    void fakeQD_MacSetRect(Rect * a0, short a1, short a2, short a3, short a4)
    {
        initializeIfNeeded();
        if (m_MacSetRectFunc) {
            m_MacSetRectFunc(a0, a1, a2, a3, a4);
        }
    }
    void fakeQD_MacOffsetRect(Rect * a0, short a1, short a2)
    {
        initializeIfNeeded();
        if (m_MacOffsetRectFunc) {
            m_MacOffsetRectFunc(a0, a1, a2);
        }
    }
    void fakeQD_MacInsetRect(Rect * a0, short a1, short a2)
    {
        initializeIfNeeded();
        if (m_MacInsetRectFunc) {
            m_MacInsetRectFunc(a0, a1, a2);
        }
    }
    Boolean fakeQD_SectRect(const Rect * a0, const Rect * a1, Rect * a2)
    {
        initializeIfNeeded();
        if (m_SectRectFunc) {
            return m_SectRectFunc(a0, a1, a2);
        } else {
            return (Boolean)0;
        }
    }
    void fakeQD_MacUnionRect(const Rect * a0, const Rect * a1, Rect * a2)
    {
        initializeIfNeeded();
        if (m_MacUnionRectFunc) {
            m_MacUnionRectFunc(a0, a1, a2);
        }
    }
    Boolean fakeQD_MacEqualRect(const Rect * a0, const Rect * a1)
    {
        initializeIfNeeded();
        if (m_MacEqualRectFunc) {
            return m_MacEqualRectFunc(a0, a1);
        } else {
            return (Boolean)0;
        }
    }
    Boolean fakeQD_EmptyRect(const Rect * a0)
    {
        initializeIfNeeded();
        if (m_EmptyRectFunc) {
            return m_EmptyRectFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    void fakeQD_MacFrameRect(const Rect * a0)
    {
        initializeIfNeeded();
        if (m_MacFrameRectFunc) {
            m_MacFrameRectFunc(a0);
        }
    }
    void fakeQD_PaintRect(const Rect * a0)
    {
        initializeIfNeeded();
        if (m_PaintRectFunc) {
            m_PaintRectFunc(a0);
        }
    }
    void fakeQD_EraseRect(const Rect * a0)
    {
        initializeIfNeeded();
        if (m_EraseRectFunc) {
            m_EraseRectFunc(a0);
        }
    }
    void fakeQD_MacInvertRect(const Rect * a0)
    {
        initializeIfNeeded();
        if (m_MacInvertRectFunc) {
            m_MacInvertRectFunc(a0);
        }
    }
    void fakeQD_MacFillRect(const Rect * a0, const Pattern * a1)
    {
        initializeIfNeeded();
        if (m_MacFillRectFunc) {
            m_MacFillRectFunc(a0, a1);
        }
    }
    void fakeQD_FrameOval(const Rect * a0)
    {
        initializeIfNeeded();
        if (m_FrameOvalFunc) {
            m_FrameOvalFunc(a0);
        }
    }
    void fakeQD_PaintOval(const Rect * a0)
    {
        initializeIfNeeded();
        if (m_PaintOvalFunc) {
            m_PaintOvalFunc(a0);
        }
    }
    void fakeQD_EraseOval(const Rect * a0)
    {
        initializeIfNeeded();
        if (m_EraseOvalFunc) {
            m_EraseOvalFunc(a0);
        }
    }
    void fakeQD_InvertOval(const Rect * a0)
    {
        initializeIfNeeded();
        if (m_InvertOvalFunc) {
            m_InvertOvalFunc(a0);
        }
    }
    void fakeQD_FillOval(const Rect * a0, const Pattern * a1)
    {
        initializeIfNeeded();
        if (m_FillOvalFunc) {
            m_FillOvalFunc(a0, a1);
        }
    }
    void fakeQD_FrameRoundRect(const Rect * a0, short a1, short a2)
    {
        initializeIfNeeded();
        if (m_FrameRoundRectFunc) {
            m_FrameRoundRectFunc(a0, a1, a2);
        }
    }
    void fakeQD_PaintRoundRect(const Rect * a0, short a1, short a2)
    {
        initializeIfNeeded();
        if (m_PaintRoundRectFunc) {
            m_PaintRoundRectFunc(a0, a1, a2);
        }
    }
    void fakeQD_EraseRoundRect(const Rect * a0, short a1, short a2)
    {
        initializeIfNeeded();
        if (m_EraseRoundRectFunc) {
            m_EraseRoundRectFunc(a0, a1, a2);
        }
    }
    void fakeQD_InvertRoundRect(const Rect * a0, short a1, short a2)
    {
        initializeIfNeeded();
        if (m_InvertRoundRectFunc) {
            m_InvertRoundRectFunc(a0, a1, a2);
        }
    }
    void fakeQD_FillRoundRect(const Rect * a0, short a1, short a2, const Pattern * a3)
    {
        initializeIfNeeded();
        if (m_FillRoundRectFunc) {
            m_FillRoundRectFunc(a0, a1, a2, a3);
        }
    }
    void fakeQD_FrameArc(const Rect * a0, short a1, short a2)
    {
        initializeIfNeeded();
        if (m_FrameArcFunc) {
            m_FrameArcFunc(a0, a1, a2);
        }
    }
    void fakeQD_PaintArc(const Rect * a0, short a1, short a2)
    {
        initializeIfNeeded();
        if (m_PaintArcFunc) {
            m_PaintArcFunc(a0, a1, a2);
        }
    }
    void fakeQD_EraseArc(const Rect * a0, short a1, short a2)
    {
        initializeIfNeeded();
        if (m_EraseArcFunc) {
            m_EraseArcFunc(a0, a1, a2);
        }
    }
    void fakeQD_InvertArc(const Rect * a0, short a1, short a2)
    {
        initializeIfNeeded();
        if (m_InvertArcFunc) {
            m_InvertArcFunc(a0, a1, a2);
        }
    }
    void fakeQD_FillArc(const Rect * a0, short a1, short a2, const Pattern * a3)
    {
        initializeIfNeeded();
        if (m_FillArcFunc) {
            m_FillArcFunc(a0, a1, a2, a3);
        }
    }
    RgnHandle fakeQD_NewRgn()
    {
        initializeIfNeeded();
        if (m_NewRgnFunc) {
            return m_NewRgnFunc();
        } else {
            return (RgnHandle)0;
        }
    }
    void fakeQD_OpenRgn()
    {
        initializeIfNeeded();
        if (m_OpenRgnFunc) {
            m_OpenRgnFunc();
        }
    }
    void fakeQD_CloseRgn(RgnHandle a0)
    {
        initializeIfNeeded();
        if (m_CloseRgnFunc) {
            m_CloseRgnFunc(a0);
        }
    }
    OSErr fakeQD_BitMapToRegion(RgnHandle a0, const BitMap * a1)
    {
        initializeIfNeeded();
        if (m_BitMapToRegionFunc) {
            return m_BitMapToRegionFunc(a0, a1);
        } else {
            return (OSErr)0;
        }
    }
    void fakeQD_RgnToHandle(RgnHandle a0, Handle a1)
    {
        initializeIfNeeded();
        if (m_RgnToHandleFunc) {
            m_RgnToHandleFunc(a0, a1);
        }
    }
    void fakeQD_HandleToRgn(Handle a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_HandleToRgnFunc) {
            m_HandleToRgnFunc(a0, a1);
        }
    }
    void fakeQD_DisposeRgn(RgnHandle a0)
    {
        initializeIfNeeded();
        if (m_DisposeRgnFunc) {
            m_DisposeRgnFunc(a0);
        }
    }
    void fakeQD_MacCopyRgn(RgnHandle a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_MacCopyRgnFunc) {
            m_MacCopyRgnFunc(a0, a1);
        }
    }
    void fakeQD_SetEmptyRgn(RgnHandle a0)
    {
        initializeIfNeeded();
        if (m_SetEmptyRgnFunc) {
            m_SetEmptyRgnFunc(a0);
        }
    }
    void fakeQD_MacSetRectRgn(RgnHandle a0, short a1, short a2, short a3, short a4)
    {
        initializeIfNeeded();
        if (m_MacSetRectRgnFunc) {
            m_MacSetRectRgnFunc(a0, a1, a2, a3, a4);
        }
    }
    void fakeQD_RectRgn(RgnHandle a0, const Rect * a1)
    {
        initializeIfNeeded();
        if (m_RectRgnFunc) {
            m_RectRgnFunc(a0, a1);
        }
    }
    void fakeQD_MacOffsetRgn(RgnHandle a0, short a1, short a2)
    {
        initializeIfNeeded();
        if (m_MacOffsetRgnFunc) {
            m_MacOffsetRgnFunc(a0, a1, a2);
        }
    }
    void fakeQD_InsetRgn(RgnHandle a0, short a1, short a2)
    {
        initializeIfNeeded();
        if (m_InsetRgnFunc) {
            m_InsetRgnFunc(a0, a1, a2);
        }
    }
    void fakeQD_SectRgn(RgnHandle a0, RgnHandle a1, RgnHandle a2)
    {
        initializeIfNeeded();
        if (m_SectRgnFunc) {
            m_SectRgnFunc(a0, a1, a2);
        }
    }
    void fakeQD_MacUnionRgn(RgnHandle a0, RgnHandle a1, RgnHandle a2)
    {
        initializeIfNeeded();
        if (m_MacUnionRgnFunc) {
            m_MacUnionRgnFunc(a0, a1, a2);
        }
    }
    void fakeQD_DiffRgn(RgnHandle a0, RgnHandle a1, RgnHandle a2)
    {
        initializeIfNeeded();
        if (m_DiffRgnFunc) {
            m_DiffRgnFunc(a0, a1, a2);
        }
    }
    void fakeQD_MacXorRgn(RgnHandle a0, RgnHandle a1, RgnHandle a2)
    {
        initializeIfNeeded();
        if (m_MacXorRgnFunc) {
            m_MacXorRgnFunc(a0, a1, a2);
        }
    }
    Boolean fakeQD_RectInRgn(const Rect * a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_RectInRgnFunc) {
            return m_RectInRgnFunc(a0, a1);
        } else {
            return (Boolean)0;
        }
    }
    Boolean fakeQD_MacEqualRgn(RgnHandle a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_MacEqualRgnFunc) {
            return m_MacEqualRgnFunc(a0, a1);
        } else {
            return (Boolean)0;
        }
    }
    Boolean fakeQD_EmptyRgn(RgnHandle a0)
    {
        initializeIfNeeded();
        if (m_EmptyRgnFunc) {
            return m_EmptyRgnFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    void fakeQD_MacFrameRgn(RgnHandle a0)
    {
        initializeIfNeeded();
        if (m_MacFrameRgnFunc) {
            m_MacFrameRgnFunc(a0);
        }
    }
    void fakeQD_MacPaintRgn(RgnHandle a0)
    {
        initializeIfNeeded();
        if (m_MacPaintRgnFunc) {
            m_MacPaintRgnFunc(a0);
        }
    }
    void fakeQD_EraseRgn(RgnHandle a0)
    {
        initializeIfNeeded();
        if (m_EraseRgnFunc) {
            m_EraseRgnFunc(a0);
        }
    }
    void fakeQD_MacInvertRgn(RgnHandle a0)
    {
        initializeIfNeeded();
        if (m_MacInvertRgnFunc) {
            m_MacInvertRgnFunc(a0);
        }
    }
    void fakeQD_MacFillRgn(RgnHandle a0, const Pattern * a1)
    {
        initializeIfNeeded();
        if (m_MacFillRgnFunc) {
            m_MacFillRgnFunc(a0, a1);
        }
    }
    void fakeQD_ScrollRect(const Rect * a0, short a1, short a2, RgnHandle a3)
    {
        initializeIfNeeded();
        if (m_ScrollRectFunc) {
            m_ScrollRectFunc(a0, a1, a2, a3);
        }
    }
    void fakeQD_CopyBits(const BitMap * a0, const BitMap * a1, const Rect * a2, const Rect * a3, short a4, RgnHandle a5)
    {
        initializeIfNeeded();
        if (m_CopyBitsFunc) {
            m_CopyBitsFunc(a0, a1, a2, a3, a4, a5);
        }
    }
    void fakeQD_SeedFill(const void * a0, void * a1, short a2, short a3, short a4, short a5, short a6, short a7)
    {
        initializeIfNeeded();
        if (m_SeedFillFunc) {
            m_SeedFillFunc(a0, a1, a2, a3, a4, a5, a6, a7);
        }
    }
    void fakeQD_CalcMask(const void * a0, void * a1, short a2, short a3, short a4, short a5)
    {
        initializeIfNeeded();
        if (m_CalcMaskFunc) {
            m_CalcMaskFunc(a0, a1, a2, a3, a4, a5);
        }
    }
    void fakeQD_CopyMask(const BitMap * a0, const BitMap * a1, const BitMap * a2, const Rect * a3, const Rect * a4, const Rect * a5)
    {
        initializeIfNeeded();
        if (m_CopyMaskFunc) {
            m_CopyMaskFunc(a0, a1, a2, a3, a4, a5);
        }
    }
    PicHandle fakeQD_OpenPicture(const Rect * a0)
    {
        initializeIfNeeded();
        if (m_OpenPictureFunc) {
            return m_OpenPictureFunc(a0);
        } else {
            return (PicHandle)0;
        }
    }
    void fakeQD_PicComment(short a0, short a1, Handle a2)
    {
        initializeIfNeeded();
        if (m_PicCommentFunc) {
            m_PicCommentFunc(a0, a1, a2);
        }
    }
    void fakeQD_ClosePicture()
    {
        initializeIfNeeded();
        if (m_ClosePictureFunc) {
            m_ClosePictureFunc();
        }
    }
    Rect * fakeQD_QDGetPictureBounds(PicHandle a0, Rect * a1)
    {
        initializeIfNeeded();
        if (m_QDGetPictureBoundsFunc) {
            return m_QDGetPictureBoundsFunc(a0, a1);
        } else {
            return (Rect *)0;
        }
    }
    void fakeQD_DrawPicture(PicHandle a0, const Rect * a1)
    {
        initializeIfNeeded();
        if (m_DrawPictureFunc) {
            m_DrawPictureFunc(a0, a1);
        }
    }
    void fakeQD_KillPicture(PicHandle a0)
    {
        initializeIfNeeded();
        if (m_KillPictureFunc) {
            m_KillPictureFunc(a0);
        }
    }
    PolyHandle fakeQD_OpenPoly()
    {
        initializeIfNeeded();
        if (m_OpenPolyFunc) {
            return m_OpenPolyFunc();
        } else {
            return (PolyHandle)0;
        }
    }
    void fakeQD_ClosePoly()
    {
        initializeIfNeeded();
        if (m_ClosePolyFunc) {
            m_ClosePolyFunc();
        }
    }
    void fakeQD_KillPoly(PolyHandle a0)
    {
        initializeIfNeeded();
        if (m_KillPolyFunc) {
            m_KillPolyFunc(a0);
        }
    }
    void fakeQD_OffsetPoly(PolyHandle a0, short a1, short a2)
    {
        initializeIfNeeded();
        if (m_OffsetPolyFunc) {
            m_OffsetPolyFunc(a0, a1, a2);
        }
    }
    void fakeQD_FramePoly(PolyHandle a0)
    {
        initializeIfNeeded();
        if (m_FramePolyFunc) {
            m_FramePolyFunc(a0);
        }
    }
    void fakeQD_PaintPoly(PolyHandle a0)
    {
        initializeIfNeeded();
        if (m_PaintPolyFunc) {
            m_PaintPolyFunc(a0);
        }
    }
    void fakeQD_ErasePoly(PolyHandle a0)
    {
        initializeIfNeeded();
        if (m_ErasePolyFunc) {
            m_ErasePolyFunc(a0);
        }
    }
    void fakeQD_InvertPoly(PolyHandle a0)
    {
        initializeIfNeeded();
        if (m_InvertPolyFunc) {
            m_InvertPolyFunc(a0);
        }
    }
    void fakeQD_FillPoly(PolyHandle a0, const Pattern * a1)
    {
        initializeIfNeeded();
        if (m_FillPolyFunc) {
            m_FillPolyFunc(a0, a1);
        }
    }
    void fakeQD_SetPt(Point * a0, short a1, short a2)
    {
        initializeIfNeeded();
        if (m_SetPtFunc) {
            m_SetPtFunc(a0, a1, a2);
        }
    }
    void fakeQD_LocalToGlobal(Point * a0)
    {
        initializeIfNeeded();
        if (m_LocalToGlobalFunc) {
            m_LocalToGlobalFunc(a0);
        }
    }
    void fakeQD_GlobalToLocal(Point * a0)
    {
        initializeIfNeeded();
        if (m_GlobalToLocalFunc) {
            m_GlobalToLocalFunc(a0);
        }
    }
    short fakeQD_Random()
    {
        initializeIfNeeded();
        if (m_RandomFunc) {
            return m_RandomFunc();
        } else {
            return (short)0;
        }
    }
    void fakeQD_StuffHex(void * a0, ConstStr255Param a1)
    {
        initializeIfNeeded();
        if (m_StuffHexFunc) {
            m_StuffHexFunc(a0, a1);
        }
    }
    Boolean fakeQD_MacGetPixel(short a0, short a1)
    {
        initializeIfNeeded();
        if (m_MacGetPixelFunc) {
            return m_MacGetPixelFunc(a0, a1);
        } else {
            return (Boolean)0;
        }
    }
    void fakeQD_ScalePt(Point * a0, const Rect * a1, const Rect * a2)
    {
        initializeIfNeeded();
        if (m_ScalePtFunc) {
            m_ScalePtFunc(a0, a1, a2);
        }
    }
    void fakeQD_MapPt(Point * a0, const Rect * a1, const Rect * a2)
    {
        initializeIfNeeded();
        if (m_MapPtFunc) {
            m_MapPtFunc(a0, a1, a2);
        }
    }
    void fakeQD_MapRect(Rect * a0, const Rect * a1, const Rect * a2)
    {
        initializeIfNeeded();
        if (m_MapRectFunc) {
            m_MapRectFunc(a0, a1, a2);
        }
    }
    void fakeQD_MapRgn(RgnHandle a0, const Rect * a1, const Rect * a2)
    {
        initializeIfNeeded();
        if (m_MapRgnFunc) {
            m_MapRgnFunc(a0, a1, a2);
        }
    }
    void fakeQD_MapPoly(PolyHandle a0, const Rect * a1, const Rect * a2)
    {
        initializeIfNeeded();
        if (m_MapPolyFunc) {
            m_MapPolyFunc(a0, a1, a2);
        }
    }
    void fakeQD_StdRect(GrafVerb a0, const Rect * a1)
    {
        initializeIfNeeded();
        if (m_StdRectFunc) {
            m_StdRectFunc(a0, a1);
        }
    }
    void fakeQD_StdRRect(GrafVerb a0, const Rect * a1, short a2, short a3)
    {
        initializeIfNeeded();
        if (m_StdRRectFunc) {
            m_StdRRectFunc(a0, a1, a2, a3);
        }
    }
    void fakeQD_StdOval(GrafVerb a0, const Rect * a1)
    {
        initializeIfNeeded();
        if (m_StdOvalFunc) {
            m_StdOvalFunc(a0, a1);
        }
    }
    void fakeQD_StdArc(GrafVerb a0, const Rect * a1, short a2, short a3)
    {
        initializeIfNeeded();
        if (m_StdArcFunc) {
            m_StdArcFunc(a0, a1, a2, a3);
        }
    }
    void fakeQD_StdPoly(GrafVerb a0, PolyHandle a1)
    {
        initializeIfNeeded();
        if (m_StdPolyFunc) {
            m_StdPolyFunc(a0, a1);
        }
    }
    void fakeQD_StdRgn(GrafVerb a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_StdRgnFunc) {
            m_StdRgnFunc(a0, a1);
        }
    }
    void fakeQD_StdBits(const BitMap * a0, const Rect * a1, const Rect * a2, short a3, RgnHandle a4)
    {
        initializeIfNeeded();
        if (m_StdBitsFunc) {
            m_StdBitsFunc(a0, a1, a2, a3, a4);
        }
    }
    void fakeQD_StdComment(short a0, short a1, Handle a2)
    {
        initializeIfNeeded();
        if (m_StdCommentFunc) {
            m_StdCommentFunc(a0, a1, a2);
        }
    }
    void fakeQD_StdGetPic(void * a0, short a1)
    {
        initializeIfNeeded();
        if (m_StdGetPicFunc) {
            m_StdGetPicFunc(a0, a1);
        }
    }
    void fakeQD_StdPutPic(const void * a0, short a1)
    {
        initializeIfNeeded();
        if (m_StdPutPicFunc) {
            m_StdPutPicFunc(a0, a1);
        }
    }
    void fakeQD_StdOpcode(const Rect * a0, const Rect * a1, UInt16 a2, SInt16 a3)
    {
        initializeIfNeeded();
        if (m_StdOpcodeFunc) {
            m_StdOpcodeFunc(a0, a1, a2, a3);
        }
    }
    void fakeQD_AddPt(Point a0, Point * a1)
    {
        initializeIfNeeded();
        if (m_AddPtFunc) {
            m_AddPtFunc(a0, a1);
        }
    }
    Boolean fakeQD_EqualPt(Point a0, Point a1)
    {
        initializeIfNeeded();
        if (m_EqualPtFunc) {
            return m_EqualPtFunc(a0, a1);
        } else {
            return (Boolean)0;
        }
    }
    Boolean fakeQD_MacPtInRect(Point a0, const Rect * a1)
    {
        initializeIfNeeded();
        if (m_MacPtInRectFunc) {
            return m_MacPtInRectFunc(a0, a1);
        } else {
            return (Boolean)0;
        }
    }
    void fakeQD_Pt2Rect(Point a0, Point a1, Rect * a2)
    {
        initializeIfNeeded();
        if (m_Pt2RectFunc) {
            m_Pt2RectFunc(a0, a1, a2);
        }
    }
    void fakeQD_PtToAngle(const Rect * a0, Point a1, short * a2)
    {
        initializeIfNeeded();
        if (m_PtToAngleFunc) {
            m_PtToAngleFunc(a0, a1, a2);
        }
    }
    void fakeQD_SubPt(Point a0, Point * a1)
    {
        initializeIfNeeded();
        if (m_SubPtFunc) {
            m_SubPtFunc(a0, a1);
        }
    }
    Boolean fakeQD_PtInRgn(Point a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_PtInRgnFunc) {
            return m_PtInRgnFunc(a0, a1);
        } else {
            return (Boolean)0;
        }
    }
    void fakeQD_StdLine(Point a0)
    {
        initializeIfNeeded();
        if (m_StdLineFunc) {
            m_StdLineFunc(a0);
        }
    }
    PixMapHandle fakeQD_NewPixMap()
    {
        initializeIfNeeded();
        if (m_NewPixMapFunc) {
            return m_NewPixMapFunc();
        } else {
            return (PixMapHandle)0;
        }
    }
    void fakeQD_DisposePixMap(PixMapHandle a0)
    {
        initializeIfNeeded();
        if (m_DisposePixMapFunc) {
            m_DisposePixMapFunc(a0);
        }
    }
    void fakeQD_CopyPixMap(PixMapHandle a0, PixMapHandle a1)
    {
        initializeIfNeeded();
        if (m_CopyPixMapFunc) {
            m_CopyPixMapFunc(a0, a1);
        }
    }
    PixPatHandle fakeQD_NewPixPat()
    {
        initializeIfNeeded();
        if (m_NewPixPatFunc) {
            return m_NewPixPatFunc();
        } else {
            return (PixPatHandle)0;
        }
    }
    void fakeQD_DisposePixPat(PixPatHandle a0)
    {
        initializeIfNeeded();
        if (m_DisposePixPatFunc) {
            m_DisposePixPatFunc(a0);
        }
    }
    void fakeQD_CopyPixPat(PixPatHandle a0, PixPatHandle a1)
    {
        initializeIfNeeded();
        if (m_CopyPixPatFunc) {
            m_CopyPixPatFunc(a0, a1);
        }
    }
    void fakeQD_PenPixPat(PixPatHandle a0)
    {
        initializeIfNeeded();
        if (m_PenPixPatFunc) {
            m_PenPixPatFunc(a0);
        }
    }
    void fakeQD_BackPixPat(PixPatHandle a0)
    {
        initializeIfNeeded();
        if (m_BackPixPatFunc) {
            m_BackPixPatFunc(a0);
        }
    }
    PixPatHandle fakeQD_GetPixPat(short a0)
    {
        initializeIfNeeded();
        if (m_GetPixPatFunc) {
            return m_GetPixPatFunc(a0);
        } else {
            return (PixPatHandle)0;
        }
    }
    void fakeQD_MakeRGBPat(PixPatHandle a0, const RGBColor * a1)
    {
        initializeIfNeeded();
        if (m_MakeRGBPatFunc) {
            m_MakeRGBPatFunc(a0, a1);
        }
    }
    void fakeQD_FillCRect(const Rect * a0, PixPatHandle a1)
    {
        initializeIfNeeded();
        if (m_FillCRectFunc) {
            m_FillCRectFunc(a0, a1);
        }
    }
    void fakeQD_FillCOval(const Rect * a0, PixPatHandle a1)
    {
        initializeIfNeeded();
        if (m_FillCOvalFunc) {
            m_FillCOvalFunc(a0, a1);
        }
    }
    void fakeQD_FillCRoundRect(const Rect * a0, short a1, short a2, PixPatHandle a3)
    {
        initializeIfNeeded();
        if (m_FillCRoundRectFunc) {
            m_FillCRoundRectFunc(a0, a1, a2, a3);
        }
    }
    void fakeQD_FillCArc(const Rect * a0, short a1, short a2, PixPatHandle a3)
    {
        initializeIfNeeded();
        if (m_FillCArcFunc) {
            m_FillCArcFunc(a0, a1, a2, a3);
        }
    }
    void fakeQD_FillCRgn(RgnHandle a0, PixPatHandle a1)
    {
        initializeIfNeeded();
        if (m_FillCRgnFunc) {
            m_FillCRgnFunc(a0, a1);
        }
    }
    void fakeQD_FillCPoly(PolyHandle a0, PixPatHandle a1)
    {
        initializeIfNeeded();
        if (m_FillCPolyFunc) {
            m_FillCPolyFunc(a0, a1);
        }
    }
    void fakeQD_RGBForeColor(const RGBColor * a0)
    {
        initializeIfNeeded();
        if (m_RGBForeColorFunc) {
            m_RGBForeColorFunc(a0);
        }
    }
    void fakeQD_RGBBackColor(const RGBColor * a0)
    {
        initializeIfNeeded();
        if (m_RGBBackColorFunc) {
            m_RGBBackColorFunc(a0);
        }
    }
    void fakeQD_SetCPixel(short a0, short a1, const RGBColor * a2)
    {
        initializeIfNeeded();
        if (m_SetCPixelFunc) {
            m_SetCPixelFunc(a0, a1, a2);
        }
    }
    void fakeQD_SetPortPix(PixMapHandle a0)
    {
        initializeIfNeeded();
        if (m_SetPortPixFunc) {
            m_SetPortPixFunc(a0);
        }
    }
    void fakeQD_GetCPixel(short a0, short a1, RGBColor * a2)
    {
        initializeIfNeeded();
        if (m_GetCPixelFunc) {
            m_GetCPixelFunc(a0, a1, a2);
        }
    }
    void fakeQD_GetForeColor(RGBColor * a0)
    {
        initializeIfNeeded();
        if (m_GetForeColorFunc) {
            m_GetForeColorFunc(a0);
        }
    }
    void fakeQD_GetBackColor(RGBColor * a0)
    {
        initializeIfNeeded();
        if (m_GetBackColorFunc) {
            m_GetBackColorFunc(a0);
        }
    }
    void fakeQD_SeedCFill(const BitMap * a0, const BitMap * a1, const Rect * a2, const Rect * a3, short a4, short a5, ColorSearchUPP a6, long a7)
    {
        initializeIfNeeded();
        if (m_SeedCFillFunc) {
            m_SeedCFillFunc(a0, a1, a2, a3, a4, a5, a6, a7);
        }
    }
    void fakeQD_CalcCMask(const BitMap * a0, const BitMap * a1, const Rect * a2, const Rect * a3, const RGBColor * a4, ColorSearchUPP a5, long a6)
    {
        initializeIfNeeded();
        if (m_CalcCMaskFunc) {
            m_CalcCMaskFunc(a0, a1, a2, a3, a4, a5, a6);
        }
    }
    PicHandle fakeQD_OpenCPicture(const OpenCPicParams * a0)
    {
        initializeIfNeeded();
        if (m_OpenCPictureFunc) {
            return m_OpenCPictureFunc(a0);
        } else {
            return (PicHandle)0;
        }
    }
    void fakeQD_OpColor(const RGBColor * a0)
    {
        initializeIfNeeded();
        if (m_OpColorFunc) {
            m_OpColorFunc(a0);
        }
    }
    void fakeQD_HiliteColor(const RGBColor * a0)
    {
        initializeIfNeeded();
        if (m_HiliteColorFunc) {
            m_HiliteColorFunc(a0);
        }
    }
    void fakeQD_DisposeCTable(CTabHandle a0)
    {
        initializeIfNeeded();
        if (m_DisposeCTableFunc) {
            m_DisposeCTableFunc(a0);
        }
    }
    CTabHandle fakeQD_GetCTable(short a0)
    {
        initializeIfNeeded();
        if (m_GetCTableFunc) {
            return m_GetCTableFunc(a0);
        } else {
            return (CTabHandle)0;
        }
    }
    void fakeQD_AllocCursor()
    {
        initializeIfNeeded();
        if (m_AllocCursorFunc) {
            m_AllocCursorFunc();
        }
    }
    void fakeQD_SetStdCProcs(CQDProcs * a0)
    {
        initializeIfNeeded();
        if (m_SetStdCProcsFunc) {
            m_SetStdCProcsFunc(a0);
        }
    }
    GDHandle fakeQD_GetMaxDevice(const Rect * a0)
    {
        initializeIfNeeded();
        if (m_GetMaxDeviceFunc) {
            return m_GetMaxDeviceFunc(a0);
        } else {
            return (GDHandle)0;
        }
    }
    long fakeQD_GetCTSeed()
    {
        initializeIfNeeded();
        if (m_GetCTSeedFunc) {
            return m_GetCTSeedFunc();
        } else {
            return (long)0;
        }
    }
    GDHandle fakeQD_GetDeviceList()
    {
        initializeIfNeeded();
        if (m_GetDeviceListFunc) {
            return m_GetDeviceListFunc();
        } else {
            return (GDHandle)0;
        }
    }
    GDHandle fakeQD_GetMainDevice()
    {
        initializeIfNeeded();
        if (m_GetMainDeviceFunc) {
            return m_GetMainDeviceFunc();
        } else {
            return (GDHandle)0;
        }
    }
    GDHandle fakeQD_GetNextDevice(GDHandle a0)
    {
        initializeIfNeeded();
        if (m_GetNextDeviceFunc) {
            return m_GetNextDeviceFunc(a0);
        } else {
            return (GDHandle)0;
        }
    }
    Boolean fakeQD_TestDeviceAttribute(GDHandle a0, short a1)
    {
        initializeIfNeeded();
        if (m_TestDeviceAttributeFunc) {
            return m_TestDeviceAttributeFunc(a0, a1);
        } else {
            return (Boolean)0;
        }
    }
    void fakeQD_SetDeviceAttribute(GDHandle a0, short a1, Boolean a2)
    {
        initializeIfNeeded();
        if (m_SetDeviceAttributeFunc) {
            m_SetDeviceAttributeFunc(a0, a1, a2);
        }
    }
    void fakeQD_InitGDevice(short a0, long a1, GDHandle a2)
    {
        initializeIfNeeded();
        if (m_InitGDeviceFunc) {
            m_InitGDeviceFunc(a0, a1, a2);
        }
    }
    GDHandle fakeQD_NewGDevice(short a0, long a1)
    {
        initializeIfNeeded();
        if (m_NewGDeviceFunc) {
            return m_NewGDeviceFunc(a0, a1);
        } else {
            return (GDHandle)0;
        }
    }
    void fakeQD_DisposeGDevice(GDHandle a0)
    {
        initializeIfNeeded();
        if (m_DisposeGDeviceFunc) {
            m_DisposeGDeviceFunc(a0);
        }
    }
    void fakeQD_SetGDevice(GDHandle a0)
    {
        initializeIfNeeded();
        if (m_SetGDeviceFunc) {
            m_SetGDeviceFunc(a0);
        }
    }
    GDHandle fakeQD_GetGDevice()
    {
        initializeIfNeeded();
        if (m_GetGDeviceFunc) {
            return m_GetGDeviceFunc();
        } else {
            return (GDHandle)0;
        }
    }
    long fakeQD_Color2Index(const RGBColor * a0)
    {
        initializeIfNeeded();
        if (m_Color2IndexFunc) {
            return m_Color2IndexFunc(a0);
        } else {
            return (long)0;
        }
    }
    void fakeQD_Index2Color(long a0, RGBColor * a1)
    {
        initializeIfNeeded();
        if (m_Index2ColorFunc) {
            m_Index2ColorFunc(a0, a1);
        }
    }
    void fakeQD_InvertColor(RGBColor * a0)
    {
        initializeIfNeeded();
        if (m_InvertColorFunc) {
            m_InvertColorFunc(a0);
        }
    }
    Boolean fakeQD_RealColor(const RGBColor * a0)
    {
        initializeIfNeeded();
        if (m_RealColorFunc) {
            return m_RealColorFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    void fakeQD_GetSubTable(CTabHandle a0, short a1, CTabHandle a2)
    {
        initializeIfNeeded();
        if (m_GetSubTableFunc) {
            m_GetSubTableFunc(a0, a1, a2);
        }
    }
    void fakeQD_AddSearch(ColorSearchUPP a0)
    {
        initializeIfNeeded();
        if (m_AddSearchFunc) {
            m_AddSearchFunc(a0);
        }
    }
    void fakeQD_AddComp(ColorComplementUPP a0)
    {
        initializeIfNeeded();
        if (m_AddCompFunc) {
            m_AddCompFunc(a0);
        }
    }
    void fakeQD_DelSearch(ColorSearchUPP a0)
    {
        initializeIfNeeded();
        if (m_DelSearchFunc) {
            m_DelSearchFunc(a0);
        }
    }
    void fakeQD_DelComp(ColorComplementUPP a0)
    {
        initializeIfNeeded();
        if (m_DelCompFunc) {
            m_DelCompFunc(a0);
        }
    }
    void fakeQD_SetClientID(short a0)
    {
        initializeIfNeeded();
        if (m_SetClientIDFunc) {
            m_SetClientIDFunc(a0);
        }
    }
    void fakeQD_ProtectEntry(short a0, Boolean a1)
    {
        initializeIfNeeded();
        if (m_ProtectEntryFunc) {
            m_ProtectEntryFunc(a0, a1);
        }
    }
    void fakeQD_ReserveEntry(short a0, Boolean a1)
    {
        initializeIfNeeded();
        if (m_ReserveEntryFunc) {
            m_ReserveEntryFunc(a0, a1);
        }
    }
    void fakeQD_SetEntries(short a0, short a1, CSpecArray a2)
    {
        initializeIfNeeded();
        if (m_SetEntriesFunc) {
            m_SetEntriesFunc(a0, a1, a2);
        }
    }
    short fakeQD_QDError()
    {
        initializeIfNeeded();
        if (m_QDErrorFunc) {
            return m_QDErrorFunc();
        } else {
            return (short)0;
        }
    }
    void fakeQD_CopyDeepMask(const BitMap * a0, const BitMap * a1, const BitMap * a2, const Rect * a3, const Rect * a4, const Rect * a5, short a6, RgnHandle a7)
    {
        initializeIfNeeded();
        if (m_CopyDeepMaskFunc) {
            m_CopyDeepMaskFunc(a0, a1, a2, a3, a4, a5, a6, a7);
        }
    }
    Ptr fakeQD_GetMaskTable()
    {
        initializeIfNeeded();
        if (m_GetMaskTableFunc) {
            return m_GetMaskTableFunc();
        } else {
            return (Ptr)0;
        }
    }
    PatHandle fakeQD_GetPattern(short a0)
    {
        initializeIfNeeded();
        if (m_GetPatternFunc) {
            return m_GetPatternFunc(a0);
        } else {
            return (PatHandle)0;
        }
    }
    PicHandle fakeQD_GetPicture(short a0)
    {
        initializeIfNeeded();
        if (m_GetPictureFunc) {
            return m_GetPictureFunc(a0);
        } else {
            return (PicHandle)0;
        }
    }
    long fakeQD_DeltaPoint(Point a0, Point a1)
    {
        initializeIfNeeded();
        if (m_DeltaPointFunc) {
            return m_DeltaPointFunc(a0, a1);
        } else {
            return (long)0;
        }
    }
    void fakeQD_ShieldCursor(const Rect * a0, Point a1)
    {
        initializeIfNeeded();
        if (m_ShieldCursorFunc) {
            m_ShieldCursorFunc(a0, a1);
        }
    }
    void fakeQD_ScreenRes(short * a0, short * a1)
    {
        initializeIfNeeded();
        if (m_ScreenResFunc) {
            m_ScreenResFunc(a0, a1);
        }
    }
    void fakeQD_GetIndPattern(Pattern * a0, short a1, short a2)
    {
        initializeIfNeeded();
        if (m_GetIndPatternFunc) {
            m_GetIndPatternFunc(a0, a1, a2);
        }
    }
    long fakeQD_deltapoint(Point * a0, Point * a1)
    {
        initializeIfNeeded();
        if (m_deltapointFunc) {
            return m_deltapointFunc(a0, a1);
        } else {
            return (long)0;
        }
    }
    void fakeQD_PackBits(Ptr * a0, Ptr * a1, short a2)
    {
        initializeIfNeeded();
        if (m_PackBitsFunc) {
            m_PackBitsFunc(a0, a1, a2);
        }
    }
    void fakeQD_UnpackBits(Ptr * a0, Ptr * a1, short a2)
    {
        initializeIfNeeded();
        if (m_UnpackBitsFunc) {
            m_UnpackBitsFunc(a0, a1, a2);
        }
    }
    Fixed fakeQD_SlopeFromAngle(short a0)
    {
        initializeIfNeeded();
        if (m_SlopeFromAngleFunc) {
            return m_SlopeFromAngleFunc(a0);
        } else {
            return (Fixed)0;
        }
    }
    short fakeQD_AngleFromSlope(Fixed a0)
    {
        initializeIfNeeded();
        if (m_AngleFromSlopeFunc) {
            return m_AngleFromSlopeFunc(a0);
        } else {
            return (short)0;
        }
    }
    OSErr fakeQD_OpenCursorComponent(Component a0, ComponentInstance * a1)
    {
        initializeIfNeeded();
        if (m_OpenCursorComponentFunc) {
            return m_OpenCursorComponentFunc(a0, a1);
        } else {
            return (OSErr)0;
        }
    }
    OSErr fakeQD_CloseCursorComponent(ComponentInstance a0)
    {
        initializeIfNeeded();
        if (m_CloseCursorComponentFunc) {
            return m_CloseCursorComponentFunc(a0);
        } else {
            return (OSErr)0;
        }
    }
    OSErr fakeQD_SetCursorComponent(ComponentInstance a0)
    {
        initializeIfNeeded();
        if (m_SetCursorComponentFunc) {
            return m_SetCursorComponentFunc(a0);
        } else {
            return (OSErr)0;
        }
    }
    OSErr fakeQD_CursorComponentChanged(ComponentInstance a0)
    {
        initializeIfNeeded();
        if (m_CursorComponentChangedFunc) {
            return m_CursorComponentChangedFunc(a0);
        } else {
            return (OSErr)0;
        }
    }
    OSErr fakeQD_CursorComponentSetData(ComponentInstance a0, long a1)
    {
        initializeIfNeeded();
        if (m_CursorComponentSetDataFunc) {
            return m_CursorComponentSetDataFunc(a0, a1);
        } else {
            return (OSErr)0;
        }
    }
    CMError fakeQD_CWMatchPixMap(CMWorldRef a0, PixMap * a1, CMBitmapCallBackUPP a2, void * a3)
    {
        initializeIfNeeded();
        if (m_CWMatchPixMapFunc) {
            return m_CWMatchPixMapFunc(a0, a1, a2, a3);
        } else {
            return (CMError)0;
        }
    }
    CMError fakeQD_CWCheckPixMap(CMWorldRef a0, PixMap * a1, CMBitmapCallBackUPP a2, void * a3, BitMap * a4)
    {
        initializeIfNeeded();
        if (m_CWCheckPixMapFunc) {
            return m_CWCheckPixMapFunc(a0, a1, a2, a3, a4);
        } else {
            return (CMError)0;
        }
    }
    CMError fakeQD_NCMBeginMatching(CMProfileRef a0, CMProfileRef a1, CMMatchRef * a2)
    {
        initializeIfNeeded();
        if (m_NCMBeginMatchingFunc) {
            return m_NCMBeginMatchingFunc(a0, a1, a2);
        } else {
            return (CMError)0;
        }
    }
    void fakeQD_CMEndMatching(CMMatchRef a0)
    {
        initializeIfNeeded();
        if (m_CMEndMatchingFunc) {
            m_CMEndMatchingFunc(a0);
        }
    }
    void fakeQD_NCMDrawMatchedPicture(PicHandle a0, CMProfileRef a1, Rect * a2)
    {
        initializeIfNeeded();
        if (m_NCMDrawMatchedPictureFunc) {
            m_NCMDrawMatchedPictureFunc(a0, a1, a2);
        }
    }
    void fakeQD_CMEnableMatchingComment(Boolean a0)
    {
        initializeIfNeeded();
        if (m_CMEnableMatchingCommentFunc) {
            m_CMEnableMatchingCommentFunc(a0);
        }
    }
    CMError fakeQD_NCMUseProfileComment(CMProfileRef a0, UInt32 a1)
    {
        initializeIfNeeded();
        if (m_NCMUseProfileCommentFunc) {
            return m_NCMUseProfileCommentFunc(a0, a1);
        } else {
            return (CMError)0;
        }
    }
    Boolean fakeQD_IsValidPort(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_IsValidPortFunc) {
            return m_IsValidPortFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    Boolean fakeQD_IsValidRgnHandle(RgnHandle a0)
    {
        initializeIfNeeded();
        if (m_IsValidRgnHandleFunc) {
            return m_IsValidRgnHandleFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    PixMapHandle fakeQD_GetPortPixMap(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_GetPortPixMapFunc) {
            return m_GetPortPixMapFunc(a0);
        } else {
            return (PixMapHandle)0;
        }
    }
    const BitMap * fakeQD_GetPortBitMapForCopyBits(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_GetPortBitMapForCopyBitsFunc) {
            return m_GetPortBitMapForCopyBitsFunc(a0);
        } else {
            return (const BitMap *)0;
        }
    }
    Rect * fakeQD_GetPortBounds(CGrafPtr a0, Rect * a1)
    {
        initializeIfNeeded();
        if (m_GetPortBoundsFunc) {
            return m_GetPortBoundsFunc(a0, a1);
        } else {
            return (Rect *)0;
        }
    }
    RGBColor * fakeQD_GetPortForeColor(CGrafPtr a0, RGBColor * a1)
    {
        initializeIfNeeded();
        if (m_GetPortForeColorFunc) {
            return m_GetPortForeColorFunc(a0, a1);
        } else {
            return (RGBColor *)0;
        }
    }
    RGBColor * fakeQD_GetPortBackColor(CGrafPtr a0, RGBColor * a1)
    {
        initializeIfNeeded();
        if (m_GetPortBackColorFunc) {
            return m_GetPortBackColorFunc(a0, a1);
        } else {
            return (RGBColor *)0;
        }
    }
    RGBColor * fakeQD_GetPortOpColor(CGrafPtr a0, RGBColor * a1)
    {
        initializeIfNeeded();
        if (m_GetPortOpColorFunc) {
            return m_GetPortOpColorFunc(a0, a1);
        } else {
            return (RGBColor *)0;
        }
    }
    RGBColor * fakeQD_GetPortHiliteColor(CGrafPtr a0, RGBColor * a1)
    {
        initializeIfNeeded();
        if (m_GetPortHiliteColorFunc) {
            return m_GetPortHiliteColorFunc(a0, a1);
        } else {
            return (RGBColor *)0;
        }
    }
    CQDProcsPtr fakeQD_GetPortGrafProcs(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_GetPortGrafProcsFunc) {
            return m_GetPortGrafProcsFunc(a0);
        } else {
            return (CQDProcsPtr)0;
        }
    }
    short fakeQD_GetPortTextFont(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_GetPortTextFontFunc) {
            return m_GetPortTextFontFunc(a0);
        } else {
            return (short)0;
        }
    }
    Style fakeQD_GetPortTextFace(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_GetPortTextFaceFunc) {
            return m_GetPortTextFaceFunc(a0);
        } else {
            return (Style)0;
        }
    }
    short fakeQD_GetPortTextMode(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_GetPortTextModeFunc) {
            return m_GetPortTextModeFunc(a0);
        } else {
            return (short)0;
        }
    }
    short fakeQD_GetPortTextSize(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_GetPortTextSizeFunc) {
            return m_GetPortTextSizeFunc(a0);
        } else {
            return (short)0;
        }
    }
    short fakeQD_GetPortChExtra(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_GetPortChExtraFunc) {
            return m_GetPortChExtraFunc(a0);
        } else {
            return (short)0;
        }
    }
    short fakeQD_GetPortFracHPenLocation(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_GetPortFracHPenLocationFunc) {
            return m_GetPortFracHPenLocationFunc(a0);
        } else {
            return (short)0;
        }
    }
    Fixed fakeQD_GetPortSpExtra(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_GetPortSpExtraFunc) {
            return m_GetPortSpExtraFunc(a0);
        } else {
            return (Fixed)0;
        }
    }
    short fakeQD_GetPortPenVisibility(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_GetPortPenVisibilityFunc) {
            return m_GetPortPenVisibilityFunc(a0);
        } else {
            return (short)0;
        }
    }
    RgnHandle fakeQD_GetPortVisibleRegion(CGrafPtr a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_GetPortVisibleRegionFunc) {
            return m_GetPortVisibleRegionFunc(a0, a1);
        } else {
            return (RgnHandle)0;
        }
    }
    RgnHandle fakeQD_GetPortClipRegion(CGrafPtr a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_GetPortClipRegionFunc) {
            return m_GetPortClipRegionFunc(a0, a1);
        } else {
            return (RgnHandle)0;
        }
    }
    PixPatHandle fakeQD_GetPortBackPixPat(CGrafPtr a0, PixPatHandle a1)
    {
        initializeIfNeeded();
        if (m_GetPortBackPixPatFunc) {
            return m_GetPortBackPixPatFunc(a0, a1);
        } else {
            return (PixPatHandle)0;
        }
    }
    PixPatHandle fakeQD_GetPortPenPixPat(CGrafPtr a0, PixPatHandle a1)
    {
        initializeIfNeeded();
        if (m_GetPortPenPixPatFunc) {
            return m_GetPortPenPixPatFunc(a0, a1);
        } else {
            return (PixPatHandle)0;
        }
    }
    PixPatHandle fakeQD_GetPortFillPixPat(CGrafPtr a0, PixPatHandle a1)
    {
        initializeIfNeeded();
        if (m_GetPortFillPixPatFunc) {
            return m_GetPortFillPixPatFunc(a0, a1);
        } else {
            return (PixPatHandle)0;
        }
    }
    Point * fakeQD_GetPortPenSize(CGrafPtr a0, Point * a1)
    {
        initializeIfNeeded();
        if (m_GetPortPenSizeFunc) {
            return m_GetPortPenSizeFunc(a0, a1);
        } else {
            return (Point *)0;
        }
    }
    SInt32 fakeQD_GetPortPenMode(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_GetPortPenModeFunc) {
            return m_GetPortPenModeFunc(a0);
        } else {
            return (SInt32)0;
        }
    }
    Point * fakeQD_GetPortPenLocation(CGrafPtr a0, Point * a1)
    {
        initializeIfNeeded();
        if (m_GetPortPenLocationFunc) {
            return m_GetPortPenLocationFunc(a0, a1);
        } else {
            return (Point *)0;
        }
    }
    Boolean fakeQD_IsPortRegionBeingDefined(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_IsPortRegionBeingDefinedFunc) {
            return m_IsPortRegionBeingDefinedFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    Boolean fakeQD_IsPortPictureBeingDefined(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_IsPortPictureBeingDefinedFunc) {
            return m_IsPortPictureBeingDefinedFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    Boolean fakeQD_IsPortPolyBeingDefined(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_IsPortPolyBeingDefinedFunc) {
            return m_IsPortPolyBeingDefinedFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    Boolean fakeQD_IsPortOffscreen(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_IsPortOffscreenFunc) {
            return m_IsPortOffscreenFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    Boolean fakeQD_IsPortColor(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_IsPortColorFunc) {
            return m_IsPortColorFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    Boolean fakeQD_IsPortVisibleRegionEmpty(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_IsPortVisibleRegionEmptyFunc) {
            return m_IsPortVisibleRegionEmptyFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    Boolean fakeQD_IsPortClipRegionEmpty(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_IsPortClipRegionEmptyFunc) {
            return m_IsPortClipRegionEmptyFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    void fakeQD_SectRegionWithPortClipRegion(CGrafPtr a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_SectRegionWithPortClipRegionFunc) {
            m_SectRegionWithPortClipRegionFunc(a0, a1);
        }
    }
    void fakeQD_SectRegionWithPortVisibleRegion(CGrafPtr a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_SectRegionWithPortVisibleRegionFunc) {
            m_SectRegionWithPortVisibleRegionFunc(a0, a1);
        }
    }
    Handle fakeQD_SwapPortPicSaveHandle(CGrafPtr a0, Handle a1)
    {
        initializeIfNeeded();
        if (m_SwapPortPicSaveHandleFunc) {
            return m_SwapPortPicSaveHandleFunc(a0, a1);
        } else {
            return (Handle)0;
        }
    }
    Handle fakeQD_SwapPortPolySaveHandle(CGrafPtr a0, Handle a1)
    {
        initializeIfNeeded();
        if (m_SwapPortPolySaveHandleFunc) {
            return m_SwapPortPolySaveHandleFunc(a0, a1);
        } else {
            return (Handle)0;
        }
    }
    Handle fakeQD_SwapPortRegionSaveHandle(CGrafPtr a0, Handle a1)
    {
        initializeIfNeeded();
        if (m_SwapPortRegionSaveHandleFunc) {
            return m_SwapPortRegionSaveHandleFunc(a0, a1);
        } else {
            return (Handle)0;
        }
    }
    void fakeQD_SetPortBounds(CGrafPtr a0, const Rect * a1)
    {
        initializeIfNeeded();
        if (m_SetPortBoundsFunc) {
            m_SetPortBoundsFunc(a0, a1);
        }
    }
    void fakeQD_SetPortOpColor(CGrafPtr a0, const RGBColor * a1)
    {
        initializeIfNeeded();
        if (m_SetPortOpColorFunc) {
            m_SetPortOpColorFunc(a0, a1);
        }
    }
    void fakeQD_SetPortGrafProcs(CGrafPtr a0, CQDProcsPtr a1)
    {
        initializeIfNeeded();
        if (m_SetPortGrafProcsFunc) {
            m_SetPortGrafProcsFunc(a0, a1);
        }
    }
    void fakeQD_SetPortTextFont(CGrafPtr a0, short a1)
    {
        initializeIfNeeded();
        if (m_SetPortTextFontFunc) {
            m_SetPortTextFontFunc(a0, a1);
        }
    }
    void fakeQD_SetPortTextSize(CGrafPtr a0, short a1)
    {
        initializeIfNeeded();
        if (m_SetPortTextSizeFunc) {
            m_SetPortTextSizeFunc(a0, a1);
        }
    }
    void fakeQD_SetPortTextFace(CGrafPtr a0, StyleParameter a1)
    {
        initializeIfNeeded();
        if (m_SetPortTextFaceFunc) {
            m_SetPortTextFaceFunc(a0, a1);
        }
    }
    void fakeQD_SetPortTextMode(CGrafPtr a0, short a1)
    {
        initializeIfNeeded();
        if (m_SetPortTextModeFunc) {
            m_SetPortTextModeFunc(a0, a1);
        }
    }
    void fakeQD_SetPortVisibleRegion(CGrafPtr a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_SetPortVisibleRegionFunc) {
            m_SetPortVisibleRegionFunc(a0, a1);
        }
    }
    void fakeQD_SetPortClipRegion(CGrafPtr a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_SetPortClipRegionFunc) {
            m_SetPortClipRegionFunc(a0, a1);
        }
    }
    void fakeQD_SetPortPenPixPat(CGrafPtr a0, PixPatHandle a1)
    {
        initializeIfNeeded();
        if (m_SetPortPenPixPatFunc) {
            m_SetPortPenPixPatFunc(a0, a1);
        }
    }
    void fakeQD_SetPortFillPixPat(CGrafPtr a0, PixPatHandle a1)
    {
        initializeIfNeeded();
        if (m_SetPortFillPixPatFunc) {
            m_SetPortFillPixPatFunc(a0, a1);
        }
    }
    void fakeQD_SetPortBackPixPat(CGrafPtr a0, PixPatHandle a1)
    {
        initializeIfNeeded();
        if (m_SetPortBackPixPatFunc) {
            m_SetPortBackPixPatFunc(a0, a1);
        }
    }
    void fakeQD_SetPortPenSize(CGrafPtr a0, Point a1)
    {
        initializeIfNeeded();
        if (m_SetPortPenSizeFunc) {
            m_SetPortPenSizeFunc(a0, a1);
        }
    }
    void fakeQD_SetPortPenMode(CGrafPtr a0, SInt32 a1)
    {
        initializeIfNeeded();
        if (m_SetPortPenModeFunc) {
            m_SetPortPenModeFunc(a0, a1);
        }
    }
    void fakeQD_SetPortFracHPenLocation(CGrafPtr a0, short a1)
    {
        initializeIfNeeded();
        if (m_SetPortFracHPenLocationFunc) {
            m_SetPortFracHPenLocationFunc(a0, a1);
        }
    }
    Rect * fakeQD_GetPixBounds(PixMapHandle a0, Rect * a1)
    {
        initializeIfNeeded();
        if (m_GetPixBoundsFunc) {
            return m_GetPixBoundsFunc(a0, a1);
        } else {
            return (Rect *)0;
        }
    }
    short fakeQD_GetPixDepth(PixMapHandle a0)
    {
        initializeIfNeeded();
        if (m_GetPixDepthFunc) {
            return m_GetPixDepthFunc(a0);
        } else {
            return (short)0;
        }
    }
    long fakeQD_GetQDGlobalsRandomSeed()
    {
        initializeIfNeeded();
        if (m_GetQDGlobalsRandomSeedFunc) {
            return m_GetQDGlobalsRandomSeedFunc();
        } else {
            return (long)0;
        }
    }
    BitMap * fakeQD_GetQDGlobalsScreenBits(BitMap * a0)
    {
        initializeIfNeeded();
        if (m_GetQDGlobalsScreenBitsFunc) {
            return m_GetQDGlobalsScreenBitsFunc(a0);
        } else {
            return (BitMap *)0;
        }
    }
    Pattern * fakeQD_GetQDGlobalsDarkGray(Pattern * a0)
    {
        initializeIfNeeded();
        if (m_GetQDGlobalsDarkGrayFunc) {
            return m_GetQDGlobalsDarkGrayFunc(a0);
        } else {
            return (Pattern *)0;
        }
    }
    Pattern * fakeQD_GetQDGlobalsLightGray(Pattern * a0)
    {
        initializeIfNeeded();
        if (m_GetQDGlobalsLightGrayFunc) {
            return m_GetQDGlobalsLightGrayFunc(a0);
        } else {
            return (Pattern *)0;
        }
    }
    Pattern * fakeQD_GetQDGlobalsGray(Pattern * a0)
    {
        initializeIfNeeded();
        if (m_GetQDGlobalsGrayFunc) {
            return m_GetQDGlobalsGrayFunc(a0);
        } else {
            return (Pattern *)0;
        }
    }
    Pattern * fakeQD_GetQDGlobalsBlack(Pattern * a0)
    {
        initializeIfNeeded();
        if (m_GetQDGlobalsBlackFunc) {
            return m_GetQDGlobalsBlackFunc(a0);
        } else {
            return (Pattern *)0;
        }
    }
    Pattern * fakeQD_GetQDGlobalsWhite(Pattern * a0)
    {
        initializeIfNeeded();
        if (m_GetQDGlobalsWhiteFunc) {
            return m_GetQDGlobalsWhiteFunc(a0);
        } else {
            return (Pattern *)0;
        }
    }
    CGrafPtr fakeQD_GetQDGlobalsThePort()
    {
        initializeIfNeeded();
        if (m_GetQDGlobalsThePortFunc) {
            return m_GetQDGlobalsThePortFunc();
        } else {
            return (CGrafPtr)0;
        }
    }
    void fakeQD_SetQDGlobalsRandomSeed(long a0)
    {
        initializeIfNeeded();
        if (m_SetQDGlobalsRandomSeedFunc) {
            m_SetQDGlobalsRandomSeedFunc(a0);
        }
    }
    Rect * fakeQD_GetRegionBounds(RgnHandle a0, Rect * a1)
    {
        initializeIfNeeded();
        if (m_GetRegionBoundsFunc) {
            return m_GetRegionBoundsFunc(a0, a1);
        } else {
            return (Rect *)0;
        }
    }
    Boolean fakeQD_IsRegionRectangular(RgnHandle a0)
    {
        initializeIfNeeded();
        if (m_IsRegionRectangularFunc) {
            return m_IsRegionRectangularFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    CGrafPtr fakeQD_CreateNewPort()
    {
        initializeIfNeeded();
        if (m_CreateNewPortFunc) {
            return m_CreateNewPortFunc();
        } else {
            return (CGrafPtr)0;
        }
    }
    void fakeQD_DisposePort(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_DisposePortFunc) {
            m_DisposePortFunc(a0);
        }
    }
    void fakeQD_SetQDError(OSErr a0)
    {
        initializeIfNeeded();
        if (m_SetQDErrorFunc) {
            m_SetQDErrorFunc(a0);
        }
    }
    Point * fakeQD_QDLocalToGlobalPoint(CGrafPtr a0, Point * a1)
    {
        initializeIfNeeded();
        if (m_QDLocalToGlobalPointFunc) {
            return m_QDLocalToGlobalPointFunc(a0, a1);
        } else {
            return (Point *)0;
        }
    }
    Point * fakeQD_QDGlobalToLocalPoint(CGrafPtr a0, Point * a1)
    {
        initializeIfNeeded();
        if (m_QDGlobalToLocalPointFunc) {
            return m_QDGlobalToLocalPointFunc(a0, a1);
        } else {
            return (Point *)0;
        }
    }
    Rect * fakeQD_QDLocalToGlobalRect(CGrafPtr a0, Rect * a1)
    {
        initializeIfNeeded();
        if (m_QDLocalToGlobalRectFunc) {
            return m_QDLocalToGlobalRectFunc(a0, a1);
        } else {
            return (Rect *)0;
        }
    }
    Rect * fakeQD_QDGlobalToLocalRect(CGrafPtr a0, Rect * a1)
    {
        initializeIfNeeded();
        if (m_QDGlobalToLocalRectFunc) {
            return m_QDGlobalToLocalRectFunc(a0, a1);
        } else {
            return (Rect *)0;
        }
    }
    RgnHandle fakeQD_QDLocalToGlobalRegion(CGrafPtr a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_QDLocalToGlobalRegionFunc) {
            return m_QDLocalToGlobalRegionFunc(a0, a1);
        } else {
            return (RgnHandle)0;
        }
    }
    RgnHandle fakeQD_QDGlobalToLocalRegion(CGrafPtr a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_QDGlobalToLocalRegionFunc) {
            return m_QDGlobalToLocalRegionFunc(a0, a1);
        } else {
            return (RgnHandle)0;
        }
    }
    Boolean fakeQD_QDIsPortBuffered(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_QDIsPortBufferedFunc) {
            return m_QDIsPortBufferedFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    Boolean fakeQD_QDIsPortBufferDirty(CGrafPtr a0)
    {
        initializeIfNeeded();
        if (m_QDIsPortBufferDirtyFunc) {
            return m_QDIsPortBufferDirtyFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    void fakeQD_QDFlushPortBuffer(CGrafPtr a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_QDFlushPortBufferFunc) {
            m_QDFlushPortBufferFunc(a0, a1);
        }
    }
    OSStatus fakeQD_QDGetDirtyRegion(CGrafPtr a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_QDGetDirtyRegionFunc) {
            return m_QDGetDirtyRegionFunc(a0, a1);
        } else {
            return (OSStatus)0;
        }
    }
    OSStatus fakeQD_QDSetDirtyRegion(CGrafPtr a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_QDSetDirtyRegionFunc) {
            return m_QDSetDirtyRegionFunc(a0, a1);
        } else {
            return (OSStatus)0;
        }
    }
    OSStatus fakeQD_QDAddRectToDirtyRegion(CGrafPtr a0, const Rect * a1)
    {
        initializeIfNeeded();
        if (m_QDAddRectToDirtyRegionFunc) {
            return m_QDAddRectToDirtyRegionFunc(a0, a1);
        } else {
            return (OSStatus)0;
        }
    }
    OSStatus fakeQD_QDAddRegionToDirtyRegion(CGrafPtr a0, RgnHandle a1)
    {
        initializeIfNeeded();
        if (m_QDAddRegionToDirtyRegionFunc) {
            return m_QDAddRegionToDirtyRegionFunc(a0, a1);
        } else {
            return (OSStatus)0;
        }
    }
    OSStatus fakeQD_CreateCGContextForPort(CGrafPtr a0, CGContextRef * a1)
    {
        initializeIfNeeded();
        if (m_CreateCGContextForPortFunc) {
            return m_CreateCGContextForPortFunc(a0, a1);
        } else {
            return (OSStatus)0;
        }
    }
    OSStatus fakeQD_ClipCGContextToRegion(CGContextRef a0, const Rect * a1, RgnHandle a2)
    {
        initializeIfNeeded();
        if (m_ClipCGContextToRegionFunc) {
            return m_ClipCGContextToRegionFunc(a0, a1, a2);
        } else {
            return (OSStatus)0;
        }
    }
    OSStatus fakeQD_SyncCGContextOriginWithPort(CGContextRef a0, CGrafPtr a1)
    {
        initializeIfNeeded();
        if (m_SyncCGContextOriginWithPortFunc) {
            return m_SyncCGContextOriginWithPortFunc(a0, a1);
        } else {
            return (OSStatus)0;
        }
    }
    OSStatus fakeQD_QDBeginCGContext(CGrafPtr a0, CGContextRef * a1)
    {
        initializeIfNeeded();
        if (m_QDBeginCGContextFunc) {
            return m_QDBeginCGContextFunc(a0, a1);
        } else {
            return (OSStatus)0;
        }
    }
    OSStatus fakeQD_QDEndCGContext(CGrafPtr a0, CGContextRef * a1)
    {
        initializeIfNeeded();
        if (m_QDEndCGContextFunc) {
            return m_QDEndCGContextFunc(a0, a1);
        } else {
            return (OSStatus)0;
        }
    }
    CGrafPtr fakeQD_CreateNewPortForCGDisplayID(UInt32 a0)
    {
        initializeIfNeeded();
        if (m_CreateNewPortForCGDisplayIDFunc) {
            return m_CreateNewPortForCGDisplayIDFunc(a0);
        } else {
            return (CGrafPtr)0;
        }
    }
    void fakeQD_QDDisplayWaitCursor(Boolean a0)
    {
        initializeIfNeeded();
        if (m_QDDisplayWaitCursorFunc) {
            m_QDDisplayWaitCursorFunc(a0);
        }
    }
    void fakeQD_QDSetPatternOrigin(Point a0)
    {
        initializeIfNeeded();
        if (m_QDSetPatternOriginFunc) {
            m_QDSetPatternOriginFunc(a0);
        }
    }
    void fakeQD_QDGetPatternOrigin(Point * a0)
    {
        initializeIfNeeded();
        if (m_QDGetPatternOriginFunc) {
            m_QDGetPatternOriginFunc(a0);
        }
    }
    Boolean fakeQD_QDIsNamedPixMapCursorRegistered(const char a0)
    {
        initializeIfNeeded();
        if (m_QDIsNamedPixMapCursorRegisteredFunc) {
            return m_QDIsNamedPixMapCursorRegisteredFunc(a0);
        } else {
            return (Boolean)0;
        }
    }
    OSStatus fakeQD_QDRegisterNamedPixMapCursor(PixMapHandle a0, PixMapHandle a1, Point a2, const char a3)
    {
        initializeIfNeeded();
        if (m_QDRegisterNamedPixMapCursorFunc) {
            return m_QDRegisterNamedPixMapCursorFunc(a0, a1, a2, a3);
        } else {
            return (OSStatus)0;
        }
    }
    OSStatus fakeQD_QDUnregisterNamedPixMapCursur(const char a0)
    {
        initializeIfNeeded();
        if (m_QDUnregisterNamedPixMapCursurFunc) {
            return m_QDUnregisterNamedPixMapCursurFunc(a0);
        } else {
            return (OSStatus)0;
        }
    }
    OSStatus fakeQD_QDUnregisterNamedPixMapCursor(const char a0)
    {
        initializeIfNeeded();
        if (m_QDUnregisterNamedPixMapCursorFunc) {
            return m_QDUnregisterNamedPixMapCursorFunc(a0);
        } else {
            return (OSStatus)0;
        }
    }
    OSStatus fakeQD_QDSetNamedPixMapCursor(const char a0)
    {
        initializeIfNeeded();
        if (m_QDSetNamedPixMapCursorFunc) {
            return m_QDSetNamedPixMapCursorFunc(a0);
        } else {
            return (OSStatus)0;
        }
    }
    OSStatus fakeQD_QDSetCursorScale(float a0)
    {
        initializeIfNeeded();
        if (m_QDSetCursorScaleFunc) {
            return m_QDSetCursorScaleFunc(a0);
        } else {
            return (OSStatus)0;
        }
    }
    OSStatus fakeQD_QDGetCursorScale(float * a0)
    {
        initializeIfNeeded();
        if (m_QDGetCursorScaleFunc) {
            return m_QDGetCursorScaleFunc(a0);
        } else {
            return (OSStatus)0;
        }
    }
    OSStatus fakeQD_QDGetCursorData(Boolean a0, PixMapHandle * a1, Point * a2)
    {
        initializeIfNeeded();
        if (m_QDGetCursorDataFunc) {
            return m_QDGetCursorDataFunc(a0, a1, a2);
        } else {
            return (OSStatus)0;
        }
    }
    UInt32 fakeQD_QDSwapTextFlags(UInt32 a0)
    {
        initializeIfNeeded();
        if (m_QDSwapTextFlagsFunc) {
            return m_QDSwapTextFlagsFunc(a0);
        } else {
            return (UInt32)0;
        }
    }
    UInt32 fakeQD_QDSwapPortTextFlags(CGrafPtr a0, UInt32 a1)
    {
        initializeIfNeeded();
        if (m_QDSwapPortTextFlagsFunc) {
            return m_QDSwapPortTextFlagsFunc(a0, a1);
        } else {
            return (UInt32)0;
        }
    }
    CGDirectDisplayID fakeQD_QDGetCGDirectDisplayID(GDHandle a0)
    {
        initializeIfNeeded();
        if (m_QDGetCGDirectDisplayIDFunc) {
            return m_QDGetCGDirectDisplayIDFunc(a0);
        } else {
            return (CGDirectDisplayID)0;
        }
    }
    SInt16 fakeQD_LMGetScrVRes()
    {
        initializeIfNeeded();
        if (m_LMGetScrVResFunc) {
            return m_LMGetScrVResFunc();
        } else {
            return (SInt16)0;
        }
    }
    void fakeQD_LMSetScrVRes(SInt16 a0)
    {
        initializeIfNeeded();
        if (m_LMSetScrVResFunc) {
            m_LMSetScrVResFunc(a0);
        }
    }
    SInt16 fakeQD_LMGetScrHRes()
    {
        initializeIfNeeded();
        if (m_LMGetScrHResFunc) {
            return m_LMGetScrHResFunc();
        } else {
            return (SInt16)0;
        }
    }
    void fakeQD_LMSetScrHRes(SInt16 a0)
    {
        initializeIfNeeded();
        if (m_LMSetScrHResFunc) {
            m_LMSetScrHResFunc(a0);
        }
    }
    GDHandle fakeQD_LMGetMainDevice()
    {
        initializeIfNeeded();
        if (m_LMGetMainDeviceFunc) {
            return m_LMGetMainDeviceFunc();
        } else {
            return (GDHandle)0;
        }
    }
    void fakeQD_LMSetMainDevice(GDHandle a0)
    {
        initializeIfNeeded();
        if (m_LMSetMainDeviceFunc) {
            m_LMSetMainDeviceFunc(a0);
        }
    }
    GDHandle fakeQD_LMGetDeviceList()
    {
        initializeIfNeeded();
        if (m_LMGetDeviceListFunc) {
            return m_LMGetDeviceListFunc();
        } else {
            return (GDHandle)0;
        }
    }
    void fakeQD_LMSetDeviceList(GDHandle a0)
    {
        initializeIfNeeded();
        if (m_LMSetDeviceListFunc) {
            m_LMSetDeviceListFunc(a0);
        }
    }
    Handle fakeQD_LMGetQDColors()
    {
        initializeIfNeeded();
        if (m_LMGetQDColorsFunc) {
            return m_LMGetQDColorsFunc();
        } else {
            return (Handle)0;
        }
    }
    void fakeQD_LMSetQDColors(Handle a0)
    {
        initializeIfNeeded();
        if (m_LMSetQDColorsFunc) {
            m_LMSetQDColorsFunc(a0);
        }
    }
    Handle fakeQD_LMGetWidthListHand()
    {
        initializeIfNeeded();
        if (m_LMGetWidthListHandFunc) {
            return m_LMGetWidthListHandFunc();
        } else {
            return (Handle)0;
        }
    }
    void fakeQD_LMSetWidthListHand(Handle a0)
    {
        initializeIfNeeded();
        if (m_LMSetWidthListHandFunc) {
            m_LMSetWidthListHandFunc(a0);
        }
    }
    UInt8 fakeQD_LMGetHiliteMode()
    {
        initializeIfNeeded();
        if (m_LMGetHiliteModeFunc) {
            return m_LMGetHiliteModeFunc();
        } else {
            return (UInt8)0;
        }
    }
    void fakeQD_LMSetHiliteMode(UInt8 a0)
    {
        initializeIfNeeded();
        if (m_LMSetHiliteModeFunc) {
            m_LMSetHiliteModeFunc(a0);
        }
    }
    Ptr fakeQD_LMGetWidthPtr()
    {
        initializeIfNeeded();
        if (m_LMGetWidthPtrFunc) {
            return m_LMGetWidthPtrFunc();
        } else {
            return (Ptr)0;
        }
    }
    void fakeQD_LMSetWidthPtr(Ptr a0)
    {
        initializeIfNeeded();
        if (m_LMSetWidthPtrFunc) {
            m_LMSetWidthPtrFunc(a0);
        }
    }
    Handle fakeQD_LMGetWidthTabHandle()
    {
        initializeIfNeeded();
        if (m_LMGetWidthTabHandleFunc) {
            return m_LMGetWidthTabHandleFunc();
        } else {
            return (Handle)0;
        }
    }
    void fakeQD_LMSetWidthTabHandle(Handle a0)
    {
        initializeIfNeeded();
        if (m_LMSetWidthTabHandleFunc) {
            m_LMSetWidthTabHandleFunc(a0);
        }
    }
    SInt32 fakeQD_LMGetLastSPExtra()
    {
        initializeIfNeeded();
        if (m_LMGetLastSPExtraFunc) {
            return m_LMGetLastSPExtraFunc();
        } else {
            return (SInt32)0;
        }
    }
    void fakeQD_LMSetLastSPExtra(SInt32 a0)
    {
        initializeIfNeeded();
        if (m_LMSetLastSPExtraFunc) {
            m_LMSetLastSPExtraFunc(a0);
        }
    }
    Handle fakeQD_LMGetLastFOND()
    {
        initializeIfNeeded();
        if (m_LMGetLastFONDFunc) {
            return m_LMGetLastFONDFunc();
        } else {
            return (Handle)0;
        }
    }
    void fakeQD_LMSetLastFOND(Handle a0)
    {
        initializeIfNeeded();
        if (m_LMSetLastFONDFunc) {
            m_LMSetLastFONDFunc(a0);
        }
    }
    UInt8 fakeQD_LMGetFractEnable()
    {
        initializeIfNeeded();
        if (m_LMGetFractEnableFunc) {
            return m_LMGetFractEnableFunc();
        } else {
            return (UInt8)0;
        }
    }
    void fakeQD_LMSetFractEnable(UInt8 a0)
    {
        initializeIfNeeded();
        if (m_LMSetFractEnableFunc) {
            m_LMSetFractEnableFunc(a0);
        }
    }
    GDHandle fakeQD_LMGetTheGDevice()
    {
        initializeIfNeeded();
        if (m_LMGetTheGDeviceFunc) {
            return m_LMGetTheGDeviceFunc();
        } else {
            return (GDHandle)0;
        }
    }
    void fakeQD_LMSetTheGDevice(GDHandle a0)
    {
        initializeIfNeeded();
        if (m_LMSetTheGDeviceFunc) {
            m_LMSetTheGDeviceFunc(a0);
        }
    }
    void fakeQD_LMGetHiliteRGB(RGBColor * a0)
    {
        initializeIfNeeded();
        if (m_LMGetHiliteRGBFunc) {
            m_LMGetHiliteRGBFunc(a0);
        }
    }
    void fakeQD_LMSetHiliteRGB(const RGBColor * a0)
    {
        initializeIfNeeded();
        if (m_LMSetHiliteRGBFunc) {
            m_LMSetHiliteRGBFunc(a0);
        }
    }
    Boolean fakeQD_LMGetCursorNew()
    {
        initializeIfNeeded();
        if (m_LMGetCursorNewFunc) {
            return m_LMGetCursorNewFunc();
        } else {
            return (Boolean)0;
        }
    }
    void fakeQD_LMSetCursorNew(Boolean a0)
    {
        initializeIfNeeded();
        if (m_LMSetCursorNewFunc) {
            m_LMSetCursorNewFunc(a0);
        }
    }
private:
    void initializeIfNeeded()
    {
        if (!m_initialized) {
            m_NewCMBitmapCallBackUPPFunc = getProcAddress<NewCMBitmapCallBackUPPFunc>("NewCMBitmapCallBackUPP");
            m_DisposeCMBitmapCallBackUPPFunc = getProcAddress<DisposeCMBitmapCallBackUPPFunc>("DisposeCMBitmapCallBackUPP");
            m_InvokeCMBitmapCallBackUPPFunc = getProcAddress<InvokeCMBitmapCallBackUPPFunc>("InvokeCMBitmapCallBackUPP");
            m_NewRegionToRectsUPPFunc = getProcAddress<NewRegionToRectsUPPFunc>("NewRegionToRectsUPP");
            m_DisposeRegionToRectsUPPFunc = getProcAddress<DisposeRegionToRectsUPPFunc>("DisposeRegionToRectsUPP");
            m_InvokeRegionToRectsUPPFunc = getProcAddress<InvokeRegionToRectsUPPFunc>("InvokeRegionToRectsUPP");
            m_QDRegionToRectsFunc = getProcAddress<QDRegionToRectsFunc>("QDRegionToRects");
            m_LockPortBitsFunc = getProcAddress<LockPortBitsFunc>("LockPortBits");
            m_UnlockPortBitsFunc = getProcAddress<UnlockPortBitsFunc>("UnlockPortBits");
            m_MacSetPortFunc = getProcAddress<MacSetPortFunc>("MacSetPort");
            m_GetPortFunc = getProcAddress<GetPortFunc>("GetPort");
            m_QDSwapPortFunc = getProcAddress<QDSwapPortFunc>("QDSwapPort");
            m_GrafDeviceFunc = getProcAddress<GrafDeviceFunc>("GrafDevice");
            m_SetPortBitsFunc = getProcAddress<SetPortBitsFunc>("SetPortBits");
            m_PortSizeFunc = getProcAddress<PortSizeFunc>("PortSize");
            m_MovePortToFunc = getProcAddress<MovePortToFunc>("MovePortTo");
            m_SetOriginFunc = getProcAddress<SetOriginFunc>("SetOrigin");
            m_SetClipFunc = getProcAddress<SetClipFunc>("SetClip");
            m_GetClipFunc = getProcAddress<GetClipFunc>("GetClip");
            m_ClipRectFunc = getProcAddress<ClipRectFunc>("ClipRect");
            m_BackPatFunc = getProcAddress<BackPatFunc>("BackPat");
            m_InitCursorFunc = getProcAddress<InitCursorFunc>("InitCursor");
            m_HideCursorFunc = getProcAddress<HideCursorFunc>("HideCursor");
            m_MacShowCursorFunc = getProcAddress<MacShowCursorFunc>("MacShowCursor");
            m_ObscureCursorFunc = getProcAddress<ObscureCursorFunc>("ObscureCursor");
            m_HidePenFunc = getProcAddress<HidePenFunc>("HidePen");
            m_ShowPenFunc = getProcAddress<ShowPenFunc>("ShowPen");
            m_GetPenFunc = getProcAddress<GetPenFunc>("GetPen");
            m_PenSizeFunc = getProcAddress<PenSizeFunc>("PenSize");
            m_PenModeFunc = getProcAddress<PenModeFunc>("PenMode");
            m_PenPatFunc = getProcAddress<PenPatFunc>("PenPat");
            m_PenNormalFunc = getProcAddress<PenNormalFunc>("PenNormal");
            m_MoveToFunc = getProcAddress<MoveToFunc>("MoveTo");
            m_MoveFunc = getProcAddress<MoveFunc>("Move");
            m_MacLineToFunc = getProcAddress<MacLineToFunc>("MacLineTo");
            m_LineFunc = getProcAddress<LineFunc>("Line");
            m_ForeColorFunc = getProcAddress<ForeColorFunc>("ForeColor");
            m_BackColorFunc = getProcAddress<BackColorFunc>("BackColor");
            m_ColorBitFunc = getProcAddress<ColorBitFunc>("ColorBit");
            m_MacSetRectFunc = getProcAddress<MacSetRectFunc>("MacSetRect");
            m_MacOffsetRectFunc = getProcAddress<MacOffsetRectFunc>("MacOffsetRect");
            m_MacInsetRectFunc = getProcAddress<MacInsetRectFunc>("MacInsetRect");
            m_SectRectFunc = getProcAddress<SectRectFunc>("SectRect");
            m_MacUnionRectFunc = getProcAddress<MacUnionRectFunc>("MacUnionRect");
            m_MacEqualRectFunc = getProcAddress<MacEqualRectFunc>("MacEqualRect");
            m_EmptyRectFunc = getProcAddress<EmptyRectFunc>("EmptyRect");
            m_MacFrameRectFunc = getProcAddress<MacFrameRectFunc>("MacFrameRect");
            m_PaintRectFunc = getProcAddress<PaintRectFunc>("PaintRect");
            m_EraseRectFunc = getProcAddress<EraseRectFunc>("EraseRect");
            m_MacInvertRectFunc = getProcAddress<MacInvertRectFunc>("MacInvertRect");
            m_MacFillRectFunc = getProcAddress<MacFillRectFunc>("MacFillRect");
            m_FrameOvalFunc = getProcAddress<FrameOvalFunc>("FrameOval");
            m_PaintOvalFunc = getProcAddress<PaintOvalFunc>("PaintOval");
            m_EraseOvalFunc = getProcAddress<EraseOvalFunc>("EraseOval");
            m_InvertOvalFunc = getProcAddress<InvertOvalFunc>("InvertOval");
            m_FillOvalFunc = getProcAddress<FillOvalFunc>("FillOval");
            m_FrameRoundRectFunc = getProcAddress<FrameRoundRectFunc>("FrameRoundRect");
            m_PaintRoundRectFunc = getProcAddress<PaintRoundRectFunc>("PaintRoundRect");
            m_EraseRoundRectFunc = getProcAddress<EraseRoundRectFunc>("EraseRoundRect");
            m_InvertRoundRectFunc = getProcAddress<InvertRoundRectFunc>("InvertRoundRect");
            m_FillRoundRectFunc = getProcAddress<FillRoundRectFunc>("FillRoundRect");
            m_FrameArcFunc = getProcAddress<FrameArcFunc>("FrameArc");
            m_PaintArcFunc = getProcAddress<PaintArcFunc>("PaintArc");
            m_EraseArcFunc = getProcAddress<EraseArcFunc>("EraseArc");
            m_InvertArcFunc = getProcAddress<InvertArcFunc>("InvertArc");
            m_FillArcFunc = getProcAddress<FillArcFunc>("FillArc");
            m_NewRgnFunc = getProcAddress<NewRgnFunc>("NewRgn");
            m_OpenRgnFunc = getProcAddress<OpenRgnFunc>("OpenRgn");
            m_CloseRgnFunc = getProcAddress<CloseRgnFunc>("CloseRgn");
            m_BitMapToRegionFunc = getProcAddress<BitMapToRegionFunc>("BitMapToRegion");
            m_RgnToHandleFunc = getProcAddress<RgnToHandleFunc>("RgnToHandle");
            m_HandleToRgnFunc = getProcAddress<HandleToRgnFunc>("HandleToRgn");
            m_DisposeRgnFunc = getProcAddress<DisposeRgnFunc>("DisposeRgn");
            m_MacCopyRgnFunc = getProcAddress<MacCopyRgnFunc>("MacCopyRgn");
            m_SetEmptyRgnFunc = getProcAddress<SetEmptyRgnFunc>("SetEmptyRgn");
            m_MacSetRectRgnFunc = getProcAddress<MacSetRectRgnFunc>("MacSetRectRgn");
            m_RectRgnFunc = getProcAddress<RectRgnFunc>("RectRgn");
            m_MacOffsetRgnFunc = getProcAddress<MacOffsetRgnFunc>("MacOffsetRgn");
            m_InsetRgnFunc = getProcAddress<InsetRgnFunc>("InsetRgn");
            m_SectRgnFunc = getProcAddress<SectRgnFunc>("SectRgn");
            m_MacUnionRgnFunc = getProcAddress<MacUnionRgnFunc>("MacUnionRgn");
            m_DiffRgnFunc = getProcAddress<DiffRgnFunc>("DiffRgn");
            m_MacXorRgnFunc = getProcAddress<MacXorRgnFunc>("MacXorRgn");
            m_RectInRgnFunc = getProcAddress<RectInRgnFunc>("RectInRgn");
            m_MacEqualRgnFunc = getProcAddress<MacEqualRgnFunc>("MacEqualRgn");
            m_EmptyRgnFunc = getProcAddress<EmptyRgnFunc>("EmptyRgn");
            m_MacFrameRgnFunc = getProcAddress<MacFrameRgnFunc>("MacFrameRgn");
            m_MacPaintRgnFunc = getProcAddress<MacPaintRgnFunc>("MacPaintRgn");
            m_EraseRgnFunc = getProcAddress<EraseRgnFunc>("EraseRgn");
            m_MacInvertRgnFunc = getProcAddress<MacInvertRgnFunc>("MacInvertRgn");
            m_MacFillRgnFunc = getProcAddress<MacFillRgnFunc>("MacFillRgn");
            m_ScrollRectFunc = getProcAddress<ScrollRectFunc>("ScrollRect");
            m_CopyBitsFunc = getProcAddress<CopyBitsFunc>("CopyBits");
            m_SeedFillFunc = getProcAddress<SeedFillFunc>("SeedFill");
            m_CalcMaskFunc = getProcAddress<CalcMaskFunc>("CalcMask");
            m_CopyMaskFunc = getProcAddress<CopyMaskFunc>("CopyMask");
            m_OpenPictureFunc = getProcAddress<OpenPictureFunc>("OpenPicture");
            m_PicCommentFunc = getProcAddress<PicCommentFunc>("PicComment");
            m_ClosePictureFunc = getProcAddress<ClosePictureFunc>("ClosePicture");
            m_QDGetPictureBoundsFunc = getProcAddress<QDGetPictureBoundsFunc>("QDGetPictureBounds");
            m_DrawPictureFunc = getProcAddress<DrawPictureFunc>("DrawPicture");
            m_KillPictureFunc = getProcAddress<KillPictureFunc>("KillPicture");
            m_OpenPolyFunc = getProcAddress<OpenPolyFunc>("OpenPoly");
            m_ClosePolyFunc = getProcAddress<ClosePolyFunc>("ClosePoly");
            m_KillPolyFunc = getProcAddress<KillPolyFunc>("KillPoly");
            m_OffsetPolyFunc = getProcAddress<OffsetPolyFunc>("OffsetPoly");
            m_FramePolyFunc = getProcAddress<FramePolyFunc>("FramePoly");
            m_PaintPolyFunc = getProcAddress<PaintPolyFunc>("PaintPoly");
            m_ErasePolyFunc = getProcAddress<ErasePolyFunc>("ErasePoly");
            m_InvertPolyFunc = getProcAddress<InvertPolyFunc>("InvertPoly");
            m_FillPolyFunc = getProcAddress<FillPolyFunc>("FillPoly");
            m_SetPtFunc = getProcAddress<SetPtFunc>("SetPt");
            m_LocalToGlobalFunc = getProcAddress<LocalToGlobalFunc>("LocalToGlobal");
            m_GlobalToLocalFunc = getProcAddress<GlobalToLocalFunc>("GlobalToLocal");
            m_RandomFunc = getProcAddress<RandomFunc>("Random");
            m_StuffHexFunc = getProcAddress<StuffHexFunc>("StuffHex");
            m_MacGetPixelFunc = getProcAddress<MacGetPixelFunc>("MacGetPixel");
            m_ScalePtFunc = getProcAddress<ScalePtFunc>("ScalePt");
            m_MapPtFunc = getProcAddress<MapPtFunc>("MapPt");
            m_MapRectFunc = getProcAddress<MapRectFunc>("MapRect");
            m_MapRgnFunc = getProcAddress<MapRgnFunc>("MapRgn");
            m_MapPolyFunc = getProcAddress<MapPolyFunc>("MapPoly");
            m_StdRectFunc = getProcAddress<StdRectFunc>("StdRect");
            m_StdRRectFunc = getProcAddress<StdRRectFunc>("StdRRect");
            m_StdOvalFunc = getProcAddress<StdOvalFunc>("StdOval");
            m_StdArcFunc = getProcAddress<StdArcFunc>("StdArc");
            m_StdPolyFunc = getProcAddress<StdPolyFunc>("StdPoly");
            m_StdRgnFunc = getProcAddress<StdRgnFunc>("StdRgn");
            m_StdBitsFunc = getProcAddress<StdBitsFunc>("StdBits");
            m_StdCommentFunc = getProcAddress<StdCommentFunc>("StdComment");
            m_StdGetPicFunc = getProcAddress<StdGetPicFunc>("StdGetPic");
            m_StdPutPicFunc = getProcAddress<StdPutPicFunc>("StdPutPic");
            m_StdOpcodeFunc = getProcAddress<StdOpcodeFunc>("StdOpcode");
            m_AddPtFunc = getProcAddress<AddPtFunc>("AddPt");
            m_EqualPtFunc = getProcAddress<EqualPtFunc>("EqualPt");
            m_MacPtInRectFunc = getProcAddress<MacPtInRectFunc>("MacPtInRect");
            m_Pt2RectFunc = getProcAddress<Pt2RectFunc>("Pt2Rect");
            m_PtToAngleFunc = getProcAddress<PtToAngleFunc>("PtToAngle");
            m_SubPtFunc = getProcAddress<SubPtFunc>("SubPt");
            m_PtInRgnFunc = getProcAddress<PtInRgnFunc>("PtInRgn");
            m_StdLineFunc = getProcAddress<StdLineFunc>("StdLine");
            m_NewPixMapFunc = getProcAddress<NewPixMapFunc>("NewPixMap");
            m_DisposePixMapFunc = getProcAddress<DisposePixMapFunc>("DisposePixMap");
            m_CopyPixMapFunc = getProcAddress<CopyPixMapFunc>("CopyPixMap");
            m_NewPixPatFunc = getProcAddress<NewPixPatFunc>("NewPixPat");
            m_DisposePixPatFunc = getProcAddress<DisposePixPatFunc>("DisposePixPat");
            m_CopyPixPatFunc = getProcAddress<CopyPixPatFunc>("CopyPixPat");
            m_PenPixPatFunc = getProcAddress<PenPixPatFunc>("PenPixPat");
            m_BackPixPatFunc = getProcAddress<BackPixPatFunc>("BackPixPat");
            m_GetPixPatFunc = getProcAddress<GetPixPatFunc>("GetPixPat");
            m_MakeRGBPatFunc = getProcAddress<MakeRGBPatFunc>("MakeRGBPat");
            m_FillCRectFunc = getProcAddress<FillCRectFunc>("FillCRect");
            m_FillCOvalFunc = getProcAddress<FillCOvalFunc>("FillCOval");
            m_FillCRoundRectFunc = getProcAddress<FillCRoundRectFunc>("FillCRoundRect");
            m_FillCArcFunc = getProcAddress<FillCArcFunc>("FillCArc");
            m_FillCRgnFunc = getProcAddress<FillCRgnFunc>("FillCRgn");
            m_FillCPolyFunc = getProcAddress<FillCPolyFunc>("FillCPoly");
            m_RGBForeColorFunc = getProcAddress<RGBForeColorFunc>("RGBForeColor");
            m_RGBBackColorFunc = getProcAddress<RGBBackColorFunc>("RGBBackColor");
            m_SetCPixelFunc = getProcAddress<SetCPixelFunc>("SetCPixel");
            m_SetPortPixFunc = getProcAddress<SetPortPixFunc>("SetPortPix");
            m_GetCPixelFunc = getProcAddress<GetCPixelFunc>("GetCPixel");
            m_GetForeColorFunc = getProcAddress<GetForeColorFunc>("GetForeColor");
            m_GetBackColorFunc = getProcAddress<GetBackColorFunc>("GetBackColor");
            m_SeedCFillFunc = getProcAddress<SeedCFillFunc>("SeedCFill");
            m_CalcCMaskFunc = getProcAddress<CalcCMaskFunc>("CalcCMask");
            m_OpenCPictureFunc = getProcAddress<OpenCPictureFunc>("OpenCPicture");
            m_OpColorFunc = getProcAddress<OpColorFunc>("OpColor");
            m_HiliteColorFunc = getProcAddress<HiliteColorFunc>("HiliteColor");
            m_DisposeCTableFunc = getProcAddress<DisposeCTableFunc>("DisposeCTable");
            m_GetCTableFunc = getProcAddress<GetCTableFunc>("GetCTable");
            m_AllocCursorFunc = getProcAddress<AllocCursorFunc>("AllocCursor");
            m_SetStdCProcsFunc = getProcAddress<SetStdCProcsFunc>("SetStdCProcs");
            m_GetMaxDeviceFunc = getProcAddress<GetMaxDeviceFunc>("GetMaxDevice");
            m_GetCTSeedFunc = getProcAddress<GetCTSeedFunc>("GetCTSeed");
            m_GetDeviceListFunc = getProcAddress<GetDeviceListFunc>("GetDeviceList");
            m_GetMainDeviceFunc = getProcAddress<GetMainDeviceFunc>("GetMainDevice");
            m_GetNextDeviceFunc = getProcAddress<GetNextDeviceFunc>("GetNextDevice");
            m_TestDeviceAttributeFunc = getProcAddress<TestDeviceAttributeFunc>("TestDeviceAttribute");
            m_SetDeviceAttributeFunc = getProcAddress<SetDeviceAttributeFunc>("SetDeviceAttribute");
            m_InitGDeviceFunc = getProcAddress<InitGDeviceFunc>("InitGDevice");
            m_NewGDeviceFunc = getProcAddress<NewGDeviceFunc>("NewGDevice");
            m_DisposeGDeviceFunc = getProcAddress<DisposeGDeviceFunc>("DisposeGDevice");
            m_SetGDeviceFunc = getProcAddress<SetGDeviceFunc>("SetGDevice");
            m_GetGDeviceFunc = getProcAddress<GetGDeviceFunc>("GetGDevice");
            m_Color2IndexFunc = getProcAddress<Color2IndexFunc>("Color2Index");
            m_Index2ColorFunc = getProcAddress<Index2ColorFunc>("Index2Color");
            m_InvertColorFunc = getProcAddress<InvertColorFunc>("InvertColor");
            m_RealColorFunc = getProcAddress<RealColorFunc>("RealColor");
            m_GetSubTableFunc = getProcAddress<GetSubTableFunc>("GetSubTable");
            m_AddSearchFunc = getProcAddress<AddSearchFunc>("AddSearch");
            m_AddCompFunc = getProcAddress<AddCompFunc>("AddComp");
            m_DelSearchFunc = getProcAddress<DelSearchFunc>("DelSearch");
            m_DelCompFunc = getProcAddress<DelCompFunc>("DelComp");
            m_SetClientIDFunc = getProcAddress<SetClientIDFunc>("SetClientID");
            m_ProtectEntryFunc = getProcAddress<ProtectEntryFunc>("ProtectEntry");
            m_ReserveEntryFunc = getProcAddress<ReserveEntryFunc>("ReserveEntry");
            m_SetEntriesFunc = getProcAddress<SetEntriesFunc>("SetEntries");
            m_QDErrorFunc = getProcAddress<QDErrorFunc>("QDError");
            m_CopyDeepMaskFunc = getProcAddress<CopyDeepMaskFunc>("CopyDeepMask");
            m_GetMaskTableFunc = getProcAddress<GetMaskTableFunc>("GetMaskTable");
            m_GetPatternFunc = getProcAddress<GetPatternFunc>("GetPattern");
            m_GetPictureFunc = getProcAddress<GetPictureFunc>("GetPicture");
            m_DeltaPointFunc = getProcAddress<DeltaPointFunc>("DeltaPoint");
            m_ShieldCursorFunc = getProcAddress<ShieldCursorFunc>("ShieldCursor");
            m_ScreenResFunc = getProcAddress<ScreenResFunc>("ScreenRes");
            m_GetIndPatternFunc = getProcAddress<GetIndPatternFunc>("GetIndPattern");
            m_deltapointFunc = getProcAddress<deltapointFunc>("deltapoint");
            m_PackBitsFunc = getProcAddress<PackBitsFunc>("PackBits");
            m_UnpackBitsFunc = getProcAddress<UnpackBitsFunc>("UnpackBits");
            m_SlopeFromAngleFunc = getProcAddress<SlopeFromAngleFunc>("SlopeFromAngle");
            m_AngleFromSlopeFunc = getProcAddress<AngleFromSlopeFunc>("AngleFromSlope");
            m_OpenCursorComponentFunc = getProcAddress<OpenCursorComponentFunc>("OpenCursorComponent");
            m_CloseCursorComponentFunc = getProcAddress<CloseCursorComponentFunc>("CloseCursorComponent");
            m_SetCursorComponentFunc = getProcAddress<SetCursorComponentFunc>("SetCursorComponent");
            m_CursorComponentChangedFunc = getProcAddress<CursorComponentChangedFunc>("CursorComponentChanged");
            m_CursorComponentSetDataFunc = getProcAddress<CursorComponentSetDataFunc>("CursorComponentSetData");
            m_CWMatchPixMapFunc = getProcAddress<CWMatchPixMapFunc>("CWMatchPixMap");
            m_CWCheckPixMapFunc = getProcAddress<CWCheckPixMapFunc>("CWCheckPixMap");
            m_NCMBeginMatchingFunc = getProcAddress<NCMBeginMatchingFunc>("NCMBeginMatching");
            m_CMEndMatchingFunc = getProcAddress<CMEndMatchingFunc>("CMEndMatching");
            m_NCMDrawMatchedPictureFunc = getProcAddress<NCMDrawMatchedPictureFunc>("NCMDrawMatchedPicture");
            m_CMEnableMatchingCommentFunc = getProcAddress<CMEnableMatchingCommentFunc>("CMEnableMatchingComment");
            m_NCMUseProfileCommentFunc = getProcAddress<NCMUseProfileCommentFunc>("NCMUseProfileComment");
            m_IsValidPortFunc = getProcAddress<IsValidPortFunc>("IsValidPort");
            m_IsValidRgnHandleFunc = getProcAddress<IsValidRgnHandleFunc>("IsValidRgnHandle");
            m_GetPortPixMapFunc = getProcAddress<GetPortPixMapFunc>("GetPortPixMap");
            m_GetPortBitMapForCopyBitsFunc = getProcAddress<GetPortBitMapForCopyBitsFunc>("GetPortBitMapForCopyBits");
            m_GetPortBoundsFunc = getProcAddress<GetPortBoundsFunc>("GetPortBounds");
            m_GetPortForeColorFunc = getProcAddress<GetPortForeColorFunc>("GetPortForeColor");
            m_GetPortBackColorFunc = getProcAddress<GetPortBackColorFunc>("GetPortBackColor");
            m_GetPortOpColorFunc = getProcAddress<GetPortOpColorFunc>("GetPortOpColor");
            m_GetPortHiliteColorFunc = getProcAddress<GetPortHiliteColorFunc>("GetPortHiliteColor");
            m_GetPortGrafProcsFunc = getProcAddress<GetPortGrafProcsFunc>("GetPortGrafProcs");
            m_GetPortTextFontFunc = getProcAddress<GetPortTextFontFunc>("GetPortTextFont");
            m_GetPortTextFaceFunc = getProcAddress<GetPortTextFaceFunc>("GetPortTextFace");
            m_GetPortTextModeFunc = getProcAddress<GetPortTextModeFunc>("GetPortTextMode");
            m_GetPortTextSizeFunc = getProcAddress<GetPortTextSizeFunc>("GetPortTextSize");
            m_GetPortChExtraFunc = getProcAddress<GetPortChExtraFunc>("GetPortChExtra");
            m_GetPortFracHPenLocationFunc = getProcAddress<GetPortFracHPenLocationFunc>("GetPortFracHPenLocation");
            m_GetPortSpExtraFunc = getProcAddress<GetPortSpExtraFunc>("GetPortSpExtra");
            m_GetPortPenVisibilityFunc = getProcAddress<GetPortPenVisibilityFunc>("GetPortPenVisibility");
            m_GetPortVisibleRegionFunc = getProcAddress<GetPortVisibleRegionFunc>("GetPortVisibleRegion");
            m_GetPortClipRegionFunc = getProcAddress<GetPortClipRegionFunc>("GetPortClipRegion");
            m_GetPortBackPixPatFunc = getProcAddress<GetPortBackPixPatFunc>("GetPortBackPixPat");
            m_GetPortPenPixPatFunc = getProcAddress<GetPortPenPixPatFunc>("GetPortPenPixPat");
            m_GetPortFillPixPatFunc = getProcAddress<GetPortFillPixPatFunc>("GetPortFillPixPat");
            m_GetPortPenSizeFunc = getProcAddress<GetPortPenSizeFunc>("GetPortPenSize");
            m_GetPortPenModeFunc = getProcAddress<GetPortPenModeFunc>("GetPortPenMode");
            m_GetPortPenLocationFunc = getProcAddress<GetPortPenLocationFunc>("GetPortPenLocation");
            m_IsPortRegionBeingDefinedFunc = getProcAddress<IsPortRegionBeingDefinedFunc>("IsPortRegionBeingDefined");
            m_IsPortPictureBeingDefinedFunc = getProcAddress<IsPortPictureBeingDefinedFunc>("IsPortPictureBeingDefined");
            m_IsPortPolyBeingDefinedFunc = getProcAddress<IsPortPolyBeingDefinedFunc>("IsPortPolyBeingDefined");
            m_IsPortOffscreenFunc = getProcAddress<IsPortOffscreenFunc>("IsPortOffscreen");
            m_IsPortColorFunc = getProcAddress<IsPortColorFunc>("IsPortColor");
            m_IsPortVisibleRegionEmptyFunc = getProcAddress<IsPortVisibleRegionEmptyFunc>("IsPortVisibleRegionEmpty");
            m_IsPortClipRegionEmptyFunc = getProcAddress<IsPortClipRegionEmptyFunc>("IsPortClipRegionEmpty");
            m_SectRegionWithPortClipRegionFunc = getProcAddress<SectRegionWithPortClipRegionFunc>("SectRegionWithPortClipRegion");
            m_SectRegionWithPortVisibleRegionFunc = getProcAddress<SectRegionWithPortVisibleRegionFunc>("SectRegionWithPortVisibleRegion");
            m_SwapPortPicSaveHandleFunc = getProcAddress<SwapPortPicSaveHandleFunc>("SwapPortPicSaveHandle");
            m_SwapPortPolySaveHandleFunc = getProcAddress<SwapPortPolySaveHandleFunc>("SwapPortPolySaveHandle");
            m_SwapPortRegionSaveHandleFunc = getProcAddress<SwapPortRegionSaveHandleFunc>("SwapPortRegionSaveHandle");
            m_SetPortBoundsFunc = getProcAddress<SetPortBoundsFunc>("SetPortBounds");
            m_SetPortOpColorFunc = getProcAddress<SetPortOpColorFunc>("SetPortOpColor");
            m_SetPortGrafProcsFunc = getProcAddress<SetPortGrafProcsFunc>("SetPortGrafProcs");
            m_SetPortTextFontFunc = getProcAddress<SetPortTextFontFunc>("SetPortTextFont");
            m_SetPortTextSizeFunc = getProcAddress<SetPortTextSizeFunc>("SetPortTextSize");
            m_SetPortTextFaceFunc = getProcAddress<SetPortTextFaceFunc>("SetPortTextFace");
            m_SetPortTextModeFunc = getProcAddress<SetPortTextModeFunc>("SetPortTextMode");
            m_SetPortVisibleRegionFunc = getProcAddress<SetPortVisibleRegionFunc>("SetPortVisibleRegion");
            m_SetPortClipRegionFunc = getProcAddress<SetPortClipRegionFunc>("SetPortClipRegion");
            m_SetPortPenPixPatFunc = getProcAddress<SetPortPenPixPatFunc>("SetPortPenPixPat");
            m_SetPortFillPixPatFunc = getProcAddress<SetPortFillPixPatFunc>("SetPortFillPixPat");
            m_SetPortBackPixPatFunc = getProcAddress<SetPortBackPixPatFunc>("SetPortBackPixPat");
            m_SetPortPenSizeFunc = getProcAddress<SetPortPenSizeFunc>("SetPortPenSize");
            m_SetPortPenModeFunc = getProcAddress<SetPortPenModeFunc>("SetPortPenMode");
            m_SetPortFracHPenLocationFunc = getProcAddress<SetPortFracHPenLocationFunc>("SetPortFracHPenLocation");
            m_GetPixBoundsFunc = getProcAddress<GetPixBoundsFunc>("GetPixBounds");
            m_GetPixDepthFunc = getProcAddress<GetPixDepthFunc>("GetPixDepth");
            m_GetQDGlobalsRandomSeedFunc = getProcAddress<GetQDGlobalsRandomSeedFunc>("GetQDGlobalsRandomSeed");
            m_GetQDGlobalsScreenBitsFunc = getProcAddress<GetQDGlobalsScreenBitsFunc>("GetQDGlobalsScreenBits");
            m_GetQDGlobalsDarkGrayFunc = getProcAddress<GetQDGlobalsDarkGrayFunc>("GetQDGlobalsDarkGray");
            m_GetQDGlobalsLightGrayFunc = getProcAddress<GetQDGlobalsLightGrayFunc>("GetQDGlobalsLightGray");
            m_GetQDGlobalsGrayFunc = getProcAddress<GetQDGlobalsGrayFunc>("GetQDGlobalsGray");
            m_GetQDGlobalsBlackFunc = getProcAddress<GetQDGlobalsBlackFunc>("GetQDGlobalsBlack");
            m_GetQDGlobalsWhiteFunc = getProcAddress<GetQDGlobalsWhiteFunc>("GetQDGlobalsWhite");
            m_GetQDGlobalsThePortFunc = getProcAddress<GetQDGlobalsThePortFunc>("GetQDGlobalsThePort");
            m_SetQDGlobalsRandomSeedFunc = getProcAddress<SetQDGlobalsRandomSeedFunc>("SetQDGlobalsRandomSeed");
            m_GetRegionBoundsFunc = getProcAddress<GetRegionBoundsFunc>("GetRegionBounds");
            m_IsRegionRectangularFunc = getProcAddress<IsRegionRectangularFunc>("IsRegionRectangular");
            m_CreateNewPortFunc = getProcAddress<CreateNewPortFunc>("CreateNewPort");
            m_DisposePortFunc = getProcAddress<DisposePortFunc>("DisposePort");
            m_SetQDErrorFunc = getProcAddress<SetQDErrorFunc>("SetQDError");
            m_QDLocalToGlobalPointFunc = getProcAddress<QDLocalToGlobalPointFunc>("QDLocalToGlobalPoint");
            m_QDGlobalToLocalPointFunc = getProcAddress<QDGlobalToLocalPointFunc>("QDGlobalToLocalPoint");
            m_QDLocalToGlobalRectFunc = getProcAddress<QDLocalToGlobalRectFunc>("QDLocalToGlobalRect");
            m_QDGlobalToLocalRectFunc = getProcAddress<QDGlobalToLocalRectFunc>("QDGlobalToLocalRect");
            m_QDLocalToGlobalRegionFunc = getProcAddress<QDLocalToGlobalRegionFunc>("QDLocalToGlobalRegion");
            m_QDGlobalToLocalRegionFunc = getProcAddress<QDGlobalToLocalRegionFunc>("QDGlobalToLocalRegion");
            m_QDIsPortBufferedFunc = getProcAddress<QDIsPortBufferedFunc>("QDIsPortBuffered");
            m_QDIsPortBufferDirtyFunc = getProcAddress<QDIsPortBufferDirtyFunc>("QDIsPortBufferDirty");
            m_QDFlushPortBufferFunc = getProcAddress<QDFlushPortBufferFunc>("QDFlushPortBuffer");
            m_QDGetDirtyRegionFunc = getProcAddress<QDGetDirtyRegionFunc>("QDGetDirtyRegion");
            m_QDSetDirtyRegionFunc = getProcAddress<QDSetDirtyRegionFunc>("QDSetDirtyRegion");
            m_QDAddRectToDirtyRegionFunc = getProcAddress<QDAddRectToDirtyRegionFunc>("QDAddRectToDirtyRegion");
            m_QDAddRegionToDirtyRegionFunc = getProcAddress<QDAddRegionToDirtyRegionFunc>("QDAddRegionToDirtyRegion");
            m_CreateCGContextForPortFunc = getProcAddress<CreateCGContextForPortFunc>("CreateCGContextForPort");
            m_ClipCGContextToRegionFunc = getProcAddress<ClipCGContextToRegionFunc>("ClipCGContextToRegion");
            m_SyncCGContextOriginWithPortFunc = getProcAddress<SyncCGContextOriginWithPortFunc>("SyncCGContextOriginWithPort");
            m_QDBeginCGContextFunc = getProcAddress<QDBeginCGContextFunc>("QDBeginCGContext");
            m_QDEndCGContextFunc = getProcAddress<QDEndCGContextFunc>("QDEndCGContext");
            m_CreateNewPortForCGDisplayIDFunc = getProcAddress<CreateNewPortForCGDisplayIDFunc>("CreateNewPortForCGDisplayID");
            m_QDDisplayWaitCursorFunc = getProcAddress<QDDisplayWaitCursorFunc>("QDDisplayWaitCursor");
            m_QDSetPatternOriginFunc = getProcAddress<QDSetPatternOriginFunc>("QDSetPatternOrigin");
            m_QDGetPatternOriginFunc = getProcAddress<QDGetPatternOriginFunc>("QDGetPatternOrigin");
            m_QDIsNamedPixMapCursorRegisteredFunc = getProcAddress<QDIsNamedPixMapCursorRegisteredFunc>("QDIsNamedPixMapCursorRegistered");
            m_QDRegisterNamedPixMapCursorFunc = getProcAddress<QDRegisterNamedPixMapCursorFunc>("QDRegisterNamedPixMapCursor");
            m_QDUnregisterNamedPixMapCursurFunc = getProcAddress<QDUnregisterNamedPixMapCursurFunc>("QDUnregisterNamedPixMapCursur");
            m_QDUnregisterNamedPixMapCursorFunc = getProcAddress<QDUnregisterNamedPixMapCursorFunc>("QDUnregisterNamedPixMapCursor");
            m_QDSetNamedPixMapCursorFunc = getProcAddress<QDSetNamedPixMapCursorFunc>("QDSetNamedPixMapCursor");
            m_QDSetCursorScaleFunc = getProcAddress<QDSetCursorScaleFunc>("QDSetCursorScale");
            m_QDGetCursorScaleFunc = getProcAddress<QDGetCursorScaleFunc>("QDGetCursorScale");
            m_QDGetCursorDataFunc = getProcAddress<QDGetCursorDataFunc>("QDGetCursorData");
            m_QDSwapTextFlagsFunc = getProcAddress<QDSwapTextFlagsFunc>("QDSwapTextFlags");
            m_QDSwapPortTextFlagsFunc = getProcAddress<QDSwapPortTextFlagsFunc>("QDSwapPortTextFlags");
            m_QDGetCGDirectDisplayIDFunc = getProcAddress<QDGetCGDirectDisplayIDFunc>("QDGetCGDirectDisplayID");
            m_LMGetScrVResFunc = getProcAddress<LMGetScrVResFunc>("LMGetScrVRes");
            m_LMSetScrVResFunc = getProcAddress<LMSetScrVResFunc>("LMSetScrVRes");
            m_LMGetScrHResFunc = getProcAddress<LMGetScrHResFunc>("LMGetScrHRes");
            m_LMSetScrHResFunc = getProcAddress<LMSetScrHResFunc>("LMSetScrHRes");
            m_LMGetMainDeviceFunc = getProcAddress<LMGetMainDeviceFunc>("LMGetMainDevice");
            m_LMSetMainDeviceFunc = getProcAddress<LMSetMainDeviceFunc>("LMSetMainDevice");
            m_LMGetDeviceListFunc = getProcAddress<LMGetDeviceListFunc>("LMGetDeviceList");
            m_LMSetDeviceListFunc = getProcAddress<LMSetDeviceListFunc>("LMSetDeviceList");
            m_LMGetQDColorsFunc = getProcAddress<LMGetQDColorsFunc>("LMGetQDColors");
            m_LMSetQDColorsFunc = getProcAddress<LMSetQDColorsFunc>("LMSetQDColors");
            m_LMGetWidthListHandFunc = getProcAddress<LMGetWidthListHandFunc>("LMGetWidthListHand");
            m_LMSetWidthListHandFunc = getProcAddress<LMSetWidthListHandFunc>("LMSetWidthListHand");
            m_LMGetHiliteModeFunc = getProcAddress<LMGetHiliteModeFunc>("LMGetHiliteMode");
            m_LMSetHiliteModeFunc = getProcAddress<LMSetHiliteModeFunc>("LMSetHiliteMode");
            m_LMGetWidthPtrFunc = getProcAddress<LMGetWidthPtrFunc>("LMGetWidthPtr");
            m_LMSetWidthPtrFunc = getProcAddress<LMSetWidthPtrFunc>("LMSetWidthPtr");
            m_LMGetWidthTabHandleFunc = getProcAddress<LMGetWidthTabHandleFunc>("LMGetWidthTabHandle");
            m_LMSetWidthTabHandleFunc = getProcAddress<LMSetWidthTabHandleFunc>("LMSetWidthTabHandle");
            m_LMGetLastSPExtraFunc = getProcAddress<LMGetLastSPExtraFunc>("LMGetLastSPExtra");
            m_LMSetLastSPExtraFunc = getProcAddress<LMSetLastSPExtraFunc>("LMSetLastSPExtra");
            m_LMGetLastFONDFunc = getProcAddress<LMGetLastFONDFunc>("LMGetLastFOND");
            m_LMSetLastFONDFunc = getProcAddress<LMSetLastFONDFunc>("LMSetLastFOND");
            m_LMGetFractEnableFunc = getProcAddress<LMGetFractEnableFunc>("LMGetFractEnable");
            m_LMSetFractEnableFunc = getProcAddress<LMSetFractEnableFunc>("LMSetFractEnable");
            m_LMGetTheGDeviceFunc = getProcAddress<LMGetTheGDeviceFunc>("LMGetTheGDevice");
            m_LMSetTheGDeviceFunc = getProcAddress<LMSetTheGDeviceFunc>("LMSetTheGDevice");
            m_LMGetHiliteRGBFunc = getProcAddress<LMGetHiliteRGBFunc>("LMGetHiliteRGB");
            m_LMSetHiliteRGBFunc = getProcAddress<LMSetHiliteRGBFunc>("LMSetHiliteRGB");
            m_LMGetCursorNewFunc = getProcAddress<LMGetCursorNewFunc>("LMGetCursorNew");
            m_LMSetCursorNewFunc = getProcAddress<LMSetCursorNewFunc>("LMSetCursorNew");
            m_initialized = true;
        }
    }
    void* getHandle()
    {
        if (!m_qd_dylib_handle) {
            m_qd_dylib_handle = dlopen("/System/Library/Frameworks/ApplicationServices.framework/Frameworks/QD.framework/QD", RTLD_LAZY);
        }
        return m_qd_dylib_handle;
    }
    template<class Func>
    Func getProcAddress(const char* name)
    {
        void * handle = getHandle();
        if (handle) {
            return reinterpret_cast<Func>(dlsym(handle, name));
        } else {
            return 0;
        }
    }
private:
    bool m_initialized;
    void* m_qd_dylib_handle;
    NewCMBitmapCallBackUPPFunc m_NewCMBitmapCallBackUPPFunc;
    DisposeCMBitmapCallBackUPPFunc m_DisposeCMBitmapCallBackUPPFunc;
    InvokeCMBitmapCallBackUPPFunc m_InvokeCMBitmapCallBackUPPFunc;
    NewRegionToRectsUPPFunc m_NewRegionToRectsUPPFunc;
    DisposeRegionToRectsUPPFunc m_DisposeRegionToRectsUPPFunc;
    InvokeRegionToRectsUPPFunc m_InvokeRegionToRectsUPPFunc;
    QDRegionToRectsFunc m_QDRegionToRectsFunc;
    LockPortBitsFunc m_LockPortBitsFunc;
    UnlockPortBitsFunc m_UnlockPortBitsFunc;
    MacSetPortFunc m_MacSetPortFunc;
    GetPortFunc m_GetPortFunc;
    QDSwapPortFunc m_QDSwapPortFunc;
    GrafDeviceFunc m_GrafDeviceFunc;
    SetPortBitsFunc m_SetPortBitsFunc;
    PortSizeFunc m_PortSizeFunc;
    MovePortToFunc m_MovePortToFunc;
    SetOriginFunc m_SetOriginFunc;
    SetClipFunc m_SetClipFunc;
    GetClipFunc m_GetClipFunc;
    ClipRectFunc m_ClipRectFunc;
    BackPatFunc m_BackPatFunc;
    InitCursorFunc m_InitCursorFunc;
    HideCursorFunc m_HideCursorFunc;
    MacShowCursorFunc m_MacShowCursorFunc;
    ObscureCursorFunc m_ObscureCursorFunc;
    HidePenFunc m_HidePenFunc;
    ShowPenFunc m_ShowPenFunc;
    GetPenFunc m_GetPenFunc;
    PenSizeFunc m_PenSizeFunc;
    PenModeFunc m_PenModeFunc;
    PenPatFunc m_PenPatFunc;
    PenNormalFunc m_PenNormalFunc;
    MoveToFunc m_MoveToFunc;
    MoveFunc m_MoveFunc;
    MacLineToFunc m_MacLineToFunc;
    LineFunc m_LineFunc;
    ForeColorFunc m_ForeColorFunc;
    BackColorFunc m_BackColorFunc;
    ColorBitFunc m_ColorBitFunc;
    MacSetRectFunc m_MacSetRectFunc;
    MacOffsetRectFunc m_MacOffsetRectFunc;
    MacInsetRectFunc m_MacInsetRectFunc;
    SectRectFunc m_SectRectFunc;
    MacUnionRectFunc m_MacUnionRectFunc;
    MacEqualRectFunc m_MacEqualRectFunc;
    EmptyRectFunc m_EmptyRectFunc;
    MacFrameRectFunc m_MacFrameRectFunc;
    PaintRectFunc m_PaintRectFunc;
    EraseRectFunc m_EraseRectFunc;
    MacInvertRectFunc m_MacInvertRectFunc;
    MacFillRectFunc m_MacFillRectFunc;
    FrameOvalFunc m_FrameOvalFunc;
    PaintOvalFunc m_PaintOvalFunc;
    EraseOvalFunc m_EraseOvalFunc;
    InvertOvalFunc m_InvertOvalFunc;
    FillOvalFunc m_FillOvalFunc;
    FrameRoundRectFunc m_FrameRoundRectFunc;
    PaintRoundRectFunc m_PaintRoundRectFunc;
    EraseRoundRectFunc m_EraseRoundRectFunc;
    InvertRoundRectFunc m_InvertRoundRectFunc;
    FillRoundRectFunc m_FillRoundRectFunc;
    FrameArcFunc m_FrameArcFunc;
    PaintArcFunc m_PaintArcFunc;
    EraseArcFunc m_EraseArcFunc;
    InvertArcFunc m_InvertArcFunc;
    FillArcFunc m_FillArcFunc;
    NewRgnFunc m_NewRgnFunc;
    OpenRgnFunc m_OpenRgnFunc;
    CloseRgnFunc m_CloseRgnFunc;
    BitMapToRegionFunc m_BitMapToRegionFunc;
    RgnToHandleFunc m_RgnToHandleFunc;
    HandleToRgnFunc m_HandleToRgnFunc;
    DisposeRgnFunc m_DisposeRgnFunc;
    MacCopyRgnFunc m_MacCopyRgnFunc;
    SetEmptyRgnFunc m_SetEmptyRgnFunc;
    MacSetRectRgnFunc m_MacSetRectRgnFunc;
    RectRgnFunc m_RectRgnFunc;
    MacOffsetRgnFunc m_MacOffsetRgnFunc;
    InsetRgnFunc m_InsetRgnFunc;
    SectRgnFunc m_SectRgnFunc;
    MacUnionRgnFunc m_MacUnionRgnFunc;
    DiffRgnFunc m_DiffRgnFunc;
    MacXorRgnFunc m_MacXorRgnFunc;
    RectInRgnFunc m_RectInRgnFunc;
    MacEqualRgnFunc m_MacEqualRgnFunc;
    EmptyRgnFunc m_EmptyRgnFunc;
    MacFrameRgnFunc m_MacFrameRgnFunc;
    MacPaintRgnFunc m_MacPaintRgnFunc;
    EraseRgnFunc m_EraseRgnFunc;
    MacInvertRgnFunc m_MacInvertRgnFunc;
    MacFillRgnFunc m_MacFillRgnFunc;
    ScrollRectFunc m_ScrollRectFunc;
    CopyBitsFunc m_CopyBitsFunc;
    SeedFillFunc m_SeedFillFunc;
    CalcMaskFunc m_CalcMaskFunc;
    CopyMaskFunc m_CopyMaskFunc;
    OpenPictureFunc m_OpenPictureFunc;
    PicCommentFunc m_PicCommentFunc;
    ClosePictureFunc m_ClosePictureFunc;
    QDGetPictureBoundsFunc m_QDGetPictureBoundsFunc;
    DrawPictureFunc m_DrawPictureFunc;
    KillPictureFunc m_KillPictureFunc;
    OpenPolyFunc m_OpenPolyFunc;
    ClosePolyFunc m_ClosePolyFunc;
    KillPolyFunc m_KillPolyFunc;
    OffsetPolyFunc m_OffsetPolyFunc;
    FramePolyFunc m_FramePolyFunc;
    PaintPolyFunc m_PaintPolyFunc;
    ErasePolyFunc m_ErasePolyFunc;
    InvertPolyFunc m_InvertPolyFunc;
    FillPolyFunc m_FillPolyFunc;
    SetPtFunc m_SetPtFunc;
    LocalToGlobalFunc m_LocalToGlobalFunc;
    GlobalToLocalFunc m_GlobalToLocalFunc;
    RandomFunc m_RandomFunc;
    StuffHexFunc m_StuffHexFunc;
    MacGetPixelFunc m_MacGetPixelFunc;
    ScalePtFunc m_ScalePtFunc;
    MapPtFunc m_MapPtFunc;
    MapRectFunc m_MapRectFunc;
    MapRgnFunc m_MapRgnFunc;
    MapPolyFunc m_MapPolyFunc;
    StdRectFunc m_StdRectFunc;
    StdRRectFunc m_StdRRectFunc;
    StdOvalFunc m_StdOvalFunc;
    StdArcFunc m_StdArcFunc;
    StdPolyFunc m_StdPolyFunc;
    StdRgnFunc m_StdRgnFunc;
    StdBitsFunc m_StdBitsFunc;
    StdCommentFunc m_StdCommentFunc;
    StdGetPicFunc m_StdGetPicFunc;
    StdPutPicFunc m_StdPutPicFunc;
    StdOpcodeFunc m_StdOpcodeFunc;
    AddPtFunc m_AddPtFunc;
    EqualPtFunc m_EqualPtFunc;
    MacPtInRectFunc m_MacPtInRectFunc;
    Pt2RectFunc m_Pt2RectFunc;
    PtToAngleFunc m_PtToAngleFunc;
    SubPtFunc m_SubPtFunc;
    PtInRgnFunc m_PtInRgnFunc;
    StdLineFunc m_StdLineFunc;
    NewPixMapFunc m_NewPixMapFunc;
    DisposePixMapFunc m_DisposePixMapFunc;
    CopyPixMapFunc m_CopyPixMapFunc;
    NewPixPatFunc m_NewPixPatFunc;
    DisposePixPatFunc m_DisposePixPatFunc;
    CopyPixPatFunc m_CopyPixPatFunc;
    PenPixPatFunc m_PenPixPatFunc;
    BackPixPatFunc m_BackPixPatFunc;
    GetPixPatFunc m_GetPixPatFunc;
    MakeRGBPatFunc m_MakeRGBPatFunc;
    FillCRectFunc m_FillCRectFunc;
    FillCOvalFunc m_FillCOvalFunc;
    FillCRoundRectFunc m_FillCRoundRectFunc;
    FillCArcFunc m_FillCArcFunc;
    FillCRgnFunc m_FillCRgnFunc;
    FillCPolyFunc m_FillCPolyFunc;
    RGBForeColorFunc m_RGBForeColorFunc;
    RGBBackColorFunc m_RGBBackColorFunc;
    SetCPixelFunc m_SetCPixelFunc;
    SetPortPixFunc m_SetPortPixFunc;
    GetCPixelFunc m_GetCPixelFunc;
    GetForeColorFunc m_GetForeColorFunc;
    GetBackColorFunc m_GetBackColorFunc;
    SeedCFillFunc m_SeedCFillFunc;
    CalcCMaskFunc m_CalcCMaskFunc;
    OpenCPictureFunc m_OpenCPictureFunc;
    OpColorFunc m_OpColorFunc;
    HiliteColorFunc m_HiliteColorFunc;
    DisposeCTableFunc m_DisposeCTableFunc;
    GetCTableFunc m_GetCTableFunc;
    AllocCursorFunc m_AllocCursorFunc;
    SetStdCProcsFunc m_SetStdCProcsFunc;
    GetMaxDeviceFunc m_GetMaxDeviceFunc;
    GetCTSeedFunc m_GetCTSeedFunc;
    GetDeviceListFunc m_GetDeviceListFunc;
    GetMainDeviceFunc m_GetMainDeviceFunc;
    GetNextDeviceFunc m_GetNextDeviceFunc;
    TestDeviceAttributeFunc m_TestDeviceAttributeFunc;
    SetDeviceAttributeFunc m_SetDeviceAttributeFunc;
    InitGDeviceFunc m_InitGDeviceFunc;
    NewGDeviceFunc m_NewGDeviceFunc;
    DisposeGDeviceFunc m_DisposeGDeviceFunc;
    SetGDeviceFunc m_SetGDeviceFunc;
    GetGDeviceFunc m_GetGDeviceFunc;
    Color2IndexFunc m_Color2IndexFunc;
    Index2ColorFunc m_Index2ColorFunc;
    InvertColorFunc m_InvertColorFunc;
    RealColorFunc m_RealColorFunc;
    GetSubTableFunc m_GetSubTableFunc;
    AddSearchFunc m_AddSearchFunc;
    AddCompFunc m_AddCompFunc;
    DelSearchFunc m_DelSearchFunc;
    DelCompFunc m_DelCompFunc;
    SetClientIDFunc m_SetClientIDFunc;
    ProtectEntryFunc m_ProtectEntryFunc;
    ReserveEntryFunc m_ReserveEntryFunc;
    SetEntriesFunc m_SetEntriesFunc;
    QDErrorFunc m_QDErrorFunc;
    CopyDeepMaskFunc m_CopyDeepMaskFunc;
    GetMaskTableFunc m_GetMaskTableFunc;
    GetPatternFunc m_GetPatternFunc;
    GetPictureFunc m_GetPictureFunc;
    DeltaPointFunc m_DeltaPointFunc;
    ShieldCursorFunc m_ShieldCursorFunc;
    ScreenResFunc m_ScreenResFunc;
    GetIndPatternFunc m_GetIndPatternFunc;
    deltapointFunc m_deltapointFunc;
    PackBitsFunc m_PackBitsFunc;
    UnpackBitsFunc m_UnpackBitsFunc;
    SlopeFromAngleFunc m_SlopeFromAngleFunc;
    AngleFromSlopeFunc m_AngleFromSlopeFunc;
    OpenCursorComponentFunc m_OpenCursorComponentFunc;
    CloseCursorComponentFunc m_CloseCursorComponentFunc;
    SetCursorComponentFunc m_SetCursorComponentFunc;
    CursorComponentChangedFunc m_CursorComponentChangedFunc;
    CursorComponentSetDataFunc m_CursorComponentSetDataFunc;
    CWMatchPixMapFunc m_CWMatchPixMapFunc;
    CWCheckPixMapFunc m_CWCheckPixMapFunc;
    NCMBeginMatchingFunc m_NCMBeginMatchingFunc;
    CMEndMatchingFunc m_CMEndMatchingFunc;
    NCMDrawMatchedPictureFunc m_NCMDrawMatchedPictureFunc;
    CMEnableMatchingCommentFunc m_CMEnableMatchingCommentFunc;
    NCMUseProfileCommentFunc m_NCMUseProfileCommentFunc;
    IsValidPortFunc m_IsValidPortFunc;
    IsValidRgnHandleFunc m_IsValidRgnHandleFunc;
    GetPortPixMapFunc m_GetPortPixMapFunc;
    GetPortBitMapForCopyBitsFunc m_GetPortBitMapForCopyBitsFunc;
    GetPortBoundsFunc m_GetPortBoundsFunc;
    GetPortForeColorFunc m_GetPortForeColorFunc;
    GetPortBackColorFunc m_GetPortBackColorFunc;
    GetPortOpColorFunc m_GetPortOpColorFunc;
    GetPortHiliteColorFunc m_GetPortHiliteColorFunc;
    GetPortGrafProcsFunc m_GetPortGrafProcsFunc;
    GetPortTextFontFunc m_GetPortTextFontFunc;
    GetPortTextFaceFunc m_GetPortTextFaceFunc;
    GetPortTextModeFunc m_GetPortTextModeFunc;
    GetPortTextSizeFunc m_GetPortTextSizeFunc;
    GetPortChExtraFunc m_GetPortChExtraFunc;
    GetPortFracHPenLocationFunc m_GetPortFracHPenLocationFunc;
    GetPortSpExtraFunc m_GetPortSpExtraFunc;
    GetPortPenVisibilityFunc m_GetPortPenVisibilityFunc;
    GetPortVisibleRegionFunc m_GetPortVisibleRegionFunc;
    GetPortClipRegionFunc m_GetPortClipRegionFunc;
    GetPortBackPixPatFunc m_GetPortBackPixPatFunc;
    GetPortPenPixPatFunc m_GetPortPenPixPatFunc;
    GetPortFillPixPatFunc m_GetPortFillPixPatFunc;
    GetPortPenSizeFunc m_GetPortPenSizeFunc;
    GetPortPenModeFunc m_GetPortPenModeFunc;
    GetPortPenLocationFunc m_GetPortPenLocationFunc;
    IsPortRegionBeingDefinedFunc m_IsPortRegionBeingDefinedFunc;
    IsPortPictureBeingDefinedFunc m_IsPortPictureBeingDefinedFunc;
    IsPortPolyBeingDefinedFunc m_IsPortPolyBeingDefinedFunc;
    IsPortOffscreenFunc m_IsPortOffscreenFunc;
    IsPortColorFunc m_IsPortColorFunc;
    IsPortVisibleRegionEmptyFunc m_IsPortVisibleRegionEmptyFunc;
    IsPortClipRegionEmptyFunc m_IsPortClipRegionEmptyFunc;
    SectRegionWithPortClipRegionFunc m_SectRegionWithPortClipRegionFunc;
    SectRegionWithPortVisibleRegionFunc m_SectRegionWithPortVisibleRegionFunc;
    SwapPortPicSaveHandleFunc m_SwapPortPicSaveHandleFunc;
    SwapPortPolySaveHandleFunc m_SwapPortPolySaveHandleFunc;
    SwapPortRegionSaveHandleFunc m_SwapPortRegionSaveHandleFunc;
    SetPortBoundsFunc m_SetPortBoundsFunc;
    SetPortOpColorFunc m_SetPortOpColorFunc;
    SetPortGrafProcsFunc m_SetPortGrafProcsFunc;
    SetPortTextFontFunc m_SetPortTextFontFunc;
    SetPortTextSizeFunc m_SetPortTextSizeFunc;
    SetPortTextFaceFunc m_SetPortTextFaceFunc;
    SetPortTextModeFunc m_SetPortTextModeFunc;
    SetPortVisibleRegionFunc m_SetPortVisibleRegionFunc;
    SetPortClipRegionFunc m_SetPortClipRegionFunc;
    SetPortPenPixPatFunc m_SetPortPenPixPatFunc;
    SetPortFillPixPatFunc m_SetPortFillPixPatFunc;
    SetPortBackPixPatFunc m_SetPortBackPixPatFunc;
    SetPortPenSizeFunc m_SetPortPenSizeFunc;
    SetPortPenModeFunc m_SetPortPenModeFunc;
    SetPortFracHPenLocationFunc m_SetPortFracHPenLocationFunc;
    GetPixBoundsFunc m_GetPixBoundsFunc;
    GetPixDepthFunc m_GetPixDepthFunc;
    GetQDGlobalsRandomSeedFunc m_GetQDGlobalsRandomSeedFunc;
    GetQDGlobalsScreenBitsFunc m_GetQDGlobalsScreenBitsFunc;
    GetQDGlobalsDarkGrayFunc m_GetQDGlobalsDarkGrayFunc;
    GetQDGlobalsLightGrayFunc m_GetQDGlobalsLightGrayFunc;
    GetQDGlobalsGrayFunc m_GetQDGlobalsGrayFunc;
    GetQDGlobalsBlackFunc m_GetQDGlobalsBlackFunc;
    GetQDGlobalsWhiteFunc m_GetQDGlobalsWhiteFunc;
    GetQDGlobalsThePortFunc m_GetQDGlobalsThePortFunc;
    SetQDGlobalsRandomSeedFunc m_SetQDGlobalsRandomSeedFunc;
    GetRegionBoundsFunc m_GetRegionBoundsFunc;
    IsRegionRectangularFunc m_IsRegionRectangularFunc;
    CreateNewPortFunc m_CreateNewPortFunc;
    DisposePortFunc m_DisposePortFunc;
    SetQDErrorFunc m_SetQDErrorFunc;
    QDLocalToGlobalPointFunc m_QDLocalToGlobalPointFunc;
    QDGlobalToLocalPointFunc m_QDGlobalToLocalPointFunc;
    QDLocalToGlobalRectFunc m_QDLocalToGlobalRectFunc;
    QDGlobalToLocalRectFunc m_QDGlobalToLocalRectFunc;
    QDLocalToGlobalRegionFunc m_QDLocalToGlobalRegionFunc;
    QDGlobalToLocalRegionFunc m_QDGlobalToLocalRegionFunc;
    QDIsPortBufferedFunc m_QDIsPortBufferedFunc;
    QDIsPortBufferDirtyFunc m_QDIsPortBufferDirtyFunc;
    QDFlushPortBufferFunc m_QDFlushPortBufferFunc;
    QDGetDirtyRegionFunc m_QDGetDirtyRegionFunc;
    QDSetDirtyRegionFunc m_QDSetDirtyRegionFunc;
    QDAddRectToDirtyRegionFunc m_QDAddRectToDirtyRegionFunc;
    QDAddRegionToDirtyRegionFunc m_QDAddRegionToDirtyRegionFunc;
    CreateCGContextForPortFunc m_CreateCGContextForPortFunc;
    ClipCGContextToRegionFunc m_ClipCGContextToRegionFunc;
    SyncCGContextOriginWithPortFunc m_SyncCGContextOriginWithPortFunc;
    QDBeginCGContextFunc m_QDBeginCGContextFunc;
    QDEndCGContextFunc m_QDEndCGContextFunc;
    CreateNewPortForCGDisplayIDFunc m_CreateNewPortForCGDisplayIDFunc;
    QDDisplayWaitCursorFunc m_QDDisplayWaitCursorFunc;
    QDSetPatternOriginFunc m_QDSetPatternOriginFunc;
    QDGetPatternOriginFunc m_QDGetPatternOriginFunc;
    QDIsNamedPixMapCursorRegisteredFunc m_QDIsNamedPixMapCursorRegisteredFunc;
    QDRegisterNamedPixMapCursorFunc m_QDRegisterNamedPixMapCursorFunc;
    QDUnregisterNamedPixMapCursurFunc m_QDUnregisterNamedPixMapCursurFunc;
    QDUnregisterNamedPixMapCursorFunc m_QDUnregisterNamedPixMapCursorFunc;
    QDSetNamedPixMapCursorFunc m_QDSetNamedPixMapCursorFunc;
    QDSetCursorScaleFunc m_QDSetCursorScaleFunc;
    QDGetCursorScaleFunc m_QDGetCursorScaleFunc;
    QDGetCursorDataFunc m_QDGetCursorDataFunc;
    QDSwapTextFlagsFunc m_QDSwapTextFlagsFunc;
    QDSwapPortTextFlagsFunc m_QDSwapPortTextFlagsFunc;
    QDGetCGDirectDisplayIDFunc m_QDGetCGDirectDisplayIDFunc;
    LMGetScrVResFunc m_LMGetScrVResFunc;
    LMSetScrVResFunc m_LMSetScrVResFunc;
    LMGetScrHResFunc m_LMGetScrHResFunc;
    LMSetScrHResFunc m_LMSetScrHResFunc;
    LMGetMainDeviceFunc m_LMGetMainDeviceFunc;
    LMSetMainDeviceFunc m_LMSetMainDeviceFunc;
    LMGetDeviceListFunc m_LMGetDeviceListFunc;
    LMSetDeviceListFunc m_LMSetDeviceListFunc;
    LMGetQDColorsFunc m_LMGetQDColorsFunc;
    LMSetQDColorsFunc m_LMSetQDColorsFunc;
    LMGetWidthListHandFunc m_LMGetWidthListHandFunc;
    LMSetWidthListHandFunc m_LMSetWidthListHandFunc;
    LMGetHiliteModeFunc m_LMGetHiliteModeFunc;
    LMSetHiliteModeFunc m_LMSetHiliteModeFunc;
    LMGetWidthPtrFunc m_LMGetWidthPtrFunc;
    LMSetWidthPtrFunc m_LMSetWidthPtrFunc;
    LMGetWidthTabHandleFunc m_LMGetWidthTabHandleFunc;
    LMSetWidthTabHandleFunc m_LMSetWidthTabHandleFunc;
    LMGetLastSPExtraFunc m_LMGetLastSPExtraFunc;
    LMSetLastSPExtraFunc m_LMSetLastSPExtraFunc;
    LMGetLastFONDFunc m_LMGetLastFONDFunc;
    LMSetLastFONDFunc m_LMSetLastFONDFunc;
    LMGetFractEnableFunc m_LMGetFractEnableFunc;
    LMSetFractEnableFunc m_LMSetFractEnableFunc;
    LMGetTheGDeviceFunc m_LMGetTheGDeviceFunc;
    LMSetTheGDeviceFunc m_LMSetTheGDeviceFunc;
    LMGetHiliteRGBFunc m_LMGetHiliteRGBFunc;
    LMSetHiliteRGBFunc m_LMSetHiliteRGBFunc;
    LMGetCursorNewFunc m_LMGetCursorNewFunc;
    LMSetCursorNewFunc m_LMSetCursorNewFunc;
};
QuickDrawAPIWrapper s_wrapper;
#ifdef __cplusplus
extern "C" {
#endif
CMBitmapCallBackUPP fakeQD_NewCMBitmapCallBackUPP(CMBitmapCallBackProcPtr a0)
{
    return s_wrapper.fakeQD_NewCMBitmapCallBackUPP(a0);
}
void fakeQD_DisposeCMBitmapCallBackUPP(CMBitmapCallBackUPP a0)
{
    s_wrapper.fakeQD_DisposeCMBitmapCallBackUPP(a0);
}
Boolean fakeQD_InvokeCMBitmapCallBackUPP(long a0, void * a1, CMBitmapCallBackUPP a2)
{
    return s_wrapper.fakeQD_InvokeCMBitmapCallBackUPP(a0, a1, a2);
}
RegionToRectsUPP fakeQD_NewRegionToRectsUPP(RegionToRectsProcPtr a0)
{
    return s_wrapper.fakeQD_NewRegionToRectsUPP(a0);
}
void fakeQD_DisposeRegionToRectsUPP(RegionToRectsUPP a0)
{
    s_wrapper.fakeQD_DisposeRegionToRectsUPP(a0);
}
OSStatus fakeQD_InvokeRegionToRectsUPP(UInt16 a0, RgnHandle a1, const Rect * a2, void * a3, RegionToRectsUPP a4)
{
    return s_wrapper.fakeQD_InvokeRegionToRectsUPP(a0, a1, a2, a3, a4);
}
OSStatus fakeQD_QDRegionToRects(RgnHandle a0, QDRegionParseDirection a1, RegionToRectsUPP a2, void * a3)
{
    return s_wrapper.fakeQD_QDRegionToRects(a0, a1, a2, a3);
}
OSErr fakeQD_LockPortBits(GrafPtr a0)
{
    return s_wrapper.fakeQD_LockPortBits(a0);
}
OSErr fakeQD_UnlockPortBits(GrafPtr a0)
{
    return s_wrapper.fakeQD_UnlockPortBits(a0);
}
void fakeQD_MacSetPort(GrafPtr a0)
{
    s_wrapper.fakeQD_MacSetPort(a0);
}
void fakeQD_GetPort(GrafPtr * a0)
{
    s_wrapper.fakeQD_GetPort(a0);
}
Boolean fakeQD_QDSwapPort(CGrafPtr a0, CGrafPtr * a1)
{
    return s_wrapper.fakeQD_QDSwapPort(a0, a1);
}
void fakeQD_GrafDevice(short a0)
{
    s_wrapper.fakeQD_GrafDevice(a0);
}
void fakeQD_SetPortBits(const BitMap * a0)
{
    s_wrapper.fakeQD_SetPortBits(a0);
}
void fakeQD_PortSize(short a0, short a1)
{
    s_wrapper.fakeQD_PortSize(a0, a1);
}
void fakeQD_MovePortTo(short a0, short a1)
{
    s_wrapper.fakeQD_MovePortTo(a0, a1);
}
void fakeQD_SetOrigin(short a0, short a1)
{
    s_wrapper.fakeQD_SetOrigin(a0, a1);
}
void fakeQD_SetClip(RgnHandle a0)
{
    s_wrapper.fakeQD_SetClip(a0);
}
void fakeQD_GetClip(RgnHandle a0)
{
    s_wrapper.fakeQD_GetClip(a0);
}
void fakeQD_ClipRect(const Rect * a0)
{
    s_wrapper.fakeQD_ClipRect(a0);
}
void fakeQD_BackPat(const Pattern * a0)
{
    s_wrapper.fakeQD_BackPat(a0);
}
void fakeQD_InitCursor()
{
    s_wrapper.fakeQD_InitCursor();
}
void fakeQD_HideCursor()
{
    s_wrapper.fakeQD_HideCursor();
}
void fakeQD_MacShowCursor()
{
    s_wrapper.fakeQD_MacShowCursor();
}
void fakeQD_ObscureCursor()
{
    s_wrapper.fakeQD_ObscureCursor();
}
void fakeQD_HidePen()
{
    s_wrapper.fakeQD_HidePen();
}
void fakeQD_ShowPen()
{
    s_wrapper.fakeQD_ShowPen();
}
void fakeQD_GetPen(Point * a0)
{
    s_wrapper.fakeQD_GetPen(a0);
}
void fakeQD_PenSize(short a0, short a1)
{
    s_wrapper.fakeQD_PenSize(a0, a1);
}
void fakeQD_PenMode(short a0)
{
    s_wrapper.fakeQD_PenMode(a0);
}
void fakeQD_PenPat(const Pattern * a0)
{
    s_wrapper.fakeQD_PenPat(a0);
}
void fakeQD_PenNormal()
{
    s_wrapper.fakeQD_PenNormal();
}
void fakeQD_MoveTo(short a0, short a1)
{
    s_wrapper.fakeQD_MoveTo(a0, a1);
}
void fakeQD_Move(short a0, short a1)
{
    s_wrapper.fakeQD_Move(a0, a1);
}
void fakeQD_MacLineTo(short a0, short a1)
{
    s_wrapper.fakeQD_MacLineTo(a0, a1);
}
void fakeQD_Line(short a0, short a1)
{
    s_wrapper.fakeQD_Line(a0, a1);
}
void fakeQD_ForeColor(long a0)
{
    s_wrapper.fakeQD_ForeColor(a0);
}
void fakeQD_BackColor(long a0)
{
    s_wrapper.fakeQD_BackColor(a0);
}
void fakeQD_ColorBit(short a0)
{
    s_wrapper.fakeQD_ColorBit(a0);
}
void fakeQD_MacSetRect(Rect * a0, short a1, short a2, short a3, short a4)
{
    s_wrapper.fakeQD_MacSetRect(a0, a1, a2, a3, a4);
}
void fakeQD_MacOffsetRect(Rect * a0, short a1, short a2)
{
    s_wrapper.fakeQD_MacOffsetRect(a0, a1, a2);
}
void fakeQD_MacInsetRect(Rect * a0, short a1, short a2)
{
    s_wrapper.fakeQD_MacInsetRect(a0, a1, a2);
}
Boolean fakeQD_SectRect(const Rect * a0, const Rect * a1, Rect * a2)
{
    return s_wrapper.fakeQD_SectRect(a0, a1, a2);
}
void fakeQD_MacUnionRect(const Rect * a0, const Rect * a1, Rect * a2)
{
    s_wrapper.fakeQD_MacUnionRect(a0, a1, a2);
}
Boolean fakeQD_MacEqualRect(const Rect * a0, const Rect * a1)
{
    return s_wrapper.fakeQD_MacEqualRect(a0, a1);
}
Boolean fakeQD_EmptyRect(const Rect * a0)
{
    return s_wrapper.fakeQD_EmptyRect(a0);
}
void fakeQD_MacFrameRect(const Rect * a0)
{
    s_wrapper.fakeQD_MacFrameRect(a0);
}
void fakeQD_PaintRect(const Rect * a0)
{
    s_wrapper.fakeQD_PaintRect(a0);
}
void fakeQD_EraseRect(const Rect * a0)
{
    s_wrapper.fakeQD_EraseRect(a0);
}
void fakeQD_MacInvertRect(const Rect * a0)
{
    s_wrapper.fakeQD_MacInvertRect(a0);
}
void fakeQD_MacFillRect(const Rect * a0, const Pattern * a1)
{
    s_wrapper.fakeQD_MacFillRect(a0, a1);
}
void fakeQD_FrameOval(const Rect * a0)
{
    s_wrapper.fakeQD_FrameOval(a0);
}
void fakeQD_PaintOval(const Rect * a0)
{
    s_wrapper.fakeQD_PaintOval(a0);
}
void fakeQD_EraseOval(const Rect * a0)
{
    s_wrapper.fakeQD_EraseOval(a0);
}
void fakeQD_InvertOval(const Rect * a0)
{
    s_wrapper.fakeQD_InvertOval(a0);
}
void fakeQD_FillOval(const Rect * a0, const Pattern * a1)
{
    s_wrapper.fakeQD_FillOval(a0, a1);
}
void fakeQD_FrameRoundRect(const Rect * a0, short a1, short a2)
{
    s_wrapper.fakeQD_FrameRoundRect(a0, a1, a2);
}
void fakeQD_PaintRoundRect(const Rect * a0, short a1, short a2)
{
    s_wrapper.fakeQD_PaintRoundRect(a0, a1, a2);
}
void fakeQD_EraseRoundRect(const Rect * a0, short a1, short a2)
{
    s_wrapper.fakeQD_EraseRoundRect(a0, a1, a2);
}
void fakeQD_InvertRoundRect(const Rect * a0, short a1, short a2)
{
    s_wrapper.fakeQD_InvertRoundRect(a0, a1, a2);
}
void fakeQD_FillRoundRect(const Rect * a0, short a1, short a2, const Pattern * a3)
{
    s_wrapper.fakeQD_FillRoundRect(a0, a1, a2, a3);
}
void fakeQD_FrameArc(const Rect * a0, short a1, short a2)
{
    s_wrapper.fakeQD_FrameArc(a0, a1, a2);
}
void fakeQD_PaintArc(const Rect * a0, short a1, short a2)
{
    s_wrapper.fakeQD_PaintArc(a0, a1, a2);
}
void fakeQD_EraseArc(const Rect * a0, short a1, short a2)
{
    s_wrapper.fakeQD_EraseArc(a0, a1, a2);
}
void fakeQD_InvertArc(const Rect * a0, short a1, short a2)
{
    s_wrapper.fakeQD_InvertArc(a0, a1, a2);
}
void fakeQD_FillArc(const Rect * a0, short a1, short a2, const Pattern * a3)
{
    s_wrapper.fakeQD_FillArc(a0, a1, a2, a3);
}
RgnHandle fakeQD_NewRgn()
{
    return s_wrapper.fakeQD_NewRgn();
}
void fakeQD_OpenRgn()
{
    s_wrapper.fakeQD_OpenRgn();
}
void fakeQD_CloseRgn(RgnHandle a0)
{
    s_wrapper.fakeQD_CloseRgn(a0);
}
OSErr fakeQD_BitMapToRegion(RgnHandle a0, const BitMap * a1)
{
    return s_wrapper.fakeQD_BitMapToRegion(a0, a1);
}
void fakeQD_RgnToHandle(RgnHandle a0, Handle a1)
{
    s_wrapper.fakeQD_RgnToHandle(a0, a1);
}
void fakeQD_HandleToRgn(Handle a0, RgnHandle a1)
{
    s_wrapper.fakeQD_HandleToRgn(a0, a1);
}
void fakeQD_DisposeRgn(RgnHandle a0)
{
    s_wrapper.fakeQD_DisposeRgn(a0);
}
void fakeQD_MacCopyRgn(RgnHandle a0, RgnHandle a1)
{
    s_wrapper.fakeQD_MacCopyRgn(a0, a1);
}
void fakeQD_SetEmptyRgn(RgnHandle a0)
{
    s_wrapper.fakeQD_SetEmptyRgn(a0);
}
void fakeQD_MacSetRectRgn(RgnHandle a0, short a1, short a2, short a3, short a4)
{
    s_wrapper.fakeQD_MacSetRectRgn(a0, a1, a2, a3, a4);
}
void fakeQD_RectRgn(RgnHandle a0, const Rect * a1)
{
    s_wrapper.fakeQD_RectRgn(a0, a1);
}
void fakeQD_MacOffsetRgn(RgnHandle a0, short a1, short a2)
{
    s_wrapper.fakeQD_MacOffsetRgn(a0, a1, a2);
}
void fakeQD_InsetRgn(RgnHandle a0, short a1, short a2)
{
    s_wrapper.fakeQD_InsetRgn(a0, a1, a2);
}
void fakeQD_SectRgn(RgnHandle a0, RgnHandle a1, RgnHandle a2)
{
    s_wrapper.fakeQD_SectRgn(a0, a1, a2);
}
void fakeQD_MacUnionRgn(RgnHandle a0, RgnHandle a1, RgnHandle a2)
{
    s_wrapper.fakeQD_MacUnionRgn(a0, a1, a2);
}
void fakeQD_DiffRgn(RgnHandle a0, RgnHandle a1, RgnHandle a2)
{
    s_wrapper.fakeQD_DiffRgn(a0, a1, a2);
}
void fakeQD_MacXorRgn(RgnHandle a0, RgnHandle a1, RgnHandle a2)
{
    s_wrapper.fakeQD_MacXorRgn(a0, a1, a2);
}
Boolean fakeQD_RectInRgn(const Rect * a0, RgnHandle a1)
{
    return s_wrapper.fakeQD_RectInRgn(a0, a1);
}
Boolean fakeQD_MacEqualRgn(RgnHandle a0, RgnHandle a1)
{
    return s_wrapper.fakeQD_MacEqualRgn(a0, a1);
}
Boolean fakeQD_EmptyRgn(RgnHandle a0)
{
    return s_wrapper.fakeQD_EmptyRgn(a0);
}
void fakeQD_MacFrameRgn(RgnHandle a0)
{
    s_wrapper.fakeQD_MacFrameRgn(a0);
}
void fakeQD_MacPaintRgn(RgnHandle a0)
{
    s_wrapper.fakeQD_MacPaintRgn(a0);
}
void fakeQD_EraseRgn(RgnHandle a0)
{
    s_wrapper.fakeQD_EraseRgn(a0);
}
void fakeQD_MacInvertRgn(RgnHandle a0)
{
    s_wrapper.fakeQD_MacInvertRgn(a0);
}
void fakeQD_MacFillRgn(RgnHandle a0, const Pattern * a1)
{
    s_wrapper.fakeQD_MacFillRgn(a0, a1);
}
void fakeQD_ScrollRect(const Rect * a0, short a1, short a2, RgnHandle a3)
{
    s_wrapper.fakeQD_ScrollRect(a0, a1, a2, a3);
}
void fakeQD_CopyBits(const BitMap * a0, const BitMap * a1, const Rect * a2, const Rect * a3, short a4, RgnHandle a5)
{
    s_wrapper.fakeQD_CopyBits(a0, a1, a2, a3, a4, a5);
}
void fakeQD_SeedFill(const void * a0, void * a1, short a2, short a3, short a4, short a5, short a6, short a7)
{
    s_wrapper.fakeQD_SeedFill(a0, a1, a2, a3, a4, a5, a6, a7);
}
void fakeQD_CalcMask(const void * a0, void * a1, short a2, short a3, short a4, short a5)
{
    s_wrapper.fakeQD_CalcMask(a0, a1, a2, a3, a4, a5);
}
void fakeQD_CopyMask(const BitMap * a0, const BitMap * a1, const BitMap * a2, const Rect * a3, const Rect * a4, const Rect * a5)
{
    s_wrapper.fakeQD_CopyMask(a0, a1, a2, a3, a4, a5);
}
PicHandle fakeQD_OpenPicture(const Rect * a0)
{
    return s_wrapper.fakeQD_OpenPicture(a0);
}
void fakeQD_PicComment(short a0, short a1, Handle a2)
{
    s_wrapper.fakeQD_PicComment(a0, a1, a2);
}
void fakeQD_ClosePicture()
{
    s_wrapper.fakeQD_ClosePicture();
}
Rect * fakeQD_QDGetPictureBounds(PicHandle a0, Rect * a1)
{
    return s_wrapper.fakeQD_QDGetPictureBounds(a0, a1);
}
void fakeQD_DrawPicture(PicHandle a0, const Rect * a1)
{
    s_wrapper.fakeQD_DrawPicture(a0, a1);
}
void fakeQD_KillPicture(PicHandle a0)
{
    s_wrapper.fakeQD_KillPicture(a0);
}
PolyHandle fakeQD_OpenPoly()
{
    return s_wrapper.fakeQD_OpenPoly();
}
void fakeQD_ClosePoly()
{
    s_wrapper.fakeQD_ClosePoly();
}
void fakeQD_KillPoly(PolyHandle a0)
{
    s_wrapper.fakeQD_KillPoly(a0);
}
void fakeQD_OffsetPoly(PolyHandle a0, short a1, short a2)
{
    s_wrapper.fakeQD_OffsetPoly(a0, a1, a2);
}
void fakeQD_FramePoly(PolyHandle a0)
{
    s_wrapper.fakeQD_FramePoly(a0);
}
void fakeQD_PaintPoly(PolyHandle a0)
{
    s_wrapper.fakeQD_PaintPoly(a0);
}
void fakeQD_ErasePoly(PolyHandle a0)
{
    s_wrapper.fakeQD_ErasePoly(a0);
}
void fakeQD_InvertPoly(PolyHandle a0)
{
    s_wrapper.fakeQD_InvertPoly(a0);
}
void fakeQD_FillPoly(PolyHandle a0, const Pattern * a1)
{
    s_wrapper.fakeQD_FillPoly(a0, a1);
}
void fakeQD_SetPt(Point * a0, short a1, short a2)
{
    s_wrapper.fakeQD_SetPt(a0, a1, a2);
}
void fakeQD_LocalToGlobal(Point * a0)
{
    s_wrapper.fakeQD_LocalToGlobal(a0);
}
void fakeQD_GlobalToLocal(Point * a0)
{
    s_wrapper.fakeQD_GlobalToLocal(a0);
}
short fakeQD_Random()
{
    return s_wrapper.fakeQD_Random();
}
void fakeQD_StuffHex(void * a0, ConstStr255Param a1)
{
    s_wrapper.fakeQD_StuffHex(a0, a1);
}
Boolean fakeQD_MacGetPixel(short a0, short a1)
{
    return s_wrapper.fakeQD_MacGetPixel(a0, a1);
}
void fakeQD_ScalePt(Point * a0, const Rect * a1, const Rect * a2)
{
    s_wrapper.fakeQD_ScalePt(a0, a1, a2);
}
void fakeQD_MapPt(Point * a0, const Rect * a1, const Rect * a2)
{
    s_wrapper.fakeQD_MapPt(a0, a1, a2);
}
void fakeQD_MapRect(Rect * a0, const Rect * a1, const Rect * a2)
{
    s_wrapper.fakeQD_MapRect(a0, a1, a2);
}
void fakeQD_MapRgn(RgnHandle a0, const Rect * a1, const Rect * a2)
{
    s_wrapper.fakeQD_MapRgn(a0, a1, a2);
}
void fakeQD_MapPoly(PolyHandle a0, const Rect * a1, const Rect * a2)
{
    s_wrapper.fakeQD_MapPoly(a0, a1, a2);
}
void fakeQD_StdRect(GrafVerb a0, const Rect * a1)
{
    s_wrapper.fakeQD_StdRect(a0, a1);
}
void fakeQD_StdRRect(GrafVerb a0, const Rect * a1, short a2, short a3)
{
    s_wrapper.fakeQD_StdRRect(a0, a1, a2, a3);
}
void fakeQD_StdOval(GrafVerb a0, const Rect * a1)
{
    s_wrapper.fakeQD_StdOval(a0, a1);
}
void fakeQD_StdArc(GrafVerb a0, const Rect * a1, short a2, short a3)
{
    s_wrapper.fakeQD_StdArc(a0, a1, a2, a3);
}
void fakeQD_StdPoly(GrafVerb a0, PolyHandle a1)
{
    s_wrapper.fakeQD_StdPoly(a0, a1);
}
void fakeQD_StdRgn(GrafVerb a0, RgnHandle a1)
{
    s_wrapper.fakeQD_StdRgn(a0, a1);
}
void fakeQD_StdBits(const BitMap * a0, const Rect * a1, const Rect * a2, short a3, RgnHandle a4)
{
    s_wrapper.fakeQD_StdBits(a0, a1, a2, a3, a4);
}
void fakeQD_StdComment(short a0, short a1, Handle a2)
{
    s_wrapper.fakeQD_StdComment(a0, a1, a2);
}
void fakeQD_StdGetPic(void * a0, short a1)
{
    s_wrapper.fakeQD_StdGetPic(a0, a1);
}
void fakeQD_StdPutPic(const void * a0, short a1)
{
    s_wrapper.fakeQD_StdPutPic(a0, a1);
}
void fakeQD_StdOpcode(const Rect * a0, const Rect * a1, UInt16 a2, SInt16 a3)
{
    s_wrapper.fakeQD_StdOpcode(a0, a1, a2, a3);
}
void fakeQD_AddPt(Point a0, Point * a1)
{
    s_wrapper.fakeQD_AddPt(a0, a1);
}
Boolean fakeQD_EqualPt(Point a0, Point a1)
{
    return s_wrapper.fakeQD_EqualPt(a0, a1);
}
Boolean fakeQD_MacPtInRect(Point a0, const Rect * a1)
{
    return s_wrapper.fakeQD_MacPtInRect(a0, a1);
}
void fakeQD_Pt2Rect(Point a0, Point a1, Rect * a2)
{
    s_wrapper.fakeQD_Pt2Rect(a0, a1, a2);
}
void fakeQD_PtToAngle(const Rect * a0, Point a1, short * a2)
{
    s_wrapper.fakeQD_PtToAngle(a0, a1, a2);
}
void fakeQD_SubPt(Point a0, Point * a1)
{
    s_wrapper.fakeQD_SubPt(a0, a1);
}
Boolean fakeQD_PtInRgn(Point a0, RgnHandle a1)
{
    return s_wrapper.fakeQD_PtInRgn(a0, a1);
}
void fakeQD_StdLine(Point a0)
{
    s_wrapper.fakeQD_StdLine(a0);
}
PixMapHandle fakeQD_NewPixMap()
{
    return s_wrapper.fakeQD_NewPixMap();
}
void fakeQD_DisposePixMap(PixMapHandle a0)
{
    s_wrapper.fakeQD_DisposePixMap(a0);
}
void fakeQD_CopyPixMap(PixMapHandle a0, PixMapHandle a1)
{
    s_wrapper.fakeQD_CopyPixMap(a0, a1);
}
PixPatHandle fakeQD_NewPixPat()
{
    return s_wrapper.fakeQD_NewPixPat();
}
void fakeQD_DisposePixPat(PixPatHandle a0)
{
    s_wrapper.fakeQD_DisposePixPat(a0);
}
void fakeQD_CopyPixPat(PixPatHandle a0, PixPatHandle a1)
{
    s_wrapper.fakeQD_CopyPixPat(a0, a1);
}
void fakeQD_PenPixPat(PixPatHandle a0)
{
    s_wrapper.fakeQD_PenPixPat(a0);
}
void fakeQD_BackPixPat(PixPatHandle a0)
{
    s_wrapper.fakeQD_BackPixPat(a0);
}
PixPatHandle fakeQD_GetPixPat(short a0)
{
    return s_wrapper.fakeQD_GetPixPat(a0);
}
void fakeQD_MakeRGBPat(PixPatHandle a0, const RGBColor * a1)
{
    s_wrapper.fakeQD_MakeRGBPat(a0, a1);
}
void fakeQD_FillCRect(const Rect * a0, PixPatHandle a1)
{
    s_wrapper.fakeQD_FillCRect(a0, a1);
}
void fakeQD_FillCOval(const Rect * a0, PixPatHandle a1)
{
    s_wrapper.fakeQD_FillCOval(a0, a1);
}
void fakeQD_FillCRoundRect(const Rect * a0, short a1, short a2, PixPatHandle a3)
{
    s_wrapper.fakeQD_FillCRoundRect(a0, a1, a2, a3);
}
void fakeQD_FillCArc(const Rect * a0, short a1, short a2, PixPatHandle a3)
{
    s_wrapper.fakeQD_FillCArc(a0, a1, a2, a3);
}
void fakeQD_FillCRgn(RgnHandle a0, PixPatHandle a1)
{
    s_wrapper.fakeQD_FillCRgn(a0, a1);
}
void fakeQD_FillCPoly(PolyHandle a0, PixPatHandle a1)
{
    s_wrapper.fakeQD_FillCPoly(a0, a1);
}
void fakeQD_RGBForeColor(const RGBColor * a0)
{
    s_wrapper.fakeQD_RGBForeColor(a0);
}
void fakeQD_RGBBackColor(const RGBColor * a0)
{
    s_wrapper.fakeQD_RGBBackColor(a0);
}
void fakeQD_SetCPixel(short a0, short a1, const RGBColor * a2)
{
    s_wrapper.fakeQD_SetCPixel(a0, a1, a2);
}
void fakeQD_SetPortPix(PixMapHandle a0)
{
    s_wrapper.fakeQD_SetPortPix(a0);
}
void fakeQD_GetCPixel(short a0, short a1, RGBColor * a2)
{
    s_wrapper.fakeQD_GetCPixel(a0, a1, a2);
}
void fakeQD_GetForeColor(RGBColor * a0)
{
    s_wrapper.fakeQD_GetForeColor(a0);
}
void fakeQD_GetBackColor(RGBColor * a0)
{
    s_wrapper.fakeQD_GetBackColor(a0);
}
void fakeQD_SeedCFill(const BitMap * a0, const BitMap * a1, const Rect * a2, const Rect * a3, short a4, short a5, ColorSearchUPP a6, long a7)
{
    s_wrapper.fakeQD_SeedCFill(a0, a1, a2, a3, a4, a5, a6, a7);
}
void fakeQD_CalcCMask(const BitMap * a0, const BitMap * a1, const Rect * a2, const Rect * a3, const RGBColor * a4, ColorSearchUPP a5, long a6)
{
    s_wrapper.fakeQD_CalcCMask(a0, a1, a2, a3, a4, a5, a6);
}
PicHandle fakeQD_OpenCPicture(const OpenCPicParams * a0)
{
    return s_wrapper.fakeQD_OpenCPicture(a0);
}
void fakeQD_OpColor(const RGBColor * a0)
{
    s_wrapper.fakeQD_OpColor(a0);
}
void fakeQD_HiliteColor(const RGBColor * a0)
{
    s_wrapper.fakeQD_HiliteColor(a0);
}
void fakeQD_DisposeCTable(CTabHandle a0)
{
    s_wrapper.fakeQD_DisposeCTable(a0);
}
CTabHandle fakeQD_GetCTable(short a0)
{
    return s_wrapper.fakeQD_GetCTable(a0);
}
void fakeQD_AllocCursor()
{
    s_wrapper.fakeQD_AllocCursor();
}
void fakeQD_SetStdCProcs(CQDProcs * a0)
{
    s_wrapper.fakeQD_SetStdCProcs(a0);
}
GDHandle fakeQD_GetMaxDevice(const Rect * a0)
{
    return s_wrapper.fakeQD_GetMaxDevice(a0);
}
long fakeQD_GetCTSeed()
{
    return s_wrapper.fakeQD_GetCTSeed();
}
GDHandle fakeQD_GetDeviceList()
{
    return s_wrapper.fakeQD_GetDeviceList();
}
GDHandle fakeQD_GetMainDevice()
{
    return s_wrapper.fakeQD_GetMainDevice();
}
GDHandle fakeQD_GetNextDevice(GDHandle a0)
{
    return s_wrapper.fakeQD_GetNextDevice(a0);
}
Boolean fakeQD_TestDeviceAttribute(GDHandle a0, short a1)
{
    return s_wrapper.fakeQD_TestDeviceAttribute(a0, a1);
}
void fakeQD_SetDeviceAttribute(GDHandle a0, short a1, Boolean a2)
{
    s_wrapper.fakeQD_SetDeviceAttribute(a0, a1, a2);
}
void fakeQD_InitGDevice(short a0, long a1, GDHandle a2)
{
    s_wrapper.fakeQD_InitGDevice(a0, a1, a2);
}
GDHandle fakeQD_NewGDevice(short a0, long a1)
{
    return s_wrapper.fakeQD_NewGDevice(a0, a1);
}
void fakeQD_DisposeGDevice(GDHandle a0)
{
    s_wrapper.fakeQD_DisposeGDevice(a0);
}
void fakeQD_SetGDevice(GDHandle a0)
{
    s_wrapper.fakeQD_SetGDevice(a0);
}
GDHandle fakeQD_GetGDevice()
{
    return s_wrapper.fakeQD_GetGDevice();
}
long fakeQD_Color2Index(const RGBColor * a0)
{
    return s_wrapper.fakeQD_Color2Index(a0);
}
void fakeQD_Index2Color(long a0, RGBColor * a1)
{
    s_wrapper.fakeQD_Index2Color(a0, a1);
}
void fakeQD_InvertColor(RGBColor * a0)
{
    s_wrapper.fakeQD_InvertColor(a0);
}
Boolean fakeQD_RealColor(const RGBColor * a0)
{
    return s_wrapper.fakeQD_RealColor(a0);
}
void fakeQD_GetSubTable(CTabHandle a0, short a1, CTabHandle a2)
{
    s_wrapper.fakeQD_GetSubTable(a0, a1, a2);
}
void fakeQD_AddSearch(ColorSearchUPP a0)
{
    s_wrapper.fakeQD_AddSearch(a0);
}
void fakeQD_AddComp(ColorComplementUPP a0)
{
    s_wrapper.fakeQD_AddComp(a0);
}
void fakeQD_DelSearch(ColorSearchUPP a0)
{
    s_wrapper.fakeQD_DelSearch(a0);
}
void fakeQD_DelComp(ColorComplementUPP a0)
{
    s_wrapper.fakeQD_DelComp(a0);
}
void fakeQD_SetClientID(short a0)
{
    s_wrapper.fakeQD_SetClientID(a0);
}
void fakeQD_ProtectEntry(short a0, Boolean a1)
{
    s_wrapper.fakeQD_ProtectEntry(a0, a1);
}
void fakeQD_ReserveEntry(short a0, Boolean a1)
{
    s_wrapper.fakeQD_ReserveEntry(a0, a1);
}
void fakeQD_SetEntries(short a0, short a1, CSpecArray a2)
{
    s_wrapper.fakeQD_SetEntries(a0, a1, a2);
}
short fakeQD_QDError()
{
    return s_wrapper.fakeQD_QDError();
}
void fakeQD_CopyDeepMask(const BitMap * a0, const BitMap * a1, const BitMap * a2, const Rect * a3, const Rect * a4, const Rect * a5, short a6, RgnHandle a7)
{
    s_wrapper.fakeQD_CopyDeepMask(a0, a1, a2, a3, a4, a5, a6, a7);
}
Ptr fakeQD_GetMaskTable()
{
    return s_wrapper.fakeQD_GetMaskTable();
}
PatHandle fakeQD_GetPattern(short a0)
{
    return s_wrapper.fakeQD_GetPattern(a0);
}
PicHandle fakeQD_GetPicture(short a0)
{
    return s_wrapper.fakeQD_GetPicture(a0);
}
long fakeQD_DeltaPoint(Point a0, Point a1)
{
    return s_wrapper.fakeQD_DeltaPoint(a0, a1);
}
void fakeQD_ShieldCursor(const Rect * a0, Point a1)
{
    s_wrapper.fakeQD_ShieldCursor(a0, a1);
}
void fakeQD_ScreenRes(short * a0, short * a1)
{
    s_wrapper.fakeQD_ScreenRes(a0, a1);
}
void fakeQD_GetIndPattern(Pattern * a0, short a1, short a2)
{
    s_wrapper.fakeQD_GetIndPattern(a0, a1, a2);
}
long fakeQD_deltapoint(Point * a0, Point * a1)
{
    return s_wrapper.fakeQD_deltapoint(a0, a1);
}
void fakeQD_PackBits(Ptr * a0, Ptr * a1, short a2)
{
    s_wrapper.fakeQD_PackBits(a0, a1, a2);
}
void fakeQD_UnpackBits(Ptr * a0, Ptr * a1, short a2)
{
    s_wrapper.fakeQD_UnpackBits(a0, a1, a2);
}
Fixed fakeQD_SlopeFromAngle(short a0)
{
    return s_wrapper.fakeQD_SlopeFromAngle(a0);
}
short fakeQD_AngleFromSlope(Fixed a0)
{
    return s_wrapper.fakeQD_AngleFromSlope(a0);
}
OSErr fakeQD_OpenCursorComponent(Component a0, ComponentInstance * a1)
{
    return s_wrapper.fakeQD_OpenCursorComponent(a0, a1);
}
OSErr fakeQD_CloseCursorComponent(ComponentInstance a0)
{
    return s_wrapper.fakeQD_CloseCursorComponent(a0);
}
OSErr fakeQD_SetCursorComponent(ComponentInstance a0)
{
    return s_wrapper.fakeQD_SetCursorComponent(a0);
}
OSErr fakeQD_CursorComponentChanged(ComponentInstance a0)
{
    return s_wrapper.fakeQD_CursorComponentChanged(a0);
}
OSErr fakeQD_CursorComponentSetData(ComponentInstance a0, long a1)
{
    return s_wrapper.fakeQD_CursorComponentSetData(a0, a1);
}
CMError fakeQD_CWMatchPixMap(CMWorldRef a0, PixMap * a1, CMBitmapCallBackUPP a2, void * a3)
{
    return s_wrapper.fakeQD_CWMatchPixMap(a0, a1, a2, a3);
}
CMError fakeQD_CWCheckPixMap(CMWorldRef a0, PixMap * a1, CMBitmapCallBackUPP a2, void * a3, BitMap * a4)
{
    return s_wrapper.fakeQD_CWCheckPixMap(a0, a1, a2, a3, a4);
}
CMError fakeQD_NCMBeginMatching(CMProfileRef a0, CMProfileRef a1, CMMatchRef * a2)
{
    return s_wrapper.fakeQD_NCMBeginMatching(a0, a1, a2);
}
void fakeQD_CMEndMatching(CMMatchRef a0)
{
    s_wrapper.fakeQD_CMEndMatching(a0);
}
void fakeQD_NCMDrawMatchedPicture(PicHandle a0, CMProfileRef a1, Rect * a2)
{
    s_wrapper.fakeQD_NCMDrawMatchedPicture(a0, a1, a2);
}
void fakeQD_CMEnableMatchingComment(Boolean a0)
{
    s_wrapper.fakeQD_CMEnableMatchingComment(a0);
}
CMError fakeQD_NCMUseProfileComment(CMProfileRef a0, UInt32 a1)
{
    return s_wrapper.fakeQD_NCMUseProfileComment(a0, a1);
}
Boolean fakeQD_IsValidPort(CGrafPtr a0)
{
    return s_wrapper.fakeQD_IsValidPort(a0);
}
Boolean fakeQD_IsValidRgnHandle(RgnHandle a0)
{
    return s_wrapper.fakeQD_IsValidRgnHandle(a0);
}
PixMapHandle fakeQD_GetPortPixMap(CGrafPtr a0)
{
    return s_wrapper.fakeQD_GetPortPixMap(a0);
}
const BitMap * fakeQD_GetPortBitMapForCopyBits(CGrafPtr a0)
{
    return s_wrapper.fakeQD_GetPortBitMapForCopyBits(a0);
}
Rect * fakeQD_GetPortBounds(CGrafPtr a0, Rect * a1)
{
    return s_wrapper.fakeQD_GetPortBounds(a0, a1);
}
RGBColor * fakeQD_GetPortForeColor(CGrafPtr a0, RGBColor * a1)
{
    return s_wrapper.fakeQD_GetPortForeColor(a0, a1);
}
RGBColor * fakeQD_GetPortBackColor(CGrafPtr a0, RGBColor * a1)
{
    return s_wrapper.fakeQD_GetPortBackColor(a0, a1);
}
RGBColor * fakeQD_GetPortOpColor(CGrafPtr a0, RGBColor * a1)
{
    return s_wrapper.fakeQD_GetPortOpColor(a0, a1);
}
RGBColor * fakeQD_GetPortHiliteColor(CGrafPtr a0, RGBColor * a1)
{
    return s_wrapper.fakeQD_GetPortHiliteColor(a0, a1);
}
CQDProcsPtr fakeQD_GetPortGrafProcs(CGrafPtr a0)
{
    return s_wrapper.fakeQD_GetPortGrafProcs(a0);
}
short fakeQD_GetPortTextFont(CGrafPtr a0)
{
    return s_wrapper.fakeQD_GetPortTextFont(a0);
}
Style fakeQD_GetPortTextFace(CGrafPtr a0)
{
    return s_wrapper.fakeQD_GetPortTextFace(a0);
}
short fakeQD_GetPortTextMode(CGrafPtr a0)
{
    return s_wrapper.fakeQD_GetPortTextMode(a0);
}
short fakeQD_GetPortTextSize(CGrafPtr a0)
{
    return s_wrapper.fakeQD_GetPortTextSize(a0);
}
short fakeQD_GetPortChExtra(CGrafPtr a0)
{
    return s_wrapper.fakeQD_GetPortChExtra(a0);
}
short fakeQD_GetPortFracHPenLocation(CGrafPtr a0)
{
    return s_wrapper.fakeQD_GetPortFracHPenLocation(a0);
}
Fixed fakeQD_GetPortSpExtra(CGrafPtr a0)
{
    return s_wrapper.fakeQD_GetPortSpExtra(a0);
}
short fakeQD_GetPortPenVisibility(CGrafPtr a0)
{
    return s_wrapper.fakeQD_GetPortPenVisibility(a0);
}
RgnHandle fakeQD_GetPortVisibleRegion(CGrafPtr a0, RgnHandle a1)
{
    return s_wrapper.fakeQD_GetPortVisibleRegion(a0, a1);
}
RgnHandle fakeQD_GetPortClipRegion(CGrafPtr a0, RgnHandle a1)
{
    return s_wrapper.fakeQD_GetPortClipRegion(a0, a1);
}
PixPatHandle fakeQD_GetPortBackPixPat(CGrafPtr a0, PixPatHandle a1)
{
    return s_wrapper.fakeQD_GetPortBackPixPat(a0, a1);
}
PixPatHandle fakeQD_GetPortPenPixPat(CGrafPtr a0, PixPatHandle a1)
{
    return s_wrapper.fakeQD_GetPortPenPixPat(a0, a1);
}
PixPatHandle fakeQD_GetPortFillPixPat(CGrafPtr a0, PixPatHandle a1)
{
    return s_wrapper.fakeQD_GetPortFillPixPat(a0, a1);
}
Point * fakeQD_GetPortPenSize(CGrafPtr a0, Point * a1)
{
    return s_wrapper.fakeQD_GetPortPenSize(a0, a1);
}
SInt32 fakeQD_GetPortPenMode(CGrafPtr a0)
{
    return s_wrapper.fakeQD_GetPortPenMode(a0);
}
Point * fakeQD_GetPortPenLocation(CGrafPtr a0, Point * a1)
{
    return s_wrapper.fakeQD_GetPortPenLocation(a0, a1);
}
Boolean fakeQD_IsPortRegionBeingDefined(CGrafPtr a0)
{
    return s_wrapper.fakeQD_IsPortRegionBeingDefined(a0);
}
Boolean fakeQD_IsPortPictureBeingDefined(CGrafPtr a0)
{
    return s_wrapper.fakeQD_IsPortPictureBeingDefined(a0);
}
Boolean fakeQD_IsPortPolyBeingDefined(CGrafPtr a0)
{
    return s_wrapper.fakeQD_IsPortPolyBeingDefined(a0);
}
Boolean fakeQD_IsPortOffscreen(CGrafPtr a0)
{
    return s_wrapper.fakeQD_IsPortOffscreen(a0);
}
Boolean fakeQD_IsPortColor(CGrafPtr a0)
{
    return s_wrapper.fakeQD_IsPortColor(a0);
}
Boolean fakeQD_IsPortVisibleRegionEmpty(CGrafPtr a0)
{
    return s_wrapper.fakeQD_IsPortVisibleRegionEmpty(a0);
}
Boolean fakeQD_IsPortClipRegionEmpty(CGrafPtr a0)
{
    return s_wrapper.fakeQD_IsPortClipRegionEmpty(a0);
}
void fakeQD_SectRegionWithPortClipRegion(CGrafPtr a0, RgnHandle a1)
{
    s_wrapper.fakeQD_SectRegionWithPortClipRegion(a0, a1);
}
void fakeQD_SectRegionWithPortVisibleRegion(CGrafPtr a0, RgnHandle a1)
{
    s_wrapper.fakeQD_SectRegionWithPortVisibleRegion(a0, a1);
}
Handle fakeQD_SwapPortPicSaveHandle(CGrafPtr a0, Handle a1)
{
    return s_wrapper.fakeQD_SwapPortPicSaveHandle(a0, a1);
}
Handle fakeQD_SwapPortPolySaveHandle(CGrafPtr a0, Handle a1)
{
    return s_wrapper.fakeQD_SwapPortPolySaveHandle(a0, a1);
}
Handle fakeQD_SwapPortRegionSaveHandle(CGrafPtr a0, Handle a1)
{
    return s_wrapper.fakeQD_SwapPortRegionSaveHandle(a0, a1);
}
void fakeQD_SetPortBounds(CGrafPtr a0, const Rect * a1)
{
    s_wrapper.fakeQD_SetPortBounds(a0, a1);
}
void fakeQD_SetPortOpColor(CGrafPtr a0, const RGBColor * a1)
{
    s_wrapper.fakeQD_SetPortOpColor(a0, a1);
}
void fakeQD_SetPortGrafProcs(CGrafPtr a0, CQDProcsPtr a1)
{
    s_wrapper.fakeQD_SetPortGrafProcs(a0, a1);
}
void fakeQD_SetPortTextFont(CGrafPtr a0, short a1)
{
    s_wrapper.fakeQD_SetPortTextFont(a0, a1);
}
void fakeQD_SetPortTextSize(CGrafPtr a0, short a1)
{
    s_wrapper.fakeQD_SetPortTextSize(a0, a1);
}
void fakeQD_SetPortTextFace(CGrafPtr a0, StyleParameter a1)
{
    s_wrapper.fakeQD_SetPortTextFace(a0, a1);
}
void fakeQD_SetPortTextMode(CGrafPtr a0, short a1)
{
    s_wrapper.fakeQD_SetPortTextMode(a0, a1);
}
void fakeQD_SetPortVisibleRegion(CGrafPtr a0, RgnHandle a1)
{
    s_wrapper.fakeQD_SetPortVisibleRegion(a0, a1);
}
void fakeQD_SetPortClipRegion(CGrafPtr a0, RgnHandle a1)
{
    s_wrapper.fakeQD_SetPortClipRegion(a0, a1);
}
void fakeQD_SetPortPenPixPat(CGrafPtr a0, PixPatHandle a1)
{
    s_wrapper.fakeQD_SetPortPenPixPat(a0, a1);
}
void fakeQD_SetPortFillPixPat(CGrafPtr a0, PixPatHandle a1)
{
    s_wrapper.fakeQD_SetPortFillPixPat(a0, a1);
}
void fakeQD_SetPortBackPixPat(CGrafPtr a0, PixPatHandle a1)
{
    s_wrapper.fakeQD_SetPortBackPixPat(a0, a1);
}
void fakeQD_SetPortPenSize(CGrafPtr a0, Point a1)
{
    s_wrapper.fakeQD_SetPortPenSize(a0, a1);
}
void fakeQD_SetPortPenMode(CGrafPtr a0, SInt32 a1)
{
    s_wrapper.fakeQD_SetPortPenMode(a0, a1);
}
void fakeQD_SetPortFracHPenLocation(CGrafPtr a0, short a1)
{
    s_wrapper.fakeQD_SetPortFracHPenLocation(a0, a1);
}
Rect * fakeQD_GetPixBounds(PixMapHandle a0, Rect * a1)
{
    return s_wrapper.fakeQD_GetPixBounds(a0, a1);
}
short fakeQD_GetPixDepth(PixMapHandle a0)
{
    return s_wrapper.fakeQD_GetPixDepth(a0);
}
long fakeQD_GetQDGlobalsRandomSeed()
{
    return s_wrapper.fakeQD_GetQDGlobalsRandomSeed();
}
BitMap * fakeQD_GetQDGlobalsScreenBits(BitMap * a0)
{
    return s_wrapper.fakeQD_GetQDGlobalsScreenBits(a0);
}
Pattern * fakeQD_GetQDGlobalsDarkGray(Pattern * a0)
{
    return s_wrapper.fakeQD_GetQDGlobalsDarkGray(a0);
}
Pattern * fakeQD_GetQDGlobalsLightGray(Pattern * a0)
{
    return s_wrapper.fakeQD_GetQDGlobalsLightGray(a0);
}
Pattern * fakeQD_GetQDGlobalsGray(Pattern * a0)
{
    return s_wrapper.fakeQD_GetQDGlobalsGray(a0);
}
Pattern * fakeQD_GetQDGlobalsBlack(Pattern * a0)
{
    return s_wrapper.fakeQD_GetQDGlobalsBlack(a0);
}
Pattern * fakeQD_GetQDGlobalsWhite(Pattern * a0)
{
    return s_wrapper.fakeQD_GetQDGlobalsWhite(a0);
}
CGrafPtr fakeQD_GetQDGlobalsThePort()
{
    return s_wrapper.fakeQD_GetQDGlobalsThePort();
}
void fakeQD_SetQDGlobalsRandomSeed(long a0)
{
    s_wrapper.fakeQD_SetQDGlobalsRandomSeed(a0);
}
Rect * fakeQD_GetRegionBounds(RgnHandle a0, Rect * a1)
{
    return s_wrapper.fakeQD_GetRegionBounds(a0, a1);
}
Boolean fakeQD_IsRegionRectangular(RgnHandle a0)
{
    return s_wrapper.fakeQD_IsRegionRectangular(a0);
}
CGrafPtr fakeQD_CreateNewPort()
{
    return s_wrapper.fakeQD_CreateNewPort();
}
void fakeQD_DisposePort(CGrafPtr a0)
{
    s_wrapper.fakeQD_DisposePort(a0);
}
void fakeQD_SetQDError(OSErr a0)
{
    s_wrapper.fakeQD_SetQDError(a0);
}
Point * fakeQD_QDLocalToGlobalPoint(CGrafPtr a0, Point * a1)
{
    return s_wrapper.fakeQD_QDLocalToGlobalPoint(a0, a1);
}
Point * fakeQD_QDGlobalToLocalPoint(CGrafPtr a0, Point * a1)
{
    return s_wrapper.fakeQD_QDGlobalToLocalPoint(a0, a1);
}
Rect * fakeQD_QDLocalToGlobalRect(CGrafPtr a0, Rect * a1)
{
    return s_wrapper.fakeQD_QDLocalToGlobalRect(a0, a1);
}
Rect * fakeQD_QDGlobalToLocalRect(CGrafPtr a0, Rect * a1)
{
    return s_wrapper.fakeQD_QDGlobalToLocalRect(a0, a1);
}
RgnHandle fakeQD_QDLocalToGlobalRegion(CGrafPtr a0, RgnHandle a1)
{
    return s_wrapper.fakeQD_QDLocalToGlobalRegion(a0, a1);
}
RgnHandle fakeQD_QDGlobalToLocalRegion(CGrafPtr a0, RgnHandle a1)
{
    return s_wrapper.fakeQD_QDGlobalToLocalRegion(a0, a1);
}
Boolean fakeQD_QDIsPortBuffered(CGrafPtr a0)
{
    return s_wrapper.fakeQD_QDIsPortBuffered(a0);
}
Boolean fakeQD_QDIsPortBufferDirty(CGrafPtr a0)
{
    return s_wrapper.fakeQD_QDIsPortBufferDirty(a0);
}
void fakeQD_QDFlushPortBuffer(CGrafPtr a0, RgnHandle a1)
{
    s_wrapper.fakeQD_QDFlushPortBuffer(a0, a1);
}
OSStatus fakeQD_QDGetDirtyRegion(CGrafPtr a0, RgnHandle a1)
{
    return s_wrapper.fakeQD_QDGetDirtyRegion(a0, a1);
}
OSStatus fakeQD_QDSetDirtyRegion(CGrafPtr a0, RgnHandle a1)
{
    return s_wrapper.fakeQD_QDSetDirtyRegion(a0, a1);
}
OSStatus fakeQD_QDAddRectToDirtyRegion(CGrafPtr a0, const Rect * a1)
{
    return s_wrapper.fakeQD_QDAddRectToDirtyRegion(a0, a1);
}
OSStatus fakeQD_QDAddRegionToDirtyRegion(CGrafPtr a0, RgnHandle a1)
{
    return s_wrapper.fakeQD_QDAddRegionToDirtyRegion(a0, a1);
}
OSStatus fakeQD_CreateCGContextForPort(CGrafPtr a0, CGContextRef * a1)
{
    return s_wrapper.fakeQD_CreateCGContextForPort(a0, a1);
}
OSStatus fakeQD_ClipCGContextToRegion(CGContextRef a0, const Rect * a1, RgnHandle a2)
{
    return s_wrapper.fakeQD_ClipCGContextToRegion(a0, a1, a2);
}
OSStatus fakeQD_SyncCGContextOriginWithPort(CGContextRef a0, CGrafPtr a1)
{
    return s_wrapper.fakeQD_SyncCGContextOriginWithPort(a0, a1);
}
OSStatus fakeQD_QDBeginCGContext(CGrafPtr a0, CGContextRef * a1)
{
    return s_wrapper.fakeQD_QDBeginCGContext(a0, a1);
}
OSStatus fakeQD_QDEndCGContext(CGrafPtr a0, CGContextRef * a1)
{
    return s_wrapper.fakeQD_QDEndCGContext(a0, a1);
}
CGrafPtr fakeQD_CreateNewPortForCGDisplayID(UInt32 a0)
{
    return s_wrapper.fakeQD_CreateNewPortForCGDisplayID(a0);
}
void fakeQD_QDDisplayWaitCursor(Boolean a0)
{
    s_wrapper.fakeQD_QDDisplayWaitCursor(a0);
}
void fakeQD_QDSetPatternOrigin(Point a0)
{
    s_wrapper.fakeQD_QDSetPatternOrigin(a0);
}
void fakeQD_QDGetPatternOrigin(Point * a0)
{
    s_wrapper.fakeQD_QDGetPatternOrigin(a0);
}
Boolean fakeQD_QDIsNamedPixMapCursorRegistered(const char a0)
{
    return s_wrapper.fakeQD_QDIsNamedPixMapCursorRegistered(a0);
}
OSStatus fakeQD_QDRegisterNamedPixMapCursor(PixMapHandle a0, PixMapHandle a1, Point a2, const char a3)
{
    return s_wrapper.fakeQD_QDRegisterNamedPixMapCursor(a0, a1, a2, a3);
}
OSStatus fakeQD_QDUnregisterNamedPixMapCursur(const char a0)
{
    return s_wrapper.fakeQD_QDUnregisterNamedPixMapCursur(a0);
}
OSStatus fakeQD_QDUnregisterNamedPixMapCursor(const char a0)
{
    return s_wrapper.fakeQD_QDUnregisterNamedPixMapCursor(a0);
}
OSStatus fakeQD_QDSetNamedPixMapCursor(const char a0)
{
    return s_wrapper.fakeQD_QDSetNamedPixMapCursor(a0);
}
OSStatus fakeQD_QDSetCursorScale(float a0)
{
    return s_wrapper.fakeQD_QDSetCursorScale(a0);
}
OSStatus fakeQD_QDGetCursorScale(float * a0)
{
    return s_wrapper.fakeQD_QDGetCursorScale(a0);
}
OSStatus fakeQD_QDGetCursorData(Boolean a0, PixMapHandle * a1, Point * a2)
{
    return s_wrapper.fakeQD_QDGetCursorData(a0, a1, a2);
}
UInt32 fakeQD_QDSwapTextFlags(UInt32 a0)
{
    return s_wrapper.fakeQD_QDSwapTextFlags(a0);
}
UInt32 fakeQD_QDSwapPortTextFlags(CGrafPtr a0, UInt32 a1)
{
    return s_wrapper.fakeQD_QDSwapPortTextFlags(a0, a1);
}
CGDirectDisplayID fakeQD_QDGetCGDirectDisplayID(GDHandle a0)
{
    return s_wrapper.fakeQD_QDGetCGDirectDisplayID(a0);
}
SInt16 fakeQD_LMGetScrVRes()
{
    return s_wrapper.fakeQD_LMGetScrVRes();
}
void fakeQD_LMSetScrVRes(SInt16 a0)
{
    s_wrapper.fakeQD_LMSetScrVRes(a0);
}
SInt16 fakeQD_LMGetScrHRes()
{
    return s_wrapper.fakeQD_LMGetScrHRes();
}
void fakeQD_LMSetScrHRes(SInt16 a0)
{
    s_wrapper.fakeQD_LMSetScrHRes(a0);
}
GDHandle fakeQD_LMGetMainDevice()
{
    return s_wrapper.fakeQD_LMGetMainDevice();
}
void fakeQD_LMSetMainDevice(GDHandle a0)
{
    s_wrapper.fakeQD_LMSetMainDevice(a0);
}
GDHandle fakeQD_LMGetDeviceList()
{
    return s_wrapper.fakeQD_LMGetDeviceList();
}
void fakeQD_LMSetDeviceList(GDHandle a0)
{
    s_wrapper.fakeQD_LMSetDeviceList(a0);
}
Handle fakeQD_LMGetQDColors()
{
    return s_wrapper.fakeQD_LMGetQDColors();
}
void fakeQD_LMSetQDColors(Handle a0)
{
    s_wrapper.fakeQD_LMSetQDColors(a0);
}
Handle fakeQD_LMGetWidthListHand()
{
    return s_wrapper.fakeQD_LMGetWidthListHand();
}
void fakeQD_LMSetWidthListHand(Handle a0)
{
    s_wrapper.fakeQD_LMSetWidthListHand(a0);
}
UInt8 fakeQD_LMGetHiliteMode()
{
    return s_wrapper.fakeQD_LMGetHiliteMode();
}
void fakeQD_LMSetHiliteMode(UInt8 a0)
{
    s_wrapper.fakeQD_LMSetHiliteMode(a0);
}
Ptr fakeQD_LMGetWidthPtr()
{
    return s_wrapper.fakeQD_LMGetWidthPtr();
}
void fakeQD_LMSetWidthPtr(Ptr a0)
{
    s_wrapper.fakeQD_LMSetWidthPtr(a0);
}
Handle fakeQD_LMGetWidthTabHandle()
{
    return s_wrapper.fakeQD_LMGetWidthTabHandle();
}
void fakeQD_LMSetWidthTabHandle(Handle a0)
{
    s_wrapper.fakeQD_LMSetWidthTabHandle(a0);
}
SInt32 fakeQD_LMGetLastSPExtra()
{
    return s_wrapper.fakeQD_LMGetLastSPExtra();
}
void fakeQD_LMSetLastSPExtra(SInt32 a0)
{
    s_wrapper.fakeQD_LMSetLastSPExtra(a0);
}
Handle fakeQD_LMGetLastFOND()
{
    return s_wrapper.fakeQD_LMGetLastFOND();
}
void fakeQD_LMSetLastFOND(Handle a0)
{
    s_wrapper.fakeQD_LMSetLastFOND(a0);
}
UInt8 fakeQD_LMGetFractEnable()
{
    return s_wrapper.fakeQD_LMGetFractEnable();
}
void fakeQD_LMSetFractEnable(UInt8 a0)
{
    s_wrapper.fakeQD_LMSetFractEnable(a0);
}
GDHandle fakeQD_LMGetTheGDevice()
{
    return s_wrapper.fakeQD_LMGetTheGDevice();
}
void fakeQD_LMSetTheGDevice(GDHandle a0)
{
    s_wrapper.fakeQD_LMSetTheGDevice(a0);
}
void fakeQD_LMGetHiliteRGB(RGBColor * a0)
{
    s_wrapper.fakeQD_LMGetHiliteRGB(a0);
}
void fakeQD_LMSetHiliteRGB(const RGBColor * a0)
{
    s_wrapper.fakeQD_LMSetHiliteRGB(a0);
}
Boolean fakeQD_LMGetCursorNew()
{
    return s_wrapper.fakeQD_LMGetCursorNew();
}
void fakeQD_LMSetCursorNew(Boolean a0)
{
    s_wrapper.fakeQD_LMSetCursorNew(a0);
}
#ifdef __cplusplus
} // extern "C"
#endif
#endif
