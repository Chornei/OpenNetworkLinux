###############################################################################
#
# 
#
###############################################################################
THIS_DIR := $(dir $(lastword $(MAKEFILE_LIST)))
x86_64_qwave_hawk_INCLUDES := -I $(THIS_DIR)inc
x86_64_qwave_hawk_INTERNAL_INCLUDES := -I $(THIS_DIR)src
x86_64_qwave_hawk_DEPENDMODULE_ENTRIES := init:x86_64_qwave_hawk ucli:x86_64_qwave_hawk

