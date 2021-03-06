#include <openvr.h>
void * VRSystemFnPassalong_table[];
void * VRExtendedDisplayFnPassalong_table[];
void * VRTrackedCameraFnPassalong_table[];
void * VRApplicationsFnPassalong_table[];
void * VRChaperoneFnPassalong_table[];
void * VRChaperoneSetupFnPassalong_table[];
void * VRCompositorFnPassalong_table[];
void * VROverlayFnPassalong_table[];
void * VRRenderModelsFnPassalong_table[];
void * VRNotificationsFnPassalong_table[];
void * VRSettingsFnPassalong_table[];
void * VRScreenshotsFnPassalong_table[];
void * VRResourcesFnPassalong_table[];
void __stdcall VRSystemFnPassalong_GetRecommendedRenderTargetSize(uint32_t * pnWidth, uint32_t * pnHeight);
struct vr::HmdMatrix44_t __stdcall VRSystemFnPassalong_GetProjectionMatrix(vr::EVREye eEye, float fNearZ, float fFarZ);
void __stdcall VRSystemFnPassalong_GetProjectionRaw(vr::EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom);
bool __stdcall VRSystemFnPassalong_ComputeDistortion(vr::EVREye eEye, float fU, float fV, struct vr::DistortionCoordinates_t * pDistortionCoordinates);
struct vr::HmdMatrix34_t __stdcall VRSystemFnPassalong_GetEyeToHeadTransform(vr::EVREye eEye);
bool __stdcall VRSystemFnPassalong_GetTimeSinceLastVsync(float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter);
int32_t __stdcall VRSystemFnPassalong_GetD3D9AdapterIndex();
void __stdcall VRSystemFnPassalong_GetDXGIOutputInfo(int32_t * pnAdapterIndex);
bool __stdcall VRSystemFnPassalong_IsDisplayOnDesktop();
bool __stdcall VRSystemFnPassalong_SetDisplayVisibility(bool bIsVisibleOnDesktop);
void __stdcall VRSystemFnPassalong_GetDeviceToAbsoluteTrackingPose(vr::ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, struct vr::TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount);
void __stdcall VRSystemFnPassalong_ResetSeatedZeroPose();
struct vr::HmdMatrix34_t __stdcall VRSystemFnPassalong_GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
struct vr::HmdMatrix34_t __stdcall VRSystemFnPassalong_GetRawZeroPoseToStandingAbsoluteTrackingPose();
uint32_t __stdcall VRSystemFnPassalong_GetSortedTrackedDeviceIndicesOfClass(vr::ETrackedDeviceClass eTrackedDeviceClass, vr::TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, vr::TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex);
vr::EDeviceActivityLevel __stdcall VRSystemFnPassalong_GetTrackedDeviceActivityLevel(vr::TrackedDeviceIndex_t unDeviceId);
void __stdcall VRSystemFnPassalong_ApplyTransform(struct vr::TrackedDevicePose_t * pOutputPose, const struct vr::TrackedDevicePose_t * pTrackedDevicePose, const struct vr::HmdMatrix34_t * pTransform);
vr::TrackedDeviceIndex_t __stdcall VRSystemFnPassalong_GetTrackedDeviceIndexForControllerRole(vr::ETrackedControllerRole unDeviceType);
vr::ETrackedControllerRole __stdcall VRSystemFnPassalong_GetControllerRoleForTrackedDeviceIndex(vr::TrackedDeviceIndex_t unDeviceIndex);
vr::ETrackedDeviceClass __stdcall VRSystemFnPassalong_GetTrackedDeviceClass(vr::TrackedDeviceIndex_t unDeviceIndex);
bool __stdcall VRSystemFnPassalong_IsTrackedDeviceConnected(vr::TrackedDeviceIndex_t unDeviceIndex);
bool __stdcall VRSystemFnPassalong_GetBoolTrackedDeviceProperty(vr::TrackedDeviceIndex_t unDeviceIndex, vr::ETrackedDeviceProperty prop, vr::ETrackedPropertyError * pError);
float __stdcall VRSystemFnPassalong_GetFloatTrackedDeviceProperty(vr::TrackedDeviceIndex_t unDeviceIndex, vr::ETrackedDeviceProperty prop, vr::ETrackedPropertyError * pError);
int32_t __stdcall VRSystemFnPassalong_GetInt32TrackedDeviceProperty(vr::TrackedDeviceIndex_t unDeviceIndex, vr::ETrackedDeviceProperty prop, vr::ETrackedPropertyError * pError);
uint64_t __stdcall VRSystemFnPassalong_GetUint64TrackedDeviceProperty(vr::TrackedDeviceIndex_t unDeviceIndex, vr::ETrackedDeviceProperty prop, vr::ETrackedPropertyError * pError);
struct vr::HmdMatrix34_t __stdcall VRSystemFnPassalong_GetMatrix34TrackedDeviceProperty(vr::TrackedDeviceIndex_t unDeviceIndex, vr::ETrackedDeviceProperty prop, vr::ETrackedPropertyError * pError);
uint32_t __stdcall VRSystemFnPassalong_GetStringTrackedDeviceProperty(vr::TrackedDeviceIndex_t unDeviceIndex, vr::ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, vr::ETrackedPropertyError * pError);
const char * __stdcall VRSystemFnPassalong_GetPropErrorNameFromEnum(vr::ETrackedPropertyError error);
bool __stdcall VRSystemFnPassalong_PollNextEvent(struct vr::VREvent_t * pEvent, uint32_t uncbVREvent);
bool __stdcall VRSystemFnPassalong_PollNextEventWithPose(vr::ETrackingUniverseOrigin eOrigin, struct vr::VREvent_t * pEvent, uint32_t uncbVREvent, vr::TrackedDevicePose_t * pTrackedDevicePose);
const char * __stdcall VRSystemFnPassalong_GetEventTypeNameFromEnum(vr::EVREventType eType);
struct vr::HiddenAreaMesh_t __stdcall VRSystemFnPassalong_GetHiddenAreaMesh(vr::EVREye eEye, vr::EHiddenAreaMeshType type);
bool __stdcall VRSystemFnPassalong_GetControllerState(vr::TrackedDeviceIndex_t unControllerDeviceIndex, vr::VRControllerState_t * pControllerState, uint32_t unControllerStateSize);
bool __stdcall VRSystemFnPassalong_GetControllerStateWithPose(vr::ETrackingUniverseOrigin eOrigin, vr::TrackedDeviceIndex_t unControllerDeviceIndex, vr::VRControllerState_t * pControllerState, uint32_t unControllerStateSize, struct vr::TrackedDevicePose_t * pTrackedDevicePose);
void __stdcall VRSystemFnPassalong_TriggerHapticPulse(vr::TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec);
const char * __stdcall VRSystemFnPassalong_GetButtonIdNameFromEnum(vr::EVRButtonId eButtonId);
const char * __stdcall VRSystemFnPassalong_GetControllerAxisTypeNameFromEnum(vr::EVRControllerAxisType eAxisType);
bool __stdcall VRSystemFnPassalong_CaptureInputFocus();
void __stdcall VRSystemFnPassalong_ReleaseInputFocus();
bool __stdcall VRSystemFnPassalong_IsInputFocusCapturedByAnotherProcess();
uint32_t __stdcall VRSystemFnPassalong_DriverDebugRequest(vr::TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize);
vr::EVRFirmwareError __stdcall VRSystemFnPassalong_PerformFirmwareUpdate(vr::TrackedDeviceIndex_t unDeviceIndex);
void __stdcall VRSystemFnPassalong_AcknowledgeQuit_Exiting();
void __stdcall VRSystemFnPassalong_AcknowledgeQuit_UserPrompt();
void __stdcall VRExtendedDisplayFnPassalong_GetWindowBounds(int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight);
void __stdcall VRExtendedDisplayFnPassalong_GetEyeOutputViewport(vr::EVREye eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight);
void __stdcall VRExtendedDisplayFnPassalong_GetDXGIOutputInfo(int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex);
const char * __stdcall VRTrackedCameraFnPassalong_GetCameraErrorNameFromEnum(vr::EVRTrackedCameraError eCameraError);
vr::EVRTrackedCameraError __stdcall VRTrackedCameraFnPassalong_HasCamera(vr::TrackedDeviceIndex_t nDeviceIndex, bool * pHasCamera);
vr::EVRTrackedCameraError __stdcall VRTrackedCameraFnPassalong_GetCameraFrameSize(vr::TrackedDeviceIndex_t nDeviceIndex, vr::EVRTrackedCameraFrameType eFrameType, uint32_t * pnWidth, uint32_t * pnHeight, uint32_t * pnFrameBufferSize);
vr::EVRTrackedCameraError __stdcall VRTrackedCameraFnPassalong_GetCameraIntrinsics(vr::TrackedDeviceIndex_t nDeviceIndex, vr::EVRTrackedCameraFrameType eFrameType, vr::HmdVector2_t * pFocalLength, vr::HmdVector2_t * pCenter);
vr::EVRTrackedCameraError __stdcall VRTrackedCameraFnPassalong_GetCameraProjection(vr::TrackedDeviceIndex_t nDeviceIndex, vr::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, vr::HmdMatrix44_t * pProjection);
vr::EVRTrackedCameraError __stdcall VRTrackedCameraFnPassalong_AcquireVideoStreamingService(vr::TrackedDeviceIndex_t nDeviceIndex, vr::TrackedCameraHandle_t * pHandle);
vr::EVRTrackedCameraError __stdcall VRTrackedCameraFnPassalong_ReleaseVideoStreamingService(vr::TrackedCameraHandle_t hTrackedCamera);
vr::EVRTrackedCameraError __stdcall VRTrackedCameraFnPassalong_GetVideoStreamFrameBuffer(vr::TrackedCameraHandle_t hTrackedCamera, vr::EVRTrackedCameraFrameType eFrameType, void * pFrameBuffer, uint32_t nFrameBufferSize, vr::CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize);
vr::EVRTrackedCameraError __stdcall VRTrackedCameraFnPassalong_GetVideoStreamTextureSize(vr::TrackedDeviceIndex_t nDeviceIndex, vr::EVRTrackedCameraFrameType eFrameType, vr::VRTextureBounds_t * pTextureBounds, uint32_t * pnWidth, uint32_t * pnHeight);
vr::EVRTrackedCameraError __stdcall VRTrackedCameraFnPassalong_GetVideoStreamTextureD3D11(vr::TrackedCameraHandle_t hTrackedCamera, vr::EVRTrackedCameraFrameType eFrameType, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView, vr::CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize);
vr::EVRTrackedCameraError __stdcall VRTrackedCameraFnPassalong_GetVideoStreamTextureGL(vr::TrackedCameraHandle_t hTrackedCamera, vr::EVRTrackedCameraFrameType eFrameType, vr::glUInt_t * pglTextureId, vr::CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize);
vr::EVRTrackedCameraError __stdcall VRTrackedCameraFnPassalong_ReleaseVideoStreamTextureGL(vr::TrackedCameraHandle_t hTrackedCamera, vr::glUInt_t glTextureId);
vr::EVRApplicationError __stdcall VRApplicationsFnPassalong_AddApplicationManifest(const char * pchApplicationManifestFullPath, bool bTemporary);
vr::EVRApplicationError __stdcall VRApplicationsFnPassalong_RemoveApplicationManifest(const char * pchApplicationManifestFullPath);
bool __stdcall VRApplicationsFnPassalong_IsApplicationInstalled(const char * pchAppKey);
uint32_t __stdcall VRApplicationsFnPassalong_GetApplicationCount();
vr::EVRApplicationError __stdcall VRApplicationsFnPassalong_GetApplicationKeyByIndex(uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen);
vr::EVRApplicationError __stdcall VRApplicationsFnPassalong_GetApplicationKeyByProcessId(uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen);
vr::EVRApplicationError __stdcall VRApplicationsFnPassalong_LaunchApplication(const char * pchAppKey);
vr::EVRApplicationError __stdcall VRApplicationsFnPassalong_LaunchTemplateApplication(const char * pchTemplateAppKey, const char * pchNewAppKey, const struct vr::AppOverrideKeys_t * pKeys, uint32_t unKeys);
vr::EVRApplicationError __stdcall VRApplicationsFnPassalong_LaunchApplicationFromMimeType(const char * pchMimeType, const char * pchArgs);
vr::EVRApplicationError __stdcall VRApplicationsFnPassalong_LaunchDashboardOverlay(const char * pchAppKey);
bool __stdcall VRApplicationsFnPassalong_CancelApplicationLaunch(const char * pchAppKey);
vr::EVRApplicationError __stdcall VRApplicationsFnPassalong_IdentifyApplication(uint32_t unProcessId, const char * pchAppKey);
uint32_t __stdcall VRApplicationsFnPassalong_GetApplicationProcessId(const char * pchAppKey);
const char * __stdcall VRApplicationsFnPassalong_GetApplicationsErrorNameFromEnum(vr::EVRApplicationError error);
uint32_t __stdcall VRApplicationsFnPassalong_GetApplicationPropertyString(const char * pchAppKey, vr::EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, vr::EVRApplicationError * peError);
bool __stdcall VRApplicationsFnPassalong_GetApplicationPropertyBool(const char * pchAppKey, vr::EVRApplicationProperty eProperty, vr::EVRApplicationError * peError);
uint64_t __stdcall VRApplicationsFnPassalong_GetApplicationPropertyUint64(const char * pchAppKey, vr::EVRApplicationProperty eProperty, vr::EVRApplicationError * peError);
vr::EVRApplicationError __stdcall VRApplicationsFnPassalong_SetApplicationAutoLaunch(const char * pchAppKey, bool bAutoLaunch);
bool __stdcall VRApplicationsFnPassalong_GetApplicationAutoLaunch(const char * pchAppKey);
vr::EVRApplicationError __stdcall VRApplicationsFnPassalong_SetDefaultApplicationForMimeType(const char * pchAppKey, const char * pchMimeType);
bool __stdcall VRApplicationsFnPassalong_GetDefaultApplicationForMimeType(const char * pchMimeType, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen);
bool __stdcall VRApplicationsFnPassalong_GetApplicationSupportedMimeTypes(const char * pchAppKey, char * pchMimeTypesBuffer, uint32_t unMimeTypesBuffer);
uint32_t __stdcall VRApplicationsFnPassalong_GetApplicationsThatSupportMimeType(const char * pchMimeType, char * pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer);
uint32_t __stdcall VRApplicationsFnPassalong_GetApplicationLaunchArguments(uint32_t unHandle, char * pchArgs, uint32_t unArgs);
vr::EVRApplicationError __stdcall VRApplicationsFnPassalong_GetStartingApplication(char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen);
vr::EVRApplicationTransitionState __stdcall VRApplicationsFnPassalong_GetTransitionState();
vr::EVRApplicationError __stdcall VRApplicationsFnPassalong_PerformApplicationPrelaunchCheck(const char * pchAppKey);
const char * __stdcall VRApplicationsFnPassalong_GetApplicationsTransitionStateNameFromEnum(vr::EVRApplicationTransitionState state);
bool __stdcall VRApplicationsFnPassalong_IsQuitUserPromptRequested();
vr::EVRApplicationError __stdcall VRApplicationsFnPassalong_LaunchInternalProcess(const char * pchBinaryPath, const char * pchArguments, const char * pchWorkingDirectory);
uint32_t __stdcall VRApplicationsFnPassalong_GetCurrentSceneProcessId();
vr::ChaperoneCalibrationState __stdcall VRChaperoneFnPassalong_GetCalibrationState();
bool __stdcall VRChaperoneFnPassalong_GetPlayAreaSize(float * pSizeX, float * pSizeZ);
bool __stdcall VRChaperoneFnPassalong_GetPlayAreaRect(struct vr::HmdQuad_t * rect);
void __stdcall VRChaperoneFnPassalong_ReloadInfo();
void __stdcall VRChaperoneFnPassalong_SetSceneColor(struct vr::HmdColor_t color);
void __stdcall VRChaperoneFnPassalong_GetBoundsColor(struct vr::HmdColor_t * pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, struct vr::HmdColor_t * pOutputCameraColor);
bool __stdcall VRChaperoneFnPassalong_AreBoundsVisible();
void __stdcall VRChaperoneFnPassalong_ForceBoundsVisible(bool bForce);
bool __stdcall VRChaperoneSetupFnPassalong_CommitWorkingCopy(vr::EChaperoneConfigFile configFile);
void __stdcall VRChaperoneSetupFnPassalong_RevertWorkingCopy();
bool __stdcall VRChaperoneSetupFnPassalong_GetWorkingPlayAreaSize(float * pSizeX, float * pSizeZ);
bool __stdcall VRChaperoneSetupFnPassalong_GetWorkingPlayAreaRect(struct vr::HmdQuad_t * rect);
bool __stdcall VRChaperoneSetupFnPassalong_GetWorkingCollisionBoundsInfo(struct vr::HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount);
bool __stdcall VRChaperoneSetupFnPassalong_GetLiveCollisionBoundsInfo(struct vr::HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount);
bool __stdcall VRChaperoneSetupFnPassalong_GetWorkingSeatedZeroPoseToRawTrackingPose(struct vr::HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose);
bool __stdcall VRChaperoneSetupFnPassalong_GetWorkingStandingZeroPoseToRawTrackingPose(struct vr::HmdMatrix34_t * pmatStandingZeroPoseToRawTrackingPose);
void __stdcall VRChaperoneSetupFnPassalong_SetWorkingPlayAreaSize(float sizeX, float sizeZ);
void __stdcall VRChaperoneSetupFnPassalong_SetWorkingCollisionBoundsInfo(struct vr::HmdQuad_t * pQuadsBuffer, uint32_t unQuadsCount);
void __stdcall VRChaperoneSetupFnPassalong_SetWorkingSeatedZeroPoseToRawTrackingPose(const struct vr::HmdMatrix34_t * pMatSeatedZeroPoseToRawTrackingPose);
void __stdcall VRChaperoneSetupFnPassalong_SetWorkingStandingZeroPoseToRawTrackingPose(const struct vr::HmdMatrix34_t * pMatStandingZeroPoseToRawTrackingPose);
void __stdcall VRChaperoneSetupFnPassalong_ReloadFromDisk(vr::EChaperoneConfigFile configFile);
bool __stdcall VRChaperoneSetupFnPassalong_GetLiveSeatedZeroPoseToRawTrackingPose(struct vr::HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose);
void __stdcall VRChaperoneSetupFnPassalong_SetWorkingCollisionBoundsTagsInfo(uint8_t * pTagsBuffer, uint32_t unTagCount);
bool __stdcall VRChaperoneSetupFnPassalong_GetLiveCollisionBoundsTagsInfo(uint8_t * pTagsBuffer, uint32_t * punTagCount);
bool __stdcall VRChaperoneSetupFnPassalong_SetWorkingPhysicalBoundsInfo(struct vr::HmdQuad_t * pQuadsBuffer, uint32_t unQuadsCount);
bool __stdcall VRChaperoneSetupFnPassalong_GetLivePhysicalBoundsInfo(struct vr::HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount);
bool __stdcall VRChaperoneSetupFnPassalong_ExportLiveToBuffer(char * pBuffer, uint32_t * pnBufferLength);
bool __stdcall VRChaperoneSetupFnPassalong_ImportFromBufferToWorking(const char * pBuffer, uint32_t nImportFlags);
void __stdcall VRCompositorFnPassalong_SetTrackingSpace(vr::ETrackingUniverseOrigin eOrigin);
vr::ETrackingUniverseOrigin __stdcall VRCompositorFnPassalong_GetTrackingSpace();
vr::EVRCompositorError __stdcall VRCompositorFnPassalong_WaitGetPoses(struct vr::TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, struct vr::TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount);
vr::EVRCompositorError __stdcall VRCompositorFnPassalong_GetLastPoses(struct vr::TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, struct vr::TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount);
vr::EVRCompositorError __stdcall VRCompositorFnPassalong_GetLastPoseForTrackedDeviceIndex(vr::TrackedDeviceIndex_t unDeviceIndex, struct vr::TrackedDevicePose_t * pOutputPose, struct vr::TrackedDevicePose_t * pOutputGamePose);
vr::EVRCompositorError __stdcall VRCompositorFnPassalong_Submit(vr::EVREye eEye, const struct vr::Texture_t * pTexture, const struct vr::VRTextureBounds_t * pBounds, vr::EVRSubmitFlags nSubmitFlags);
void __stdcall VRCompositorFnPassalong_ClearLastSubmittedFrame();
void __stdcall VRCompositorFnPassalong_PostPresentHandoff();
bool __stdcall VRCompositorFnPassalong_GetFrameTiming(struct vr::Compositor_FrameTiming * pTiming, uint32_t unFramesAgo);
uint32_t __stdcall VRCompositorFnPassalong_GetFrameTimings(struct vr::Compositor_FrameTiming * pTiming, uint32_t nFrames);
float __stdcall VRCompositorFnPassalong_GetFrameTimeRemaining();
void __stdcall VRCompositorFnPassalong_GetCumulativeStats(struct vr::Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes);
void __stdcall VRCompositorFnPassalong_FadeToColor(float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground);
struct vr::HmdColor_t __stdcall VRCompositorFnPassalong_GetCurrentFadeColor(bool bBackground);
void __stdcall VRCompositorFnPassalong_FadeGrid(float fSeconds, bool bFadeIn);
float __stdcall VRCompositorFnPassalong_GetCurrentGridAlpha();
vr::EVRCompositorError __stdcall VRCompositorFnPassalong_SetSkyboxOverride(const struct vr::Texture_t * pTextures, uint32_t unTextureCount);
void __stdcall VRCompositorFnPassalong_ClearSkyboxOverride();
void __stdcall VRCompositorFnPassalong_CompositorBringToFront();
void __stdcall VRCompositorFnPassalong_CompositorGoToBack();
void __stdcall VRCompositorFnPassalong_CompositorQuit();
bool __stdcall VRCompositorFnPassalong_IsFullscreen();
uint32_t __stdcall VRCompositorFnPassalong_GetCurrentSceneFocusProcess();
uint32_t __stdcall VRCompositorFnPassalong_GetLastFrameRenderer();
bool __stdcall VRCompositorFnPassalong_CanRenderScene();
void __stdcall VRCompositorFnPassalong_ShowMirrorWindow();
void __stdcall VRCompositorFnPassalong_HideMirrorWindow();
bool __stdcall VRCompositorFnPassalong_IsMirrorWindowVisible();
void __stdcall VRCompositorFnPassalong_CompositorDumpImages();
bool __stdcall VRCompositorFnPassalong_ShouldAppRenderWithLowResources();
void __stdcall VRCompositorFnPassalong_ForceInterleavedReprojectionOn(bool bOverride);
void __stdcall VRCompositorFnPassalong_ForceReconnectProcess();
void __stdcall VRCompositorFnPassalong_SuspendRendering(bool bSuspend);
vr::EVRCompositorError __stdcall VRCompositorFnPassalong_GetMirrorTextureD3D11(vr::EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView);
void __stdcall VRCompositorFnPassalong_ReleaseMirrorTextureD3D11(void * pD3D11ShaderResourceView);
vr::EVRCompositorError __stdcall VRCompositorFnPassalong_GetMirrorTextureGL(vr::EVREye eEye, vr::glUInt_t * pglTextureId, vr::glSharedTextureHandle_t * pglSharedTextureHandle);
bool __stdcall VRCompositorFnPassalong_ReleaseSharedGLTexture(vr::glUInt_t glTextureId, vr::glSharedTextureHandle_t glSharedTextureHandle);
void __stdcall VRCompositorFnPassalong_LockGLSharedTextureForAccess(vr::glSharedTextureHandle_t glSharedTextureHandle);
void __stdcall VRCompositorFnPassalong_UnlockGLSharedTextureForAccess(vr::glSharedTextureHandle_t glSharedTextureHandle);
uint32_t __stdcall VRCompositorFnPassalong_GetVulkanInstanceExtensionsRequired(char * pchValue, uint32_t unBufferSize);
uint32_t __stdcall VRCompositorFnPassalong_GetVulkanDeviceExtensionsRequired(struct VkPhysicalDevice_T * pPhysicalDevice, char * pchValue, uint32_t unBufferSize);
vr::EVROverlayError __stdcall VROverlayFnPassalong_FindOverlay(const char * pchOverlayKey, vr::VROverlayHandle_t * pOverlayHandle);
vr::EVROverlayError __stdcall VROverlayFnPassalong_CreateOverlay(const char * pchOverlayKey, const char * pchOverlayFriendlyName, vr::VROverlayHandle_t * pOverlayHandle);
vr::EVROverlayError __stdcall VROverlayFnPassalong_DestroyOverlay(vr::VROverlayHandle_t ulOverlayHandle);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetHighQualityOverlay(vr::VROverlayHandle_t ulOverlayHandle);
vr::VROverlayHandle_t __stdcall VROverlayFnPassalong_GetHighQualityOverlay();
uint32_t __stdcall VROverlayFnPassalong_GetOverlayKey(vr::VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, vr::EVROverlayError * pError);
uint32_t __stdcall VROverlayFnPassalong_GetOverlayName(vr::VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, vr::EVROverlayError * pError);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayImageData(vr::VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight);
const char * __stdcall VROverlayFnPassalong_GetOverlayErrorNameFromEnum(vr::EVROverlayError error);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayRenderingPid(vr::VROverlayHandle_t ulOverlayHandle, uint32_t unPID);
uint32_t __stdcall VROverlayFnPassalong_GetOverlayRenderingPid(vr::VROverlayHandle_t ulOverlayHandle);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayFlag(vr::VROverlayHandle_t ulOverlayHandle, vr::VROverlayFlags eOverlayFlag, bool bEnabled);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayFlag(vr::VROverlayHandle_t ulOverlayHandle, vr::VROverlayFlags eOverlayFlag, bool * pbEnabled);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayColor(vr::VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayColor(vr::VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayAlpha(vr::VROverlayHandle_t ulOverlayHandle, float fAlpha);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayAlpha(vr::VROverlayHandle_t ulOverlayHandle, float * pfAlpha);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayTexelAspect(vr::VROverlayHandle_t ulOverlayHandle, float fTexelAspect);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayTexelAspect(vr::VROverlayHandle_t ulOverlayHandle, float * pfTexelAspect);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlaySortOrder(vr::VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlaySortOrder(vr::VROverlayHandle_t ulOverlayHandle, uint32_t * punSortOrder);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayWidthInMeters(vr::VROverlayHandle_t ulOverlayHandle, float fWidthInMeters);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayWidthInMeters(vr::VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayAutoCurveDistanceRangeInMeters(vr::VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayAutoCurveDistanceRangeInMeters(vr::VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayTextureColorSpace(vr::VROverlayHandle_t ulOverlayHandle, vr::EColorSpace eTextureColorSpace);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayTextureColorSpace(vr::VROverlayHandle_t ulOverlayHandle, vr::EColorSpace * peTextureColorSpace);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayTextureBounds(vr::VROverlayHandle_t ulOverlayHandle, const struct vr::VRTextureBounds_t * pOverlayTextureBounds);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayTextureBounds(vr::VROverlayHandle_t ulOverlayHandle, struct vr::VRTextureBounds_t * pOverlayTextureBounds);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayTransformType(vr::VROverlayHandle_t ulOverlayHandle, vr::VROverlayTransformType * peTransformType);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayTransformAbsolute(vr::VROverlayHandle_t ulOverlayHandle, vr::ETrackingUniverseOrigin eTrackingOrigin, const struct vr::HmdMatrix34_t * pmatTrackingOriginToOverlayTransform);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayTransformAbsolute(vr::VROverlayHandle_t ulOverlayHandle, vr::ETrackingUniverseOrigin * peTrackingOrigin, struct vr::HmdMatrix34_t * pmatTrackingOriginToOverlayTransform);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayTransformTrackedDeviceRelative(vr::VROverlayHandle_t ulOverlayHandle, vr::TrackedDeviceIndex_t unTrackedDevice, const struct vr::HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayTransformTrackedDeviceRelative(vr::VROverlayHandle_t ulOverlayHandle, vr::TrackedDeviceIndex_t * punTrackedDevice, struct vr::HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayTransformTrackedDeviceComponent(vr::VROverlayHandle_t ulOverlayHandle, vr::TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayTransformTrackedDeviceComponent(vr::VROverlayHandle_t ulOverlayHandle, vr::TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize);
vr::EVROverlayError __stdcall VROverlayFnPassalong_ShowOverlay(vr::VROverlayHandle_t ulOverlayHandle);
vr::EVROverlayError __stdcall VROverlayFnPassalong_HideOverlay(vr::VROverlayHandle_t ulOverlayHandle);
bool __stdcall VROverlayFnPassalong_IsOverlayVisible(vr::VROverlayHandle_t ulOverlayHandle);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetTransformForOverlayCoordinates(vr::VROverlayHandle_t ulOverlayHandle, vr::ETrackingUniverseOrigin eTrackingOrigin, struct vr::HmdVector2_t coordinatesInOverlay, struct vr::HmdMatrix34_t * pmatTransform);
bool __stdcall VROverlayFnPassalong_PollNextOverlayEvent(vr::VROverlayHandle_t ulOverlayHandle, struct vr::VREvent_t * pEvent, uint32_t uncbVREvent);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayInputMethod(vr::VROverlayHandle_t ulOverlayHandle, vr::VROverlayInputMethod * peInputMethod);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayInputMethod(vr::VROverlayHandle_t ulOverlayHandle, vr::VROverlayInputMethod eInputMethod);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayMouseScale(vr::VROverlayHandle_t ulOverlayHandle, struct vr::HmdVector2_t * pvecMouseScale);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayMouseScale(vr::VROverlayHandle_t ulOverlayHandle, const struct vr::HmdVector2_t * pvecMouseScale);
bool __stdcall VROverlayFnPassalong_ComputeOverlayIntersection(vr::VROverlayHandle_t ulOverlayHandle, const struct vr::VROverlayIntersectionParams_t * pParams, struct vr::VROverlayIntersectionResults_t * pResults);
bool __stdcall VROverlayFnPassalong_HandleControllerOverlayInteractionAsMouse(vr::VROverlayHandle_t ulOverlayHandle, vr::TrackedDeviceIndex_t unControllerDeviceIndex);
bool __stdcall VROverlayFnPassalong_IsHoverTargetOverlay(vr::VROverlayHandle_t ulOverlayHandle);
vr::VROverlayHandle_t __stdcall VROverlayFnPassalong_GetGamepadFocusOverlay();
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetGamepadFocusOverlay(vr::VROverlayHandle_t ulNewFocusOverlay);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayNeighbor(vr::EOverlayDirection eDirection, vr::VROverlayHandle_t ulFrom, vr::VROverlayHandle_t ulTo);
vr::EVROverlayError __stdcall VROverlayFnPassalong_MoveGamepadFocusToNeighbor(vr::EOverlayDirection eDirection, vr::VROverlayHandle_t ulFrom);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayTexture(vr::VROverlayHandle_t ulOverlayHandle, const struct vr::Texture_t * pTexture);
vr::EVROverlayError __stdcall VROverlayFnPassalong_ClearOverlayTexture(vr::VROverlayHandle_t ulOverlayHandle);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayRaw(vr::VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayFromFile(vr::VROverlayHandle_t ulOverlayHandle, const char * pchFilePath);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayTexture(vr::VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, vr::ETextureType * pAPIType, vr::EColorSpace * pColorSpace, struct vr::VRTextureBounds_t * pTextureBounds);
vr::EVROverlayError __stdcall VROverlayFnPassalong_ReleaseNativeOverlayHandle(vr::VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayTextureSize(vr::VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight);
vr::EVROverlayError __stdcall VROverlayFnPassalong_CreateDashboardOverlay(const char * pchOverlayKey, const char * pchOverlayFriendlyName, vr::VROverlayHandle_t * pMainHandle, vr::VROverlayHandle_t * pThumbnailHandle);
bool __stdcall VROverlayFnPassalong_IsDashboardVisible();
bool __stdcall VROverlayFnPassalong_IsActiveDashboardOverlay(vr::VROverlayHandle_t ulOverlayHandle);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetDashboardOverlaySceneProcess(vr::VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetDashboardOverlaySceneProcess(vr::VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId);
void __stdcall VROverlayFnPassalong_ShowDashboard(const char * pchOverlayToShow);
vr::TrackedDeviceIndex_t __stdcall VROverlayFnPassalong_GetPrimaryDashboardDevice();
vr::EVROverlayError __stdcall VROverlayFnPassalong_ShowKeyboard(vr::EGamepadTextInputMode eInputMode, vr::EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
vr::EVROverlayError __stdcall VROverlayFnPassalong_ShowKeyboardForOverlay(vr::VROverlayHandle_t ulOverlayHandle, vr::EGamepadTextInputMode eInputMode, vr::EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
uint32_t __stdcall VROverlayFnPassalong_GetKeyboardText(char * pchText, uint32_t cchText);
void __stdcall VROverlayFnPassalong_HideKeyboard();
void __stdcall VROverlayFnPassalong_SetKeyboardTransformAbsolute(vr::ETrackingUniverseOrigin eTrackingOrigin, const struct vr::HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform);
void __stdcall VROverlayFnPassalong_SetKeyboardPositionForOverlay(vr::VROverlayHandle_t ulOverlayHandle, struct vr::HmdRect2_t avoidRect);
vr::EVROverlayError __stdcall VROverlayFnPassalong_SetOverlayIntersectionMask(vr::VROverlayHandle_t ulOverlayHandle, struct vr::VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize);
vr::EVROverlayError __stdcall VROverlayFnPassalong_GetOverlayFlags(vr::VROverlayHandle_t ulOverlayHandle, uint32_t * pFlags);
vr::VRMessageOverlayResponse __stdcall VROverlayFnPassalong_ShowMessageOverlay(const char * pchText, const char * pchCaption, const char * pchButton0Text, const char * pchButton1Text, const char * pchButton2Text, const char * pchButton3Text);
vr::EVRRenderModelError __stdcall VRRenderModelsFnPassalong_LoadRenderModel_Async(const char * pchRenderModelName, struct vr::RenderModel_t ** ppRenderModel);
void __stdcall VRRenderModelsFnPassalong_FreeRenderModel(struct vr::RenderModel_t * pRenderModel);
vr::EVRRenderModelError __stdcall VRRenderModelsFnPassalong_LoadTexture_Async(vr::TextureID_t textureId, struct vr::RenderModel_TextureMap_t ** ppTexture);
void __stdcall VRRenderModelsFnPassalong_FreeTexture(struct vr::RenderModel_TextureMap_t * pTexture);
vr::EVRRenderModelError __stdcall VRRenderModelsFnPassalong_LoadTextureD3D11_Async(vr::TextureID_t textureId, void * pD3D11Device, void ** ppD3D11Texture2D);
vr::EVRRenderModelError __stdcall VRRenderModelsFnPassalong_LoadIntoTextureD3D11_Async(vr::TextureID_t textureId, void * pDstTexture);
void __stdcall VRRenderModelsFnPassalong_FreeTextureD3D11(void * pD3D11Texture2D);
uint32_t __stdcall VRRenderModelsFnPassalong_GetRenderModelName(uint32_t unRenderModelIndex, char * pchRenderModelName, uint32_t unRenderModelNameLen);
uint32_t __stdcall VRRenderModelsFnPassalong_GetRenderModelCount();
uint32_t __stdcall VRRenderModelsFnPassalong_GetComponentCount(const char * pchRenderModelName);
uint32_t __stdcall VRRenderModelsFnPassalong_GetComponentName(const char * pchRenderModelName, uint32_t unComponentIndex, char * pchComponentName, uint32_t unComponentNameLen);
uint64_t __stdcall VRRenderModelsFnPassalong_GetComponentButtonMask(const char * pchRenderModelName, const char * pchComponentName);
uint32_t __stdcall VRRenderModelsFnPassalong_GetComponentRenderModelName(const char * pchRenderModelName, const char * pchComponentName, char * pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen);
bool __stdcall VRRenderModelsFnPassalong_GetComponentState(const char * pchRenderModelName, const char * pchComponentName, const vr::VRControllerState_t * pControllerState, const struct vr::RenderModel_ControllerMode_State_t * pState, struct vr::RenderModel_ComponentState_t * pComponentState);
bool __stdcall VRRenderModelsFnPassalong_RenderModelHasComponent(const char * pchRenderModelName, const char * pchComponentName);
uint32_t __stdcall VRRenderModelsFnPassalong_GetRenderModelThumbnailURL(const char * pchRenderModelName, char * pchThumbnailURL, uint32_t unThumbnailURLLen, vr::EVRRenderModelError * peError);
uint32_t __stdcall VRRenderModelsFnPassalong_GetRenderModelOriginalPath(const char * pchRenderModelName, char * pchOriginalPath, uint32_t unOriginalPathLen, vr::EVRRenderModelError * peError);
const char * __stdcall VRRenderModelsFnPassalong_GetRenderModelErrorNameFromEnum(vr::EVRRenderModelError error);
vr::EVRNotificationError __stdcall VRNotificationsFnPassalong_CreateNotification(vr::VROverlayHandle_t ulOverlayHandle, uint64_t ulUserValue, vr::EVRNotificationType type, const char * pchText, vr::EVRNotificationStyle style, const struct vr::NotificationBitmap_t * pImage, vr::VRNotificationId * pNotificationId);
vr::EVRNotificationError __stdcall VRNotificationsFnPassalong_RemoveNotification(vr::VRNotificationId notificationId);
const char * __stdcall VRSettingsFnPassalong_GetSettingsErrorNameFromEnum(vr::EVRSettingsError eError);
bool __stdcall VRSettingsFnPassalong_Sync(bool bForce, vr::EVRSettingsError * peError);
void __stdcall VRSettingsFnPassalong_SetBool(const char * pchSection, const char * pchSettingsKey, bool bValue, vr::EVRSettingsError * peError);
void __stdcall VRSettingsFnPassalong_SetInt32(const char * pchSection, const char * pchSettingsKey, int32_t nValue, vr::EVRSettingsError * peError);
void __stdcall VRSettingsFnPassalong_SetFloat(const char * pchSection, const char * pchSettingsKey, float flValue, vr::EVRSettingsError * peError);
void __stdcall VRSettingsFnPassalong_SetString(const char * pchSection, const char * pchSettingsKey, const char * pchValue, vr::EVRSettingsError * peError);
bool __stdcall VRSettingsFnPassalong_GetBool(const char * pchSection, const char * pchSettingsKey, vr::EVRSettingsError * peError);
int32_t __stdcall VRSettingsFnPassalong_GetInt32(const char * pchSection, const char * pchSettingsKey, vr::EVRSettingsError * peError);
float __stdcall VRSettingsFnPassalong_GetFloat(const char * pchSection, const char * pchSettingsKey, vr::EVRSettingsError * peError);
void __stdcall VRSettingsFnPassalong_GetString(const char * pchSection, const char * pchSettingsKey, char * pchValue, uint32_t unValueLen, vr::EVRSettingsError * peError);
void __stdcall VRSettingsFnPassalong_RemoveSection(const char * pchSection, vr::EVRSettingsError * peError);
void __stdcall VRSettingsFnPassalong_RemoveKeyInSection(const char * pchSection, const char * pchSettingsKey, vr::EVRSettingsError * peError);
vr::EVRScreenshotError __stdcall VRScreenshotsFnPassalong_RequestScreenshot(vr::ScreenshotHandle_t * pOutScreenshotHandle, vr::EVRScreenshotType type, const char * pchPreviewFilename, const char * pchVRFilename);
vr::EVRScreenshotError __stdcall VRScreenshotsFnPassalong_HookScreenshot(const vr::EVRScreenshotType * pSupportedTypes, int numTypes);
vr::EVRScreenshotType __stdcall VRScreenshotsFnPassalong_GetScreenshotPropertyType(vr::ScreenshotHandle_t screenshotHandle, vr::EVRScreenshotError * pError);
uint32_t __stdcall VRScreenshotsFnPassalong_GetScreenshotPropertyFilename(vr::ScreenshotHandle_t screenshotHandle, vr::EVRScreenshotPropertyFilenames filenameType, char * pchFilename, uint32_t cchFilename, vr::EVRScreenshotError * pError);
vr::EVRScreenshotError __stdcall VRScreenshotsFnPassalong_UpdateScreenshotProgress(vr::ScreenshotHandle_t screenshotHandle, float flProgress);
vr::EVRScreenshotError __stdcall VRScreenshotsFnPassalong_TakeStereoScreenshot(vr::ScreenshotHandle_t * pOutScreenshotHandle, const char * pchPreviewFilename, const char * pchVRFilename);
vr::EVRScreenshotError __stdcall VRScreenshotsFnPassalong_SubmitScreenshot(vr::ScreenshotHandle_t screenshotHandle, vr::EVRScreenshotType type, const char * pchSourcePreviewFilename, const char * pchSourceVRFilename);
uint32_t __stdcall VRResourcesFnPassalong_LoadSharedResource(const char * pchResourceName, char * pchBuffer, uint32_t unBufferLen);
uint32_t __stdcall VRResourcesFnPassalong_GetResourceFullPath(const char * pchResourceName, const char * pchResourceTypeDirectory, char * pchPathBuffer, uint32_t unBufferLen);
