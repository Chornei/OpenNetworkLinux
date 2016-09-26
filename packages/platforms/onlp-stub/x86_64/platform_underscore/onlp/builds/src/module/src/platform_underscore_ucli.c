/**************************************************************************//**
 *
 *
 *
 *****************************************************************************/
#include <platform_underscore/platform_underscore_config.h>

#if platform_underscore_CONFIG_INCLUDE_UCLI == 1

#include <uCli/ucli.h>
#include <uCli/ucli_argparse.h>
#include <uCli/ucli_handler_macros.h>

static ucli_status_t
platform_underscore_ucli_ucli__config__(ucli_context_t* uc)
{
    UCLI_HANDLER_MACRO_MODULE_CONFIG(platform_underscore)
}

/* <auto.ucli.handlers.start> */
/* <auto.ucli.handlers.end> */

static ucli_module_t
platform_underscore_ucli_module__ =
    {
        "platform_underscore_ucli",
        NULL,
        platform_underscore_ucli_ucli_handlers__,
        NULL,
        NULL,
    };

ucli_node_t*
platform_underscore_ucli_node_create(void)
{
    ucli_node_t* n;
    ucli_module_init(&platform_underscore_ucli_module__);
    n = ucli_node_create("platform_underscore", NULL, &platform_underscore_ucli_module__);
    ucli_node_subnode_add(n, ucli_module_log_node_create("platform_underscore"));
    return n;
}

#else
void*
platform_underscore_ucli_node_create(void)
{
    return NULL;
}
#endif

