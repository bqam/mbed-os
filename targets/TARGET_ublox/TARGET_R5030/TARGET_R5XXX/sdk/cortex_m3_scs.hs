; 
; Copyright (C) u-blox
; All rights reserved.
; This source file is the sole property of u-blox. Reproduction or utilization
; of this source in whole or part is forbidden without the written consent of
; u-blox.
; 
; FILE: cortex_m3_scs.hs

CORTEX_M3_SCS_ICTR EQU 0x004
CORTEX_M3_SCS_ACTLR EQU 0x008
CORTEX_M3_SCS_STCSR EQU 0x010
CORTEX_M3_SCS_STRVR EQU 0x014
CORTEX_M3_SCS_STCVR EQU 0x018
CORTEX_M3_SCS_STCR EQU 0x01C
CORTEX_M3_SCS_NVIC_ISER0 EQU 0x100
CORTEX_M3_SCS_NVIC_ISER1 EQU 0x104
CORTEX_M3_SCS_NVIC_ISER2 EQU 0x108
CORTEX_M3_SCS_NVIC_ISER3 EQU 0x10C
CORTEX_M3_SCS_NVIC_ISER4 EQU 0x110
CORTEX_M3_SCS_NVIC_ISER5 EQU 0x114
CORTEX_M3_SCS_NVIC_ISER6 EQU 0x118
CORTEX_M3_SCS_NVIC_ISER7 EQU 0x11C
CORTEX_M3_SCS_NVIC_ICER0 EQU 0x180
CORTEX_M3_SCS_NVIC_ICER1 EQU 0x184
CORTEX_M3_SCS_NVIC_ICER2 EQU 0x188
CORTEX_M3_SCS_NVIC_ICER3 EQU 0x18C
CORTEX_M3_SCS_NVIC_ICER4 EQU 0x190
CORTEX_M3_SCS_NVIC_ICER5 EQU 0x194
CORTEX_M3_SCS_NVIC_ICER6 EQU 0x198
CORTEX_M3_SCS_NVIC_ICER7 EQU 0x19C
CORTEX_M3_SCS_NVIC_ISPR0 EQU 0x200
CORTEX_M3_SCS_NVIC_ISPR1 EQU 0x204
CORTEX_M3_SCS_NVIC_ISPR2 EQU 0x208
CORTEX_M3_SCS_NVIC_ISPR3 EQU 0x20C
CORTEX_M3_SCS_NVIC_ISPR4 EQU 0x210
CORTEX_M3_SCS_NVIC_ISPR5 EQU 0x214
CORTEX_M3_SCS_NVIC_ISPR6 EQU 0x218
CORTEX_M3_SCS_NVIC_ISPR7 EQU 0x21C
CORTEX_M3_SCS_NVIC_ICPR0 EQU 0x280
CORTEX_M3_SCS_NVIC_ICPR1 EQU 0x284
CORTEX_M3_SCS_NVIC_ICPR2 EQU 0x288
CORTEX_M3_SCS_NVIC_ICPR3 EQU 0x28C
CORTEX_M3_SCS_NVIC_ICPR4 EQU 0x290
CORTEX_M3_SCS_NVIC_ICPR5 EQU 0x294
CORTEX_M3_SCS_NVIC_ICPR6 EQU 0x298
CORTEX_M3_SCS_NVIC_ICPR7 EQU 0x29C
CORTEX_M3_SCS_NVIC_IABR0 EQU 0x300
CORTEX_M3_SCS_NVIC_IABR1 EQU 0x304
CORTEX_M3_SCS_NVIC_IABR2 EQU 0x308
CORTEX_M3_SCS_NVIC_IABR3 EQU 0x30C
CORTEX_M3_SCS_NVIC_IABR4 EQU 0x310
CORTEX_M3_SCS_NVIC_IABR5 EQU 0x314
CORTEX_M3_SCS_NVIC_IABR6 EQU 0x318
CORTEX_M3_SCS_NVIC_IABR7 EQU 0x31C
CORTEX_M3_SCS_NVIC_IPR EQU 0x400
CORTEX_M3_SCS_NVIC_IPR_FIELDS EQU 60
CORTEX_M3_SCS_CPUID EQU 0xD00
CORTEX_M3_SCS_ICSR EQU 0xD04
CORTEX_M3_SCS_VTOR EQU 0xD08
CORTEX_M3_SCS_AIRCR EQU 0xD0C
CORTEX_M3_SCS_SCR EQU 0xD10
CORTEX_M3_SCS_CCR EQU 0xD14
CORTEX_M3_SCS_SHPR1 EQU 0xD18
CORTEX_M3_SCS_SHPR2 EQU 0xD1C
CORTEX_M3_SCS_SHPR3 EQU 0xD20
CORTEX_M3_SCS_SHCSR EQU 0xD24
CORTEX_M3_SCS_CFSR EQU 0xD28
CORTEX_M3_SCS_HFSR EQU 0xD2C
CORTEX_M3_SCS_DFSR EQU 0xD30
CORTEX_M3_SCS_MMFAR EQU 0xD34
CORTEX_M3_SCS_BFAR EQU 0xD38
CORTEX_M3_SCS_AFSR EQU 0xD3C
CORTEX_M3_SCS_ID_PFR0 EQU 0xD40
CORTEX_M3_SCS_ID_PFR1 EQU 0xD44
CORTEX_M3_SCS_ID_DFR0 EQU 0xD48
CORTEX_M3_SCS_ID_AFR0 EQU 0xD4C
CORTEX_M3_SCS_ID_MMFR0 EQU 0xD50
CORTEX_M3_SCS_ID_MMFR1 EQU 0xD54
CORTEX_M3_SCS_ID_MMFR2 EQU 0xD58
CORTEX_M3_SCS_ID_MMFR3 EQU 0xD5C
CORTEX_M3_SCS_ID_ISAR0 EQU 0xD60
CORTEX_M3_SCS_ID_ISAR1 EQU 0xD64
CORTEX_M3_SCS_ID_ISAR2 EQU 0xD68
CORTEX_M3_SCS_ID_ISAR3 EQU 0xD6C
CORTEX_M3_SCS_ID_ISAR4 EQU 0xD70
CORTEX_M3_SCS_CPACR EQU 0xD88
CORTEX_M3_SCS_MPU_TYPE EQU 0xD90
CORTEX_M3_SCS_MPU_CTRL EQU 0xD94
CORTEX_M3_SCS_MPU_RNR EQU 0xD98
CORTEX_M3_SCS_MPU_RBAR EQU 0xD9C
CORTEX_M3_SCS_MPU_RASR EQU 0xDA0
CORTEX_M3_SCS_MPU_RBAR_A1 EQU 0xDA4
CORTEX_M3_SCS_MPU_RASR_A1 EQU 0xDA8
CORTEX_M3_SCS_MPU_RBAR_A2 EQU 0xDAC
CORTEX_M3_SCS_MPU_RASR_A2 EQU 0xDB0
CORTEX_M3_SCS_MPU_RBAR_A3 EQU 0xDB4
CORTEX_M3_SCS_MPU_RASR_A3 EQU 0xDB8
CORTEX_M3_SCS_DHCSR EQU 0xDF0
CORTEX_M3_SCS_DCRSR EQU 0xDF4
CORTEX_M3_SCS_DCRDR EQU 0xDF8
CORTEX_M3_SCS_DEMCR EQU 0xDFC
CORTEX_M3_SCS_STIR EQU 0xF00
; EOF: cortex_m3_scs.hs
   END
