from onl.platform.base import *
from onl.platform.mellanox import *

class OnlPlatform_x86_64_mlnx_x86_r0(OnlPlatformAccton,
                                               OnlPlatformPortConfig_32x100):
    MODEL="SN2700"
    PLATFORM="x86-64-mlnx-x86"
    SYS_OBJECT_ID=".2700.1"
