#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.10/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_008.h"
#ifdef __cplusplus
extern "C" {
#endif
uint32_t cppIVRCompositor_IVRCompositor_008_GetLastError(void *linux_side, char *pchBuffer, uint32_t unBufferSize)
{
    uint32_t _ret;
    _ret = ((IVRCompositor*)linux_side)->GetLastError((char *)pchBuffer, (uint32_t)unBufferSize);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_008_SetVSync(void *linux_side, bool bVSync)
{
    ((IVRCompositor*)linux_side)->SetVSync((bool)bVSync);
}

bool cppIVRCompositor_IVRCompositor_008_GetVSync(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->GetVSync();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_008_SetGamma(void *linux_side, float fGamma)
{
    ((IVRCompositor*)linux_side)->SetGamma((float)fGamma);
}

float cppIVRCompositor_IVRCompositor_008_GetGamma(void *linux_side)
{
    float _ret;
    _ret = ((IVRCompositor*)linux_side)->GetGamma();
    return _ret;
}

VRCompositorError cppIVRCompositor_IVRCompositor_008_WaitGetPoses(void *linux_side, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    VRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
    return _ret;
}

VRCompositorError cppIVRCompositor_IVRCompositor_008_Submit(void *linux_side, Hmd_Eye eEye, GraphicsAPIConvention eTextureType, void *pTexture, const VRTextureBounds_t *pBounds, VRSubmitFlags_t nSubmitFlags)
{
    VRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->Submit((vr::Hmd_Eye)eEye, (vr::GraphicsAPIConvention)eTextureType, (void *)pTexture, (const vr::VRTextureBounds_t *)pBounds, (vr::VRSubmitFlags_t)nSubmitFlags);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearLastSubmittedFrame();
}

bool cppIVRCompositor_IVRCompositor_008_GetFrameTiming(void *linux_side, winCompositor_FrameTiming_0910 *pTiming, uint32_t unFramesAgo)
{
    bool _ret;
    Compositor_FrameTiming lin_pTiming;
    if (pTiming)
        struct_Compositor_FrameTiming_0910_win_to_lin(pTiming, &lin_pTiming);
    _ret = ((IVRCompositor*)linux_side)->GetFrameTiming(pTiming ? &lin_pTiming : nullptr, (uint32_t)unFramesAgo);
    if (pTiming)
        struct_Compositor_FrameTiming_0910_lin_to_win(&lin_pTiming, pTiming);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_008_FadeToColor(void *linux_side, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    ((IVRCompositor*)linux_side)->FadeToColor((float)fSeconds, (float)fRed, (float)fGreen, (float)fBlue, (float)fAlpha, (bool)bBackground);
}

void cppIVRCompositor_IVRCompositor_008_FadeGrid(void *linux_side, float fSeconds, bool bFadeIn)
{
    ((IVRCompositor*)linux_side)->FadeGrid((float)fSeconds, (bool)bFadeIn);
}

void cppIVRCompositor_IVRCompositor_008_SetSkyboxOverride(void *linux_side, GraphicsAPIConvention eTextureType, void *pFront, void *pBack, void *pLeft, void *pRight, void *pTop, void *pBottom)
{
    ((IVRCompositor*)linux_side)->SetSkyboxOverride((vr::GraphicsAPIConvention)eTextureType, (void *)pFront, (void *)pBack, (void *)pLeft, (void *)pRight, (void *)pTop, (void *)pBottom);
}

void cppIVRCompositor_IVRCompositor_008_ClearSkyboxOverride(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearSkyboxOverride();
}

void cppIVRCompositor_IVRCompositor_008_CompositorBringToFront(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_008_CompositorGoToBack(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_008_CompositorQuit(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorQuit();
}

bool cppIVRCompositor_IVRCompositor_008_IsFullscreen(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->IsFullscreen();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_008_SetTrackingSpace(void *linux_side, TrackingUniverseOrigin eOrigin)
{
    ((IVRCompositor*)linux_side)->SetTrackingSpace((vr::TrackingUniverseOrigin)eOrigin);
}

TrackingUniverseOrigin cppIVRCompositor_IVRCompositor_008_GetTrackingSpace(void *linux_side)
{
    TrackingUniverseOrigin _ret;
    _ret = ((IVRCompositor*)linux_side)->GetTrackingSpace();
    return _ret;
}

uint32_t cppIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess(void *linux_side)
{
    uint32_t _ret;
    _ret = ((IVRCompositor*)linux_side)->GetCurrentSceneFocusProcess();
    return _ret;
}

bool cppIVRCompositor_IVRCompositor_008_CanRenderScene(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->CanRenderScene();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_008_ShowMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ShowMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_008_HideMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->HideMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_008_CompositorDumpImages(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorDumpImages();
}

float cppIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining(void *linux_side)
{
    float _ret;
    _ret = ((IVRCompositor*)linux_side)->GetFrameTimeRemaining();
    return _ret;
}

uint32_t cppIVRCompositor_IVRCompositor_008_GetLastFrameRenderer(void *linux_side)
{
    uint32_t _ret;
    _ret = ((IVRCompositor*)linux_side)->GetLastFrameRenderer();
    return _ret;
}

#ifdef __cplusplus
}
#endif
