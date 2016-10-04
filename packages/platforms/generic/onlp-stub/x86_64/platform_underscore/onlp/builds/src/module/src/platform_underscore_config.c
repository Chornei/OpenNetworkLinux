/**************************************************************************//**
 *
 *
 *
 *****************************************************************************/
#include <platform_underscore/platform_underscore_config.h>

/* <auto.start.cdefs(platform_underscore_CONFIG_HEADER).source> */
#define __platform_underscore_config_STRINGIFY_NAME(_x) #_x
#define __platform_underscore_config_STRINGIFY_VALUE(_x) __platform_underscore_config_STRINGIFY_NAME(_x)
platform_underscore_config_settings_t platform_underscore_config_settings[] =
{
#ifdef platform_underscore_CONFIG_INCLUDE_LOGGING
    { __platform_underscore_config_STRINGIFY_NAME(platform_underscore_CONFIG_INCLUDE_LOGGING), __platform_underscore_config_STRINGIFY_VALUE(platform_underscore_CONFIG_INCLUDE_LOGGING) },
#else
{ platform_underscore_CONFIG_INCLUDE_LOGGING(__platform_underscore_config_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef platform_underscore_CONFIG_LOG_OPTIONS_DEFAULT
    { __platform_underscore_config_STRINGIFY_NAME(platform_underscore_CONFIG_LOG_OPTIONS_DEFAULT), __platform_underscore_config_STRINGIFY_VALUE(platform_underscore_CONFIG_LOG_OPTIONS_DEFAULT) },
#else
{ platform_underscore_CONFIG_LOG_OPTIONS_DEFAULT(__platform_underscore_config_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef platform_underscore_CONFIG_LOG_BITS_DEFAULT
    { __platform_underscore_config_STRINGIFY_NAME(platform_underscore_CONFIG_LOG_BITS_DEFAULT), __platform_underscore_config_STRINGIFY_VALUE(platform_underscore_CONFIG_LOG_BITS_DEFAULT) },
#else
{ platform_underscore_CONFIG_LOG_BITS_DEFAULT(__platform_underscore_config_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef platform_underscore_CONFIG_LOG_CUSTOM_BITS_DEFAULT
    { __platform_underscore_config_STRINGIFY_NAME(platform_underscore_CONFIG_LOG_CUSTOM_BITS_DEFAULT), __platform_underscore_config_STRINGIFY_VALUE(platform_underscore_CONFIG_LOG_CUSTOM_BITS_DEFAULT) },
#else
{ platform_underscore_CONFIG_LOG_CUSTOM_BITS_DEFAULT(__platform_underscore_config_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef platform_underscore_CONFIG_PORTING_STDLIB
    { __platform_underscore_config_STRINGIFY_NAME(platform_underscore_CONFIG_PORTING_STDLIB), __platform_underscore_config_STRINGIFY_VALUE(platform_underscore_CONFIG_PORTING_STDLIB) },
#else
{ platform_underscore_CONFIG_PORTING_STDLIB(__platform_underscore_config_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef platform_underscore_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS
    { __platform_underscore_config_STRINGIFY_NAME(platform_underscore_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS), __platform_underscore_config_STRINGIFY_VALUE(platform_underscore_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS) },
#else
{ platform_underscore_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS(__platform_underscore_config_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef platform_underscore_CONFIG_INCLUDE_UCLI
    { __platform_underscore_config_STRINGIFY_NAME(platform_underscore_CONFIG_INCLUDE_UCLI), __platform_underscore_config_STRINGIFY_VALUE(platform_underscore_CONFIG_INCLUDE_UCLI) },
#else
{ platform_underscore_CONFIG_INCLUDE_UCLI(__platform_underscore_config_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef platform_underscore_CONFIG_INCLUDE_DEFAULT_FAN_DIRECTION
    { __platform_underscore_config_STRINGIFY_NAME(platform_underscore_CONFIG_INCLUDE_DEFAULT_FAN_DIRECTION), __platform_underscore_config_STRINGIFY_VALUE(platform_underscore_CONFIG_INCLUDE_DEFAULT_FAN_DIRECTION) },
#else
{ platform_underscore_CONFIG_INCLUDE_DEFAULT_FAN_DIRECTION(__platform_underscore_config_STRINGIFY_NAME), "__undefined__" },
#endif
    { NULL, NULL }
};
#undef __platform_underscore_config_STRINGIFY_VALUE
#undef __platform_underscore_config_STRINGIFY_NAME

const char*
platform_underscore_config_lookup(const char* setting)
{
    int i;
    for(i = 0; platform_underscore_config_settings[i].name; i++) {
        if(strcmp(platform_underscore_config_settings[i].name, setting)) {
            return platform_underscore_config_settings[i].value;
        }
    }
    return NULL;
}

int
platform_underscore_config_show(struct aim_pvs_s* pvs)
{
    int i;
    for(i = 0; platform_underscore_config_settings[i].name; i++) {
        aim_printf(pvs, "%s = %s\n", platform_underscore_config_settings[i].name, platform_underscore_config_settings[i].value);
    }
    return i;
}

/* <auto.end.cdefs(platform_underscore_CONFIG_HEADER).source> */

