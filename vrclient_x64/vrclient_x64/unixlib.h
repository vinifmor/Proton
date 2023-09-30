#ifndef __VRCLIENT_UNIXLIB_H
#define __VRCLIENT_UNIXLIB_H

#include <stdarg.h>
#include <stddef.h>

#include "vrclient_structs.h"

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

struct render_model
{
    union
    {
        w_RenderModel_t_0912 w_0912;
    };
    union
    {
        u_RenderModel_t_0912 *u_0912;
    };
};

struct render_model_texture_map
{
    union
    {
        w_RenderModel_TextureMap_t_090 w_090;
        w_RenderModel_TextureMap_t_1237 w_1237;
    };
    union
    {
        u_RenderModel_TextureMap_t_090 *u_090;
        u_RenderModel_TextureMap_t_1237 *u_1237;
    };
};

struct vrclient_init_params
{
    HMODULE winevulkan;
    char *unix_path;
};

extern VkDevice_T *(WINAPI *p_get_native_VkDevice)( VkDevice_T * );
extern VkInstance_T *(WINAPI *p_get_native_VkInstance)( VkInstance_T * );
extern VkPhysicalDevice_T *(WINAPI *p_get_native_VkPhysicalDevice)( VkPhysicalDevice_T * );
extern VkPhysicalDevice_T *(WINAPI *p_get_wrapped_VkPhysicalDevice)( VkInstance_T *, VkPhysicalDevice_T * );
extern VkQueue_T *(WINAPI *p_get_native_VkQueue)( VkQueue_T * );

extern bool unix_vrclient_init( struct vrclient_init_params *params );
extern void *unix_HmdSystemFactory( const char *name, int *return_code );
extern void *unix_VRClientCoreFactory( const char *name, int *return_code );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* __VRCLIENT_UNIXLIB_H */