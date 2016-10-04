/**************************************************************************//**
 *
 * @file
 * @brief platform_underscore Configuration Header
 *
 * @addtogroup platform_underscore-config
 * @{
 *
 *****************************************************************************/
#ifndef __platform_underscore_CONFIG_H__
#define __platform_underscore_CONFIG_H__

#ifdef GLOBAL_INCLUDE_CUSTOM_CONFIG
#include <global_custom_config.h>
#endif
#ifdef platform_underscore_INCLUDE_CUSTOM_CONFIG
#include <platform_underscore_custom_config.h>
#endif

/* <auto.start.cdefs(platform_underscore_CONFIG_HEADER).header> */
#include <AIM/aim.h>
/**
 * platform_underscore_CONFIG_INCLUDE_LOGGING
 *
 * Include or exclude logging. */


#ifndef platform_underscore_CONFIG_INCLUDE_LOGGING
#define platform_underscore_CONFIG_INCLUDE_LOGGING 1
#endif

/**
 * platform_underscore_CONFIG_LOG_OPTIONS_DEFAULT
 *
 * Default enabled log options. */


#ifndef platform_underscore_CONFIG_LOG_OPTIONS_DEFAULT
#define platform_underscore_CONFIG_LOG_OPTIONS_DEFAULT AIM_LOG_OPTIONS_DEFAULT
#endif

/**
 * platform_underscore_CONFIG_LOG_BITS_DEFAULT
 *
 * Default enabled log bits. */


#ifndef platform_underscore_CONFIG_LOG_BITS_DEFAULT
#define platform_underscore_CONFIG_LOG_BITS_DEFAULT AIM_LOG_BITS_DEFAULT
#endif

/**
 * platform_underscore_CONFIG_LOG_CUSTOM_BITS_DEFAULT
 *
 * Default enabled custom log bits. */


#ifndef platform_underscore_CONFIG_LOG_CUSTOM_BITS_DEFAULT
#define platform_underscore_CONFIG_LOG_CUSTOM_BITS_DEFAULT 0
#endif

/**
 * platform_underscore_CONFIG_PORTING_STDLIB
 *
 * Default all porting macros to use the C standard libraries. */


#ifndef platform_underscore_CONFIG_PORTING_STDLIB
#define platform_underscore_CONFIG_PORTING_STDLIB 1
#endif

/**
 * platform_underscore_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS
 *
 * Include standard library headers for stdlib porting macros. */


#ifndef platform_underscore_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS
#define platform_underscore_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS platform_underscore_CONFIG_PORTING_STDLIB
#endif

/**
 * platform_underscore_CONFIG_INCLUDE_UCLI
 *
 * Include generic uCli support. */


#ifndef platform_underscore_CONFIG_INCLUDE_UCLI
#define platform_underscore_CONFIG_INCLUDE_UCLI 0
#endif

/**
 * platform_underscore_CONFIG_INCLUDE_DEFAULT_FAN_DIRECTION
 *
 * Assume chassis fan direction is the same as the PSU fan direction. */


#ifndef platform_underscore_CONFIG_INCLUDE_DEFAULT_FAN_DIRECTION
#define platform_underscore_CONFIG_INCLUDE_DEFAULT_FAN_DIRECTION 0
#endif



/**
 * All compile time options can be queried or displayed
 */

/** Configuration settings structure. */
typedef struct platform_underscore_config_settings_s {
    /** name */
    const char* name;
    /** value */
    const char* value;
} platform_underscore_config_settings_t;

/** Configuration settings table. */
/** platform_underscore_config_settings table. */
extern platform_underscore_config_settings_t platform_underscore_config_settings[];

/**
 * @brief Lookup a configuration setting.
 * @param setting The name of the configuration option to lookup.
 */
const char* platform_underscore_config_lookup(const char* setting);

/**
 * @brief Show the compile-time configuration.
 * @param pvs The output stream.
 */
int platform_underscore_config_show(struct aim_pvs_s* pvs);

/* <auto.end.cdefs(platform_underscore_CONFIG_HEADER).header> */

#include "platform_underscore_porting.h"

#endif /* __platform_underscore_CONFIG_H__ */
/* @} */
