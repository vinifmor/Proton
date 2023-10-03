/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    params->_ret = iface->Init(  );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    params->_ret = iface->CreateBrowser( params->pchUserAgent, params->pchUserCSS );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->RemoveBrowser( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    char *u_pchURL = steamclient_dos_to_unix_path( params->pchURL, 1 );
    iface->LoadURL( params->unBrowserHandle, u_pchURL, params->pchPostData );
    steamclient_free_path( u_pchURL );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetSize( params->unBrowserHandle, params->unWidth, params->unHeight );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->StopLoad( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->Reload( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->GoBack( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->GoForward( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->AddHeader( params->unBrowserHandle, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->ExecuteJavascript( params->unBrowserHandle, params->pchScript );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->MouseUp( params->unBrowserHandle, params->eMouseButton );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->MouseDown( params->unBrowserHandle, params->eMouseButton );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->MouseDoubleClick( params->unBrowserHandle, params->eMouseButton );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->MouseMove( params->unBrowserHandle, params->x, params->y );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->MouseWheel( params->unBrowserHandle, params->nDelta );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    uint32_t u_nNativeKeyCode = manual_convert_nNativeKeyCode( params->nNativeKeyCode );
    iface->KeyDown( params->unBrowserHandle, u_nNativeKeyCode, params->eHTMLKeyModifiers );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    uint32_t u_nNativeKeyCode = manual_convert_nNativeKeyCode( params->nNativeKeyCode );
    iface->KeyUp( params->unBrowserHandle, u_nNativeKeyCode, params->eHTMLKeyModifiers );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->KeyChar( params->unBrowserHandle, params->cUnicodeChar, params->eHTMLKeyModifiers );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetHorizontalScroll( params->unBrowserHandle, params->nAbsolutePixelScroll );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetVerticalScroll( params->unBrowserHandle, params->nAbsolutePixelScroll );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetKeyFocus( params->unBrowserHandle, params->bHasKeyFocus );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->ViewSource( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->CopyToClipboard( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->PasteFromClipboard( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->Find( params->unBrowserHandle, params->pchSearchStr, params->bCurrentlyInFind, params->bReverse );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->StopFind( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->GetLinkAtPosition( params->unBrowserHandle, params->x, params->y );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetCookie( params->pchHostname, params->pchKey, params->pchValue, params->pchPath, params->nExpires, params->bSecure, params->bHTTPOnly );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetPageScaleFactor( params->unBrowserHandle, params->flZoom, params->nPointX, params->nPointY );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetBackgroundMode( params->unBrowserHandle, params->bBackgroundMode );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetDPIScalingFactor( params->unBrowserHandle, params->flDPIScaling );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->AllowStartRequest( params->unBrowserHandle, params->bAllowed );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->JSDialogResponse( params->unBrowserHandle, params->bResult );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    const char **u_pchSelectedFiles = steamclient_dos_to_unix_path_array( params->pchSelectedFiles );
    iface->FileLoadDialogResponse( params->unBrowserHandle, u_pchSelectedFiles );
    steamclient_free_path_array( u_pchSelectedFiles );
    return 0;
}

