The 0x08017000 target address for BLE full stack is valid for STM32WB35CC.
**********Linker file generated with old CubeMX V6.1.1 for WB35 is not correct******************
Change the RAM_SHARED mapping:
RAM_SHARED (xrw) : ORIGIN = 0x20008000, LENGTH = 10K
=>
RAM_SHARED (xrw) : ORIGIN = 0x20030000, LENGTH = 10K
