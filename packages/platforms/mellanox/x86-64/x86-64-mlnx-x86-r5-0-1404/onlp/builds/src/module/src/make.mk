###############################################################################
#
# 
#
###############################################################################

LIBRARY := x86_64_mlnx_x86_r5_0_1404
$(LIBRARY)_SUBDIR := $(dir $(lastword $(MAKEFILE_LIST)))
include $(BUILDER)/lib.mk