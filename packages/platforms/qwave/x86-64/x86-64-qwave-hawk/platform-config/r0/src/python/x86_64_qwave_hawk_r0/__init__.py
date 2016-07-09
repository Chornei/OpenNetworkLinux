from onl.platform.base import *
from onl.platform.qwave import *

class OnlPlatform_x86_64_qwave_hawk_r0(OnlPlatformAccton,
                                              OnlPlatformPortConfig_32x100):
    PLATFORM='x86-64-qwave_hawk-r0'
    MODEL="HAWK"
    SYS_OBJECT_ID=".1"

    def baseconfig(self):
        ########### initialize I2C bus 0 ###########
        self.new_i2c_devices([

            # initialize multiplexer (PCA9548)
            ('pca9548', 0x76, 0),

            # initiate chassis fan
            ('hawk_fan', 0x66, 2),

            # inititate LM75
            ('lm75', 0x48, 3),
            ('lm75', 0x49, 3),
            ('lm75', 0x4a, 3),
            ('lm75', 0x4b, 3),

            ('qwave_i2c_cpld', 0x60, 4),
            ('qwave_i2c_cpld', 0x62, 5),
            ('qwave_i2c_cpld', 0x64, 6),
            ])

        ########### initialize I2C bus 1 ###########
        self.new_i2c_devices(
            [
                # initiate multiplexer (PCA9548)
                ('pca9548', 0x71, 1),

                # initiate PSU-1
                ('hawk_psu1', 0x53, 11),
                ('ym2651', 0x5b, 11),

                # initiate PSU-2
                ('hawk_psu2', 0x50, 10),
                ('ym2651', 0x58, 10),

                # initiate multiplexer (PCA9548)
                ('pca9548', 0x72, 1),
                ('pca9548', 0x73, 1),
                ('pca9548', 0x74, 1),
                ('pca9548', 0x75, 1),
                ]
            )

        # initialize QSFP port 1~32
        self.new_i2c_devices([
                ('hawk_sfp9', 0x50, 18),
                ('hawk_sfp10', 0x50, 19),
                ('hawk_sfp11', 0x50, 20),
                ('hawk_sfp12', 0x50, 21),
                ('hawk_sfp1', 0x50, 22),
                ('hawk_sfp2', 0x50, 23),
                ('hawk_sfp3', 0x50, 24),
                ('hawk_sfp4', 0x50, 25),
                ('hawk_sfp6', 0x50, 26),
                ('hawk_sfp5', 0x50, 27),
                ('hawk_sfp8', 0x50, 28),
                ('hawk_sfp7', 0x50, 29),
                ('hawk_sfp13', 0x50, 30),
                ('hawk_sfp14', 0x50, 31),
                ('hawk_sfp15', 0x50, 32),
                ('hawk_sfp16', 0x50, 33),
                ('hawk_sfp17', 0x50, 34),
                ('hawk_sfp18', 0x50, 35),
                ('hawk_sfp19', 0x50, 36),
                ('hawk_sfp20', 0x50, 37),
                ('hawk_sfp25', 0x50, 38),
                ('hawk_sfp26', 0x50, 39),
                ('hawk_sfp27', 0x50, 40),
                ('hawk_sfp28', 0x50, 41),
                ('hawk_sfp29', 0x50, 42),
                ('hawk_sfp30', 0x50, 43),
                ('hawk_sfp31', 0x50, 44),
                ('hawk_sfp32', 0x50, 45),
                ('hawk_sfp21', 0x50, 46),
                ('hawk_sfp22', 0x50, 47),
                ('hawk_sfp23', 0x50, 48),
                ('hawk_sfp24', 0x50, 49),
                ])

        self.new_i2c_device('24c02', 0x57, 1)
        return True
