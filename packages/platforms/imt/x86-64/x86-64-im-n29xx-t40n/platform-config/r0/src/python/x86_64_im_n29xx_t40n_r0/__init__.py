#!/usr/bin/python
############################################################
#
# Copyright 2015 Interface Masters Technologies, Inc.
#
# Platform Driver for x86-64-im-n29xx-t40n-r0
#
############################################################
import os
import struct
import time
import subprocess
from onl.platform.base import *
from onl.vendor.imt import *

class OnlPlatform_x86_64_im_n29xx_t40n_r0(OnlPlatformIMT):

    def model(self):
        # different IMT hw is supported by one image.
        return 'IM29XX'

    def platform(self):
        return 'x86-64-im-n29xx-t40n-r0'

    def sys_oid_platform(self):
        return ".30324.29"

    def baseconfig(self):
        return True
