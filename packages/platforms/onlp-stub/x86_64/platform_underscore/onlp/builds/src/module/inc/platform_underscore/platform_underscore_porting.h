/**************************************************************************//**
 *
 * @file
 * @brief platform_underscore Porting Macros.
 *
 * @addtogroup platform_underscore-porting
 * @{
 *
 *****************************************************************************/
#ifndef __platform_underscore_PORTING_H__
#define __platform_underscore_PORTING_H__


/* <auto.start.portingmacro(ALL).define> */
#if platform_underscore_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS == 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <memory.h>
#endif

#ifndef platform_underscore_MALLOC
    #if defined(GLOBAL_MALLOC)
        #define platform_underscore_MALLOC GLOBAL_MALLOC
    #elif platform_underscore_CONFIG_PORTING_STDLIB == 1
        #define platform_underscore_MALLOC malloc
    #else
        #error The macro platform_underscore_MALLOC is required but cannot be defined.
    #endif
#endif

#ifndef platform_underscore_FREE
    #if defined(GLOBAL_FREE)
        #define platform_underscore_FREE GLOBAL_FREE
    #elif platform_underscore_CONFIG_PORTING_STDLIB == 1
        #define platform_underscore_FREE free
    #else
        #error The macro platform_underscore_FREE is required but cannot be defined.
    #endif
#endif

#ifndef platform_underscore_MEMSET
    #if defined(GLOBAL_MEMSET)
        #define platform_underscore_MEMSET GLOBAL_MEMSET
    #elif platform_underscore_CONFIG_PORTING_STDLIB == 1
        #define platform_underscore_MEMSET memset
    #else
        #error The macro platform_underscore_MEMSET is required but cannot be defined.
    #endif
#endif

#ifndef platform_underscore_MEMCPY
    #if defined(GLOBAL_MEMCPY)
        #define platform_underscore_MEMCPY GLOBAL_MEMCPY
    #elif platform_underscore_CONFIG_PORTING_STDLIB == 1
        #define platform_underscore_MEMCPY memcpy
    #else
        #error The macro platform_underscore_MEMCPY is required but cannot be defined.
    #endif
#endif

#ifndef platform_underscore_STRNCPY
    #if defined(GLOBAL_STRNCPY)
        #define platform_underscore_STRNCPY GLOBAL_STRNCPY
    #elif platform_underscore_CONFIG_PORTING_STDLIB == 1
        #define platform_underscore_STRNCPY strncpy
    #else
        #error The macro platform_underscore_STRNCPY is required but cannot be defined.
    #endif
#endif

#ifndef platform_underscore_VSNPRINTF
    #if defined(GLOBAL_VSNPRINTF)
        #define platform_underscore_VSNPRINTF GLOBAL_VSNPRINTF
    #elif platform_underscore_CONFIG_PORTING_STDLIB == 1
        #define platform_underscore_VSNPRINTF vsnprintf
    #else
        #error The macro platform_underscore_VSNPRINTF is required but cannot be defined.
    #endif
#endif

#ifndef platform_underscore_SNPRINTF
    #if defined(GLOBAL_SNPRINTF)
        #define platform_underscore_SNPRINTF GLOBAL_SNPRINTF
    #elif platform_underscore_CONFIG_PORTING_STDLIB == 1
        #define platform_underscore_SNPRINTF snprintf
    #else
        #error The macro platform_underscore_SNPRINTF is required but cannot be defined.
    #endif
#endif

#ifndef platform_underscore_STRLEN
    #if defined(GLOBAL_STRLEN)
        #define platform_underscore_STRLEN GLOBAL_STRLEN
    #elif platform_underscore_CONFIG_PORTING_STDLIB == 1
        #define platform_underscore_STRLEN strlen
    #else
        #error The macro platform_underscore_STRLEN is required but cannot be defined.
    #endif
#endif

/* <auto.end.portingmacro(ALL).define> */


#endif /* __platform_underscore_PORTING_H__ */
/* @} */
