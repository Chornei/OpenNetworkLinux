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
	$(MAKE) -C $(ONL)/packages/base/any/kernels/4.1.13-lts/configs/x86_64-all K_TARGET_DIR=$(THIS_DIR) -j

clean:
	rm -rf linux-4.1.13 linux-4.1.13-mbuild
