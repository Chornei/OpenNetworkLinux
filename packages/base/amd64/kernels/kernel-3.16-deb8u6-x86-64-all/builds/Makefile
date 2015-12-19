# -*- Makefile -*-
############################################################
# <bsn.cl fy=2013 v=none>
#
#        Copyright 2013, 2014 BigSwitch Networks, Inc.
#
#
#
# </bsn.cl>
############################################################
THIS_DIR := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))

include $(ONL)/make/config.mk

kernel:
	$(MAKE) -C $(ONL)/packages/base/any/kernels/3.16.7-ckt11-1+deb8u6/configs/x86_64-all K_TARGET_DIR=$(THIS_DIR) -j

clean:
	rm -rf linux-3.16.7-ckt11-1+deb8u6 linux-3.16.7-ckt11-1+deb8u6-mbuild
