###############################################################################
#
# 
#
###############################################################################
THIS_DIR := $(dir $(lastword $(MAKEFILE_LIST)))
platform_underscore_INCLUDES := -I $(THIS_DIR)inc
platform_underscore_INTERNAL_INCLUDES := -I $(THIS_DIR)src
platform_underscore_DEPENDMODULE_ENTRIES := init:platform_underscore ucli:platform_underscore

