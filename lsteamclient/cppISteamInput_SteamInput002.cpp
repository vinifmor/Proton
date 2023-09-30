/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamInput_SteamInput002.h"

void cppISteamInput_SteamInput002_Init( struct cppISteamInput_SteamInput002_Init_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->Init(  );
}

void cppISteamInput_SteamInput002_Shutdown( struct cppISteamInput_SteamInput002_Shutdown_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
}

void cppISteamInput_SteamInput002_RunFrame( struct cppISteamInput_SteamInput002_RunFrame_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamInput_SteamInput002_GetConnectedControllers( struct cppISteamInput_SteamInput002_GetConnectedControllers_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
}

void cppISteamInput_SteamInput002_GetActionSetHandle( struct cppISteamInput_SteamInput002_GetActionSetHandle_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
}

void cppISteamInput_SteamInput002_ActivateActionSet( struct cppISteamInput_SteamInput002_ActivateActionSet_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->ActivateActionSet( params->inputHandle, params->actionSetHandle );
}

void cppISteamInput_SteamInput002_GetCurrentActionSet( struct cppISteamInput_SteamInput002_GetCurrentActionSet_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->inputHandle );
}

void cppISteamInput_SteamInput002_ActivateActionSetLayer( struct cppISteamInput_SteamInput002_ActivateActionSetLayer_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->ActivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
}

void cppISteamInput_SteamInput002_DeactivateActionSetLayer( struct cppISteamInput_SteamInput002_DeactivateActionSetLayer_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->DeactivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
}

void cppISteamInput_SteamInput002_DeactivateAllActionSetLayers( struct cppISteamInput_SteamInput002_DeactivateAllActionSetLayers_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->DeactivateAllActionSetLayers( params->inputHandle );
}

void cppISteamInput_SteamInput002_GetActiveActionSetLayers( struct cppISteamInput_SteamInput002_GetActiveActionSetLayers_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetActiveActionSetLayers( params->inputHandle, params->handlesOut );
}

void cppISteamInput_SteamInput002_GetDigitalActionHandle( struct cppISteamInput_SteamInput002_GetDigitalActionHandle_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
}

void cppISteamInput_SteamInput002_GetDigitalActionData( struct cppISteamInput_SteamInput002_GetDigitalActionData_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->inputHandle, params->digitalActionHandle );
}

void cppISteamInput_SteamInput002_GetDigitalActionOrigins( struct cppISteamInput_SteamInput002_GetDigitalActionOrigins_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->inputHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
}

void cppISteamInput_SteamInput002_GetAnalogActionHandle( struct cppISteamInput_SteamInput002_GetAnalogActionHandle_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
}

void cppISteamInput_SteamInput002_GetAnalogActionData( struct cppISteamInput_SteamInput002_GetAnalogActionData_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->inputHandle, params->analogActionHandle );
}

void cppISteamInput_SteamInput002_GetAnalogActionOrigins( struct cppISteamInput_SteamInput002_GetAnalogActionOrigins_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->inputHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
}

void cppISteamInput_SteamInput002_GetStringForActionOrigin( struct cppISteamInput_SteamInput002_GetStringForActionOrigin_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetStringForActionOrigin( params->eOrigin );
}

void cppISteamInput_SteamInput002_StopAnalogActionMomentum( struct cppISteamInput_SteamInput002_StopAnalogActionMomentum_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->inputHandle, params->eAction );
}

void cppISteamInput_SteamInput002_GetMotionData( struct cppISteamInput_SteamInput002_GetMotionData_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    *params->_ret = iface->GetMotionData( params->inputHandle );
}

void cppISteamInput_SteamInput002_TriggerVibration( struct cppISteamInput_SteamInput002_TriggerVibration_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->TriggerVibration( params->inputHandle, params->usLeftSpeed, params->usRightSpeed );
}

void cppISteamInput_SteamInput002_SetLEDColor( struct cppISteamInput_SteamInput002_SetLEDColor_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->SetLEDColor( params->inputHandle, params->nColorR, params->nColorG, params->nColorB, params->nFlags );
}

void cppISteamInput_SteamInput002_TriggerHapticPulse( struct cppISteamInput_SteamInput002_TriggerHapticPulse_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->TriggerHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec );
}

void cppISteamInput_SteamInput002_TriggerRepeatedHapticPulse( struct cppISteamInput_SteamInput002_TriggerRepeatedHapticPulse_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->TriggerRepeatedHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
}

void cppISteamInput_SteamInput002_ShowBindingPanel( struct cppISteamInput_SteamInput002_ShowBindingPanel_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->inputHandle );
}

void cppISteamInput_SteamInput002_GetInputTypeForHandle( struct cppISteamInput_SteamInput002_GetInputTypeForHandle_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetInputTypeForHandle( params->inputHandle );
}

void cppISteamInput_SteamInput002_GetControllerForGamepadIndex( struct cppISteamInput_SteamInput002_GetControllerForGamepadIndex_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
}

void cppISteamInput_SteamInput002_GetGamepadIndexForController( struct cppISteamInput_SteamInput002_GetGamepadIndexForController_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetGamepadIndexForController( params->ulinputHandle );
}

void cppISteamInput_SteamInput002_GetStringForXboxOrigin( struct cppISteamInput_SteamInput002_GetStringForXboxOrigin_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetStringForXboxOrigin( params->eOrigin );
}

void cppISteamInput_SteamInput002_GetActionOriginFromXboxOrigin( struct cppISteamInput_SteamInput002_GetActionOriginFromXboxOrigin_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetActionOriginFromXboxOrigin( params->inputHandle, params->eOrigin );
}

void cppISteamInput_SteamInput002_TranslateActionOrigin( struct cppISteamInput_SteamInput002_TranslateActionOrigin_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->TranslateActionOrigin( params->eDestinationInputType, params->eSourceOrigin );
}

void cppISteamInput_SteamInput002_GetDeviceBindingRevision( struct cppISteamInput_SteamInput002_GetDeviceBindingRevision_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetDeviceBindingRevision( params->inputHandle, params->pMajor, params->pMinor );
}

void cppISteamInput_SteamInput002_GetRemotePlaySessionID( struct cppISteamInput_SteamInput002_GetRemotePlaySessionID_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetRemotePlaySessionID( params->inputHandle );
}
