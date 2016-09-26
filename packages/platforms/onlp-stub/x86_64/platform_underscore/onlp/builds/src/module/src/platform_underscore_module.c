/**************************************************************************//**
 *
 *
 *
 *****************************************************************************/
#include <platform_underscore/platform_underscore_config.h>

#include "platform_underscore_log.h"

static int
datatypes_init__(void)
{
#define platform_underscore_ENUMERATION_ENTRY(_enum_name, _desc)     AIM_DATATYPE_MAP_REGISTER(_enum_name, _enum_name##_map, _desc,                               AIM_LOG_INTERNAL);
#include <platform_underscore/platform_underscore.x>
    return 0;
}

void __platform_underscore_module_init__(void)
{
    AIM_LOG_STRUCT_REGISTER();
    datatypes_init__();
}

int __onlp_platform_version__ = 1;
