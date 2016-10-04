###############################################################################
#
# 
#
###############################################################################

LIBRARY := platform_underscore
$(LIBRARY)_SUBDIR := $(dir $(lastword $(MAKEFILE_LIST)))
include $(BUILDER)/lib.mk
