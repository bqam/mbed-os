; 
; Copyright (C) u-blox
; All rights reserved.
; This source file is the sole property of u-blox. Reproduction or utilization
; of this source in whole or part is forbidden without the written consent of
; u-blox.
; 
; FILE: vdma_cr.hs

VDMA_NR_CHANNELS EQU 1
VDMA_CR_CHP_SRC EQU 0x000
VDMA_CR_CHP_DST EQU 0x004
VDMA_CR_CHP_SIZE EQU 0x008
VDMA_CR_CHP_CONF EQU 0x00C
VDMA_CR_CHR_SRC EQU 0x000
VDMA_CR_CHR_DST EQU 0x004
VDMA_CR_CHR_SIZE EQU 0x008
VDMA_CR_CHR_CONF EQU 0x00C
VDMA_CR_CMD EQU 0x200
VDMA_CR_STAT EQU 0x204
VDMA_CR_FLTCLEAR EQU 0x300
VDMA_CR_FLTSTATUS EQU 0x304
VDMA_CR_FLTRAWSTATUS EQU 0x308
VDMA_CR_FLTMASKCLR EQU 0x30C
VDMA_CR_FLTMASKSET EQU 0x310
VDMA_CR_FLTMASKSTATUS EQU 0x314
VDMA_CR_PERIPHERALID4 EQU 0xFD0
VDMA_CR_PERIPHERALID5 EQU 0xFD4
VDMA_CR_PERIPHERALID6 EQU 0xFD8
VDMA_CR_PERIPHERALID7 EQU 0xFDC
VDMA_CR_PERIPHERALID0 EQU 0xFE0
VDMA_CR_PERIPHERALID1 EQU 0xFE4
VDMA_CR_PERIPHERALID2 EQU 0xFE8
VDMA_CR_PERIPHERALID3 EQU 0xFEC
VDMA_CR_COMPONENTID0 EQU 0xFF0
VDMA_CR_COMPONENTID1 EQU 0xFF4
VDMA_CR_COMPONENTID2 EQU 0xFF8
VDMA_CR_COMPONENTID3 EQU 0xFFC
; EOF: vdma_cr.hs
   END
