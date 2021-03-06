#ifndef INCLUDED_TX_APB_MMAP_TXBB
#define INCLUDED_TX_APB_MMAP_TXBB
/*
 * Copyright (C) u-blox 
 * All rights reserved. 
 * This source file is the sole property of u-blox. Reproduction or utilization 
 * of this source in whole or part is forbidden without the written consent of 
 * u-blox.
 *
 */

#include <stdint.h>

/** tx_apb_mmap_txbb HAL Spreadsheet version number */
#define TX_APB_MMAP_TXBB_HAL_VERSION 101

/** This is the tx base band line-up register description
*/
struct tx_apb_mmap_txbb_s {
   /** Control bits for main analog supply at address offset 0x000, read-write */
   uint32_t ana_ldo;
   /** Control bits for iqmux analog supply at address offset 0x004, read-write */
   uint32_t iqmux_ldo;
   /** Control bits for dacs analog supply at address offset 0x008, read-write */
   uint32_t anadac_ldo;
   /** Control bits for dacs digital supply at address offset 0x00C, read-write */
   uint32_t digdac_ldo;
   /** Enable bits for TxBB at address offset 0x010, read-write */
   uint32_t enables;
   /** Control bits for bandgap reference at address offset 0x014, read-write */
   uint32_t bandgap;
   /** Control bits for IQmux reference current at address offset 0x018, read-write */
   uint32_t iref_iqmux;
   /** Control bits for Tx DAC at address offset 0x01C, read-write */
   uint32_t dac;
   /** Control bits for DCOC 1 at address offset 0x020, read-write */
   uint32_t dcoc1;
   /** Control bits for DCOC 2 at address offset 0x024, read-write */
   uint32_t dcoc2;
   /** Control bits for I-Channel low pass transimpedance filter at address offset 0x028, read-write */
   uint32_t filter_i1;
   /** Control bits for I-Channel low pass transimpedance filter at address offset 0x02C, read-write */
   uint32_t filter_i2;
   /** Control bits for Q-Channel low pass transimpedance filter at address offset 0x030, read-write */
   uint32_t filter_q1;
   /** Control bits for Q-Channel low pass transimpedance filter at address offset 0x034, read-write */
   uint32_t filter_q2;
   /** Control bits for IQmux at address offset 0x038, read-write */
   uint32_t iqmux;
   /** Enables for IQmux at address offset 0x03C, read-write */
   uint32_t iqmux_en;
   /** Control bits for the RC Calibration at address offset 0x040, read-write */
   uint32_t filter_rccal;
   /** Master enables for Tx anatest at address offset 0x044, read-write */
   uint32_t atst_tx;
   /** Sublevel enables for TxBB anatest at address offset 0x048, read-write */
   uint32_t atst_bb;
   /** Toplevel enables for TxBB anatest at address offset 0x04C, read-write */
   uint32_t atst_toplevel_txbb;
   /** Toplevel enables for TxRF anatest at address offset 0x050, read-write */
   uint32_t atst_toplevel_txrf;
   /** Spare Bits at address offset 0x054, read-write */
   uint32_t txbb_spare;
   /** Control bits for Clock MUX at address offset 0x058, read-write */
   uint32_t dac_clkmux;
   /** Debug register for testing the loading of data from the shadow to config registers. at address offset 0x05C, read-write */
   uint32_t dbg_txbb;
};

/** bit field defines for tx_apb_mmap_txbb_s#ana_ldo */
#define TX_APB_MMAP_TXBB_ANA_LDO_BYPASS_OFFSET 0
#define TX_APB_MMAP_TXBB_ANA_LDO_BYPASS_SIZE 1
#define TX_APB_MMAP_TXBB_ANA_LDO_ENABLE_OFFSET 1
#define TX_APB_MMAP_TXBB_ANA_LDO_ENABLE_SIZE 1
#define TX_APB_MMAP_TXBB_ANA_LDO_FAST_LOCK_OFFSET 2
#define TX_APB_MMAP_TXBB_ANA_LDO_FAST_LOCK_SIZE 1
#define TX_APB_MMAP_TXBB_ANA_LDO_VOUT_CTRL_OFFSET 3
#define TX_APB_MMAP_TXBB_ANA_LDO_VOUT_CTRL_SIZE 4

/** bit field defines for tx_apb_mmap_txbb_s#iqmux_ldo */
#define TX_APB_MMAP_TXBB_IQMUX_LDO_BYPASS_OFFSET 0
#define TX_APB_MMAP_TXBB_IQMUX_LDO_BYPASS_SIZE 1
#define TX_APB_MMAP_TXBB_IQMUX_LDO_ENABLE_OFFSET 1
#define TX_APB_MMAP_TXBB_IQMUX_LDO_ENABLE_SIZE 1
#define TX_APB_MMAP_TXBB_IQMUX_LDO_FAST_LOCK_OFFSET 2
#define TX_APB_MMAP_TXBB_IQMUX_LDO_FAST_LOCK_SIZE 1
#define TX_APB_MMAP_TXBB_IQMUX_LDO_VOUT_CTRL_OFFSET 3
#define TX_APB_MMAP_TXBB_IQMUX_LDO_VOUT_CTRL_SIZE 4

/** bit field defines for tx_apb_mmap_txbb_s#anadac_ldo */
#define TX_APB_MMAP_TXBB_ANADAC_LDO_BYPASS_OFFSET 0
#define TX_APB_MMAP_TXBB_ANADAC_LDO_BYPASS_SIZE 1
#define TX_APB_MMAP_TXBB_ANADAC_LDO_ENABLE_OFFSET 1
#define TX_APB_MMAP_TXBB_ANADAC_LDO_ENABLE_SIZE 1
#define TX_APB_MMAP_TXBB_ANADAC_LDO_FAST_LOCK_OFFSET 2
#define TX_APB_MMAP_TXBB_ANADAC_LDO_FAST_LOCK_SIZE 1
#define TX_APB_MMAP_TXBB_ANADAC_LDO_VOUT_CTRL_OFFSET 3
#define TX_APB_MMAP_TXBB_ANADAC_LDO_VOUT_CTRL_SIZE 4

/** bit field defines for tx_apb_mmap_txbb_s#digdac_ldo */
#define TX_APB_MMAP_TXBB_DIGDAC_LDO_BYPASS_OFFSET 0
#define TX_APB_MMAP_TXBB_DIGDAC_LDO_BYPASS_SIZE 1
#define TX_APB_MMAP_TXBB_DIGDAC_LDO_ENABLE_OFFSET 1
#define TX_APB_MMAP_TXBB_DIGDAC_LDO_ENABLE_SIZE 1
#define TX_APB_MMAP_TXBB_DIGDAC_LDO_FAST_LOCK_OFFSET 2
#define TX_APB_MMAP_TXBB_DIGDAC_LDO_FAST_LOCK_SIZE 1
#define TX_APB_MMAP_TXBB_DIGDAC_LDO_VOUT_CTRL_OFFSET 3
#define TX_APB_MMAP_TXBB_DIGDAC_LDO_VOUT_CTRL_SIZE 4

/** bit field defines for tx_apb_mmap_txbb_s#enables */
#define TX_APB_MMAP_TXBB_ENABLES_DAC_I_EN_OFFSET 0
#define TX_APB_MMAP_TXBB_ENABLES_DAC_I_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_DAC_Q_EN_OFFSET 1
#define TX_APB_MMAP_TXBB_ENABLES_DAC_Q_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_DCOC1_I_EN_OFFSET 2
#define TX_APB_MMAP_TXBB_ENABLES_DCOC1_I_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_DCOC1_Q_EN_OFFSET 3
#define TX_APB_MMAP_TXBB_ENABLES_DCOC1_Q_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_DCOC2_I_EN_OFFSET 4
#define TX_APB_MMAP_TXBB_ENABLES_DCOC2_I_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_DCOC2_Q_EN_OFFSET 5
#define TX_APB_MMAP_TXBB_ENABLES_DCOC2_Q_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_FILTER_I_TIA_EN_OFFSET 6
#define TX_APB_MMAP_TXBB_ENABLES_FILTER_I_TIA_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_FILTER_Q_TIA_EN_OFFSET 7
#define TX_APB_MMAP_TXBB_ENABLES_FILTER_Q_TIA_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_FILTER_I_BIQUAD1_EN_OFFSET 8
#define TX_APB_MMAP_TXBB_ENABLES_FILTER_I_BIQUAD1_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_FILTER_Q_BIQUAD1_EN_OFFSET 9
#define TX_APB_MMAP_TXBB_ENABLES_FILTER_Q_BIQUAD1_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_FILTER_I_BIQUAD2_EN_OFFSET 10
#define TX_APB_MMAP_TXBB_ENABLES_FILTER_I_BIQUAD2_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_FILTER_Q_BIQUAD2_EN_OFFSET 11
#define TX_APB_MMAP_TXBB_ENABLES_FILTER_Q_BIQUAD2_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_IQMUX_I_EN_OFFSET 12
#define TX_APB_MMAP_TXBB_ENABLES_IQMUX_I_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_IQMUX_Q_EN_OFFSET 13
#define TX_APB_MMAP_TXBB_ENABLES_IQMUX_Q_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_IREF_FILTER_EN_OFFSET 14
#define TX_APB_MMAP_TXBB_ENABLES_IREF_FILTER_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_IREF_IQMUX_EN_OFFSET 15
#define TX_APB_MMAP_TXBB_ENABLES_IREF_IQMUX_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_BANDGAP_EN_OFFSET 16
#define TX_APB_MMAP_TXBB_ENABLES_BANDGAP_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ENABLES_BANDGAP_BUF_EN_OFFSET 17
#define TX_APB_MMAP_TXBB_ENABLES_BANDGAP_BUF_EN_SIZE 1

/** bit field defines for tx_apb_mmap_txbb_s#bandgap */
#define TX_APB_MMAP_TXBB_BANDGAP_VOUT_CTRL_OFFSET 0
#define TX_APB_MMAP_TXBB_BANDGAP_VOUT_CTRL_SIZE 4
#define TX_APB_MMAP_TXBB_BANDGAP_INPUT_SEL_OFFSET 4
#define TX_APB_MMAP_TXBB_BANDGAP_INPUT_SEL_SIZE 1
/**  */
#define TX_APB_MMAP_TXBB_BANDGAP_INPUT_SEL_BANDGAP_VALUE 0
/**  */
#define TX_APB_MMAP_TXBB_BANDGAP_INPUT_SEL_V_DIV_VALUE 1

/** bit field defines for tx_apb_mmap_txbb_s#iref_iqmux */
#define TX_APB_MMAP_TXBB_IREF_IQMUX_ITRIM_OFFSET 0
#define TX_APB_MMAP_TXBB_IREF_IQMUX_ITRIM_SIZE 2
/**  */
#define TX_APB_MMAP_TXBB_IREF_IQMUX_ITRIM_MAX_VALUE 0
/**  */
#define TX_APB_MMAP_TXBB_IREF_IQMUX_ITRIM_MIN_VALUE 3
/**  */
#define TX_APB_MMAP_TXBB_IREF_IQMUX_ITRIM_NOM_VALUE 1
#define TX_APB_MMAP_TXBB_IREF_IQMUX_ITRIM_2X_OFFSET 2
#define TX_APB_MMAP_TXBB_IREF_IQMUX_ITRIM_2X_SIZE 1

/** bit field defines for tx_apb_mmap_txbb_s#dac */
#define TX_APB_MMAP_TXBB_DAC_I_ITRIM_OFFSET 0
#define TX_APB_MMAP_TXBB_DAC_I_ITRIM_SIZE 4
/**  */
#define TX_APB_MMAP_TXBB_DAC_I_ITRIM_MAX_VALUE 15
/**  */
#define TX_APB_MMAP_TXBB_DAC_I_ITRIM_MIN_VALUE 0
/**  */
#define TX_APB_MMAP_TXBB_DAC_I_ITRIM_NOM_VALUE 9
#define TX_APB_MMAP_TXBB_DAC_I_ENCLKINV_OFFSET 4
#define TX_APB_MMAP_TXBB_DAC_I_ENCLKINV_SIZE 1
/**  */
#define TX_APB_MMAP_TXBB_DAC_I_ENCLKINV_OFF_VALUE 0
/**  */
#define TX_APB_MMAP_TXBB_DAC_I_ENCLKINV_ON_VALUE 1
#define TX_APB_MMAP_TXBB_DAC_I_ENCLKPULSEBYPASS_OFFSET 5
#define TX_APB_MMAP_TXBB_DAC_I_ENCLKPULSEBYPASS_SIZE 1
/**  */
#define TX_APB_MMAP_TXBB_DAC_I_ENCLKPULSEBYPASS_OFF_VALUE 0
/**  */
#define TX_APB_MMAP_TXBB_DAC_I_ENCLKPULSEBYPASS_ON_VALUE 1
#define TX_APB_MMAP_TXBB_DAC_I_CLKDELAYTRIM_OFFSET 6
#define TX_APB_MMAP_TXBB_DAC_I_CLKDELAYTRIM_SIZE 2
/**  */
#define TX_APB_MMAP_TXBB_DAC_I_CLKDELAYTRIM_MAX_VALUE 3
/**  */
#define TX_APB_MMAP_TXBB_DAC_I_CLKDELAYTRIM_MIN_VALUE 0
/**  */
#define TX_APB_MMAP_TXBB_DAC_I_CLKDELAYTRIM_NOM_VALUE 1
#define TX_APB_MMAP_TXBB_DAC_Q_ITRIM_OFFSET 8
#define TX_APB_MMAP_TXBB_DAC_Q_ITRIM_SIZE 4
/**  */
#define TX_APB_MMAP_TXBB_DAC_Q_ITRIM_MAX_VALUE 15
/**  */
#define TX_APB_MMAP_TXBB_DAC_Q_ITRIM_MIN_VALUE 0
/**  */
#define TX_APB_MMAP_TXBB_DAC_Q_ITRIM_NOM_VALUE 9
#define TX_APB_MMAP_TXBB_DAC_Q_ENCLKINV_OFFSET 12
#define TX_APB_MMAP_TXBB_DAC_Q_ENCLKINV_SIZE 1
/**  */
#define TX_APB_MMAP_TXBB_DAC_Q_ENCLKINV_OFF_VALUE 0
/**  */
#define TX_APB_MMAP_TXBB_DAC_Q_ENCLKINV_ON_VALUE 1
#define TX_APB_MMAP_TXBB_DAC_Q_ENCLKPULSEBYPASS_OFFSET 13
#define TX_APB_MMAP_TXBB_DAC_Q_ENCLKPULSEBYPASS_SIZE 1
/**  */
#define TX_APB_MMAP_TXBB_DAC_Q_ENCLKPULSEBYPASS_OFF_VALUE 0
/**  */
#define TX_APB_MMAP_TXBB_DAC_Q_ENCLKPULSEBYPASS_ON_VALUE 1
#define TX_APB_MMAP_TXBB_DAC_Q_CLKDELAYTRIM_OFFSET 14
#define TX_APB_MMAP_TXBB_DAC_Q_CLKDELAYTRIM_SIZE 2
/**  */
#define TX_APB_MMAP_TXBB_DAC_Q_CLKDELAYTRIM_MAX_VALUE 3
/**  */
#define TX_APB_MMAP_TXBB_DAC_Q_CLKDELAYTRIM_MIN_VALUE 0
/**  */
#define TX_APB_MMAP_TXBB_DAC_Q_CLKDELAYTRIM_NOM_VALUE 1

/** bit field defines for tx_apb_mmap_txbb_s#dcoc1 */
#define TX_APB_MMAP_TXBB_DCOC1_I_IOUT_OFFSET 0
#define TX_APB_MMAP_TXBB_DCOC1_I_IOUT_SIZE 7
#define TX_APB_MMAP_TXBB_DCOC1_Q_IOUT_OFFSET 7
#define TX_APB_MMAP_TXBB_DCOC1_Q_IOUT_SIZE 7
#define TX_APB_MMAP_TXBB_DCOC1_I_LSBSEL_OFFSET 14
#define TX_APB_MMAP_TXBB_DCOC1_I_LSBSEL_SIZE 2
/**  */
#define TX_APB_MMAP_TXBB_DCOC1_I_LSBSEL_10_VALUE 1
/**  */
#define TX_APB_MMAP_TXBB_DCOC1_I_LSBSEL_20_VALUE 2
/**  */
#define TX_APB_MMAP_TXBB_DCOC1_I_LSBSEL_40_VALUE 3
/**  */
#define TX_APB_MMAP_TXBB_DCOC1_I_LSBSEL_5_VALUE 0
#define TX_APB_MMAP_TXBB_DCOC1_Q_LSBSEL_OFFSET 16
#define TX_APB_MMAP_TXBB_DCOC1_Q_LSBSEL_SIZE 2
/**  */
#define TX_APB_MMAP_TXBB_DCOC1_Q_LSBSEL_10_VALUE 1
/**  */
#define TX_APB_MMAP_TXBB_DCOC1_Q_LSBSEL_20_VALUE 2
/**  */
#define TX_APB_MMAP_TXBB_DCOC1_Q_LSBSEL_40_VALUE 3
/**  */
#define TX_APB_MMAP_TXBB_DCOC1_Q_LSBSEL_5_VALUE 0

/** bit field defines for tx_apb_mmap_txbb_s#dcoc2 */
#define TX_APB_MMAP_TXBB_DCOC2_I_IOUT_OFFSET 0
#define TX_APB_MMAP_TXBB_DCOC2_I_IOUT_SIZE 7
#define TX_APB_MMAP_TXBB_DCOC2_Q_IOUT_OFFSET 7
#define TX_APB_MMAP_TXBB_DCOC2_Q_IOUT_SIZE 7
#define TX_APB_MMAP_TXBB_DCOC2_I_LSBSEL_OFFSET 14
#define TX_APB_MMAP_TXBB_DCOC2_I_LSBSEL_SIZE 2
/**  */
#define TX_APB_MMAP_TXBB_DCOC2_I_LSBSEL_10_VALUE 1
/**  */
#define TX_APB_MMAP_TXBB_DCOC2_I_LSBSEL_20_VALUE 2
/**  */
#define TX_APB_MMAP_TXBB_DCOC2_I_LSBSEL_40_VALUE 3
/**  */
#define TX_APB_MMAP_TXBB_DCOC2_I_LSBSEL_5_VALUE 0
#define TX_APB_MMAP_TXBB_DCOC2_Q_LSBSEL_OFFSET 16
#define TX_APB_MMAP_TXBB_DCOC2_Q_LSBSEL_SIZE 2
/**  */
#define TX_APB_MMAP_TXBB_DCOC2_Q_LSBSEL_10_VALUE 1
/**  */
#define TX_APB_MMAP_TXBB_DCOC2_Q_LSBSEL_20_VALUE 2
/**  */
#define TX_APB_MMAP_TXBB_DCOC2_Q_LSBSEL_40_VALUE 3
/**  */
#define TX_APB_MMAP_TXBB_DCOC2_Q_LSBSEL_5_VALUE 0

/** bit field defines for tx_apb_mmap_txbb_s#filter_i1 */
#define TX_APB_MMAP_TXBB_FILTER_I1_BIQUAD1_LP_OFFSET 0
#define TX_APB_MMAP_TXBB_FILTER_I1_BIQUAD1_LP_SIZE 1
#define TX_APB_MMAP_TXBB_FILTER_I1_BIQUAD1_C_OFFSET 1
#define TX_APB_MMAP_TXBB_FILTER_I1_BIQUAD1_C_SIZE 7
#define TX_APB_MMAP_TXBB_FILTER_I1_BIQUAD1_CC_OFFSET 8
#define TX_APB_MMAP_TXBB_FILTER_I1_BIQUAD1_CC_SIZE 7

/** bit field defines for tx_apb_mmap_txbb_s#filter_i2 */
#define TX_APB_MMAP_TXBB_FILTER_I2_BIQUAD2_C1_OFFSET 0
#define TX_APB_MMAP_TXBB_FILTER_I2_BIQUAD2_C1_SIZE 7
#define TX_APB_MMAP_TXBB_FILTER_I2_BIQUAD2_C2_OFFSET 7
#define TX_APB_MMAP_TXBB_FILTER_I2_BIQUAD2_C2_SIZE 7
#define TX_APB_MMAP_TXBB_FILTER_I2_BIQUAD2_CC_OFFSET 14
#define TX_APB_MMAP_TXBB_FILTER_I2_BIQUAD2_CC_SIZE 7

/** bit field defines for tx_apb_mmap_txbb_s#filter_q1 */
#define TX_APB_MMAP_TXBB_FILTER_Q1_BIQUAD1_LP_OFFSET 0
#define TX_APB_MMAP_TXBB_FILTER_Q1_BIQUAD1_LP_SIZE 1
#define TX_APB_MMAP_TXBB_FILTER_Q1_BIQUAD1_C_OFFSET 1
#define TX_APB_MMAP_TXBB_FILTER_Q1_BIQUAD1_C_SIZE 7
#define TX_APB_MMAP_TXBB_FILTER_Q1_BIQUAD1_CC_OFFSET 8
#define TX_APB_MMAP_TXBB_FILTER_Q1_BIQUAD1_CC_SIZE 7

/** bit field defines for tx_apb_mmap_txbb_s#filter_q2 */
#define TX_APB_MMAP_TXBB_FILTER_Q2_BIQUAD2_C1_OFFSET 0
#define TX_APB_MMAP_TXBB_FILTER_Q2_BIQUAD2_C1_SIZE 7
#define TX_APB_MMAP_TXBB_FILTER_Q2_BIQUAD2_C2_OFFSET 7
#define TX_APB_MMAP_TXBB_FILTER_Q2_BIQUAD2_C2_SIZE 7
#define TX_APB_MMAP_TXBB_FILTER_Q2_BIQUAD2_CC_OFFSET 14
#define TX_APB_MMAP_TXBB_FILTER_Q2_BIQUAD2_CC_SIZE 7

/** bit field defines for tx_apb_mmap_txbb_s#iqmux */
#define TX_APB_MMAP_TXBB_IQMUX_COMP_CC1_OFFSET 0
#define TX_APB_MMAP_TXBB_IQMUX_COMP_CC1_SIZE 3
#define TX_APB_MMAP_TXBB_IQMUX_COMP_RCC1_OFFSET 3
#define TX_APB_MMAP_TXBB_IQMUX_COMP_RCC1_SIZE 1
#define TX_APB_MMAP_TXBB_IQMUX_STAGE1_ITRIM_OFFSET 4
#define TX_APB_MMAP_TXBB_IQMUX_STAGE1_ITRIM_SIZE 3
#define TX_APB_MMAP_TXBB_IQMUX_STAGE2_ITRIM_OFFSET 7
#define TX_APB_MMAP_TXBB_IQMUX_STAGE2_ITRIM_SIZE 3

/** bit field defines for tx_apb_mmap_txbb_s#iqmux_en */
#define TX_APB_MMAP_TXBB_IQMUX_EN_BUFFER_OFFSET 0
#define TX_APB_MMAP_TXBB_IQMUX_EN_BUFFER_SIZE 1
#define TX_APB_MMAP_TXBB_IQMUX_EN_BYPASS_OFFSET 1
#define TX_APB_MMAP_TXBB_IQMUX_EN_BYPASS_SIZE 1
#define TX_APB_MMAP_TXBB_IQMUX_EN_INPUTDRIVER_TIAOUTPUT_OFFSET 2
#define TX_APB_MMAP_TXBB_IQMUX_EN_INPUTDRIVER_TIAOUTPUT_SIZE 1
#define TX_APB_MMAP_TXBB_IQMUX_EN_INPUTDRIVER_BIQUAD1OUTPUT_OFFSET 3
#define TX_APB_MMAP_TXBB_IQMUX_EN_INPUTDRIVER_BIQUAD1OUTPUT_SIZE 1
#define TX_APB_MMAP_TXBB_IQMUX_EN_INPUTDRIVER_FILTERINPUT_OFFSET 4
#define TX_APB_MMAP_TXBB_IQMUX_EN_INPUTDRIVER_FILTERINPUT_SIZE 1
#define TX_APB_MMAP_TXBB_IQMUX_EN_INPUTDRIVER_FILTEROUTPUT_OFFSET 5
#define TX_APB_MMAP_TXBB_IQMUX_EN_INPUTDRIVER_FILTEROUTPUT_SIZE 1
#define TX_APB_MMAP_TXBB_IQMUX_EN_INPUTDRIVER_MEASFILTEROUTPUT_OFFSET 6
#define TX_APB_MMAP_TXBB_IQMUX_EN_INPUTDRIVER_MEASFILTEROUTPUT_SIZE 1
#define TX_APB_MMAP_TXBB_IQMUX_EN_INPUTDRIVER_PAD_OFFSET 7
#define TX_APB_MMAP_TXBB_IQMUX_EN_INPUTDRIVER_PAD_SIZE 1
#define TX_APB_MMAP_TXBB_IQMUX_EN_OUTPUTDRIVER_MIXER_OFFSET 8
#define TX_APB_MMAP_TXBB_IQMUX_EN_OUTPUTDRIVER_MIXER_SIZE 1
#define TX_APB_MMAP_TXBB_IQMUX_EN_OUTPUTDRIVER_PAD_OFFSET 9
#define TX_APB_MMAP_TXBB_IQMUX_EN_OUTPUTDRIVER_PAD_SIZE 1
#define TX_APB_MMAP_TXBB_IQMUX_EN_OUTPUTDRIVER_PAD_GAIN4K_OFFSET 10
#define TX_APB_MMAP_TXBB_IQMUX_EN_OUTPUTDRIVER_PAD_GAIN4K_SIZE 1

/** bit field defines for tx_apb_mmap_txbb_s#filter_rccal */
#define TX_APB_MMAP_TXBB_FILTER_RCCAL_EN_OFFSET 0
#define TX_APB_MMAP_TXBB_FILTER_RCCAL_EN_SIZE 1
#define TX_APB_MMAP_TXBB_FILTER_RCCAL_VSTART_OFFSET 1
#define TX_APB_MMAP_TXBB_FILTER_RCCAL_VSTART_SIZE 1
#define TX_APB_MMAP_TXBB_FILTER_RCCAL_BDAC_OFFSET 2
#define TX_APB_MMAP_TXBB_FILTER_RCCAL_BDAC_SIZE 6
#define TX_APB_MMAP_TXBB_FILTER_RCCAL_EOC_OFFSET 8
#define TX_APB_MMAP_TXBB_FILTER_RCCAL_EOC_SIZE 1
#define TX_APB_MMAP_TXBB_FILTER_RCCAL_VCMP_OFFSET 9
#define TX_APB_MMAP_TXBB_FILTER_RCCAL_VCMP_SIZE 1
#define TX_APB_MMAP_TXBB_FILTER_RCCAL_B2_OFFSET 10
#define TX_APB_MMAP_TXBB_FILTER_RCCAL_B2_SIZE 7

/** bit field defines for tx_apb_mmap_txbb_s#atst_tx */
#define TX_APB_MMAP_TXBB_ATST_TX_MASTER_EN_OFFSET 0
#define TX_APB_MMAP_TXBB_ATST_TX_MASTER_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TX_MASTER_PULLDOWN_OFFSET 1
#define TX_APB_MMAP_TXBB_ATST_TX_MASTER_PULLDOWN_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TX_AUXADC_EN_OFFSET 2
#define TX_APB_MMAP_TXBB_ATST_TX_AUXADC_EN_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TX_FILTER_ET_CONNECT_TO_AUXADC_OFFSET 3
#define TX_APB_MMAP_TXBB_ATST_TX_FILTER_ET_CONNECT_TO_AUXADC_SIZE 1

/** bit field defines for tx_apb_mmap_txbb_s#atst_bb */
#define TX_APB_MMAP_TXBB_ATST_BB_ANA_LDO_EN_A_OFFSET 0
#define TX_APB_MMAP_TXBB_ATST_BB_ANA_LDO_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_IQMUX_LDO_EN_A_OFFSET 1
#define TX_APB_MMAP_TXBB_ATST_BB_IQMUX_LDO_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_ANADAC_LDO_EN_A_OFFSET 2
#define TX_APB_MMAP_TXBB_ATST_BB_ANADAC_LDO_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_DIGDAC_LDO_EN_A_OFFSET 3
#define TX_APB_MMAP_TXBB_ATST_BB_DIGDAC_LDO_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_ET_ANA_LDO_EN_A_OFFSET 4
#define TX_APB_MMAP_TXBB_ATST_BB_ET_ANA_LDO_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_DAC_I_EN_A_OFFSET 5
#define TX_APB_MMAP_TXBB_ATST_BB_DAC_I_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_DAC_Q_EN_A_OFFSET 6
#define TX_APB_MMAP_TXBB_ATST_BB_DAC_Q_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC1_I_EN_A_OFFSET 7
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC1_I_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC1_I_EN_B_OFFSET 8
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC1_I_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC1_Q_EN_A_OFFSET 9
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC1_Q_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC1_Q_EN_B_OFFSET 10
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC1_Q_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC2_I_EN_A_OFFSET 11
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC2_I_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC2_I_EN_B_OFFSET 12
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC2_I_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC2_Q_EN_A_OFFSET 13
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC2_Q_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC2_Q_EN_B_OFFSET 14
#define TX_APB_MMAP_TXBB_ATST_BB_DCOC2_Q_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_I_EN_A_OFFSET 15
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_I_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_I_EN_B_OFFSET 16
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_I_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_I_EN_C_OFFSET 17
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_I_EN_C_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_I_EN_D_OFFSET 18
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_I_EN_D_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_Q_EN_A_OFFSET 19
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_Q_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_Q_EN_B_OFFSET 20
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_Q_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_Q_EN_C_OFFSET 21
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_Q_EN_C_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_Q_EN_D_OFFSET 22
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_Q_EN_D_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_IQMUX_I_EN_A_OFFSET 23
#define TX_APB_MMAP_TXBB_ATST_BB_IQMUX_I_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_IQMUX_I_EN_B_OFFSET 24
#define TX_APB_MMAP_TXBB_ATST_BB_IQMUX_I_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_IQMUX_Q_EN_A_OFFSET 25
#define TX_APB_MMAP_TXBB_ATST_BB_IQMUX_Q_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_IQMUX_Q_EN_B_OFFSET 26
#define TX_APB_MMAP_TXBB_ATST_BB_IQMUX_Q_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_DAC_ET_EN_A_OFFSET 27
#define TX_APB_MMAP_TXBB_ATST_BB_DAC_ET_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_ET_EN_A_OFFSET 28
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_ET_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_ET_EN_B_OFFSET 29
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_ET_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_ET_EN_C_OFFSET 30
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_ET_EN_C_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_ET_EN_D_OFFSET 31
#define TX_APB_MMAP_TXBB_ATST_BB_FILTER_ET_EN_D_SIZE 1

/** bit field defines for tx_apb_mmap_txbb_s#atst_toplevel_txbb */
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_ANA_LDO_EN_A_OFFSET 0
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_ANA_LDO_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_IQMUX_LDO_EN_A_OFFSET 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_IQMUX_LDO_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_ANADAC_LDO_EN_A_OFFSET 2
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_ANADAC_LDO_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DIGDAC_LDO_EN_A_OFFSET 3
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DIGDAC_LDO_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_ET_ANA_LDO_EN_A_OFFSET 4
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_ET_ANA_LDO_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DAC_I_EN_A_OFFSET 5
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DAC_I_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DAC_Q_EN_A_OFFSET 6
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DAC_Q_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC1_I_EN_A_OFFSET 7
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC1_I_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC1_I_EN_B_OFFSET 8
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC1_I_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC1_Q_EN_A_OFFSET 9
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC1_Q_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC1_Q_EN_B_OFFSET 10
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC1_Q_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC2_I_EN_A_OFFSET 11
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC2_I_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC2_I_EN_B_OFFSET 12
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC2_I_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC2_Q_EN_A_OFFSET 13
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC2_Q_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC2_Q_EN_B_OFFSET 14
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DCOC2_Q_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_I_EN_A_OFFSET 15
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_I_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_I_EN_B_OFFSET 16
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_I_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_I_EN_C_OFFSET 17
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_I_EN_C_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_I_EN_D_OFFSET 18
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_I_EN_D_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_Q_EN_A_OFFSET 19
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_Q_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_Q_EN_B_OFFSET 20
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_Q_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_Q_EN_C_OFFSET 21
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_Q_EN_C_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_Q_EN_D_OFFSET 22
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_Q_EN_D_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_IQMUX_I_EN_A_OFFSET 23
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_IQMUX_I_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_IQMUX_I_EN_B_OFFSET 24
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_IQMUX_I_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_IQMUX_Q_EN_A_OFFSET 25
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_IQMUX_Q_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_IQMUX_Q_EN_B_OFFSET 26
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_IQMUX_Q_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DAC_ET_EN_A_OFFSET 27
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_DAC_ET_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_ET_EN_A_OFFSET 28
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_ET_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_ET_EN_B_OFFSET 29
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_ET_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_ET_EN_C_OFFSET 30
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_ET_EN_C_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_ET_EN_D_OFFSET 31
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXBB_FILTER_ET_EN_D_SIZE 1

/** bit field defines for tx_apb_mmap_txbb_s#atst_toplevel_txrf */
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_DA_EN_A_OFFSET 0
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_DA_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_DA_EN_B_OFFSET 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_DA_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_DA_EN_C_OFFSET 2
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_DA_EN_C_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_DA_EN_D_OFFSET 3
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_DA_EN_D_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_DA_EN_E_OFFSET 4
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_DA_EN_E_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_A_OFFSET 5
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_B_OFFSET 6
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_B_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_C_OFFSET 7
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_C_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_D_OFFSET 8
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_D_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_E_OFFSET 9
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_E_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_F_OFFSET 10
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_F_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_G_OFFSET 11
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_G_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_H_OFFSET 12
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_H_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_I_OFFSET 13
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_I_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_J_OFFSET 14
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_MIX_EN_J_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_LDO_EN_A_OFFSET 15
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_LDO_EN_A_SIZE 1
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_LDO_EN_B_OFFSET 16
#define TX_APB_MMAP_TXBB_ATST_TOPLEVEL_TXRF_LDO_EN_B_SIZE 1

/** bit field defines for tx_apb_mmap_txbb_s#txbb_spare */
#define TX_APB_MMAP_TXBB_TXBB_SPARE_MAIN_OFFSET 0
#define TX_APB_MMAP_TXBB_TXBB_SPARE_MAIN_SIZE 8
#define TX_APB_MMAP_TXBB_TXBB_SPARE_I_OFFSET 8
#define TX_APB_MMAP_TXBB_TXBB_SPARE_I_SIZE 8
#define TX_APB_MMAP_TXBB_TXBB_SPARE_Q_OFFSET 16
#define TX_APB_MMAP_TXBB_TXBB_SPARE_Q_SIZE 8

/** bit field defines for tx_apb_mmap_txbb_s#dac_clkmux */
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_CLKIN_SEL_OFFSET 0
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_CLKIN_SEL_SIZE 2
/**  */
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_CLKIN_SEL_NO_CLK_VALUE 0
/**  */
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_CLKIN_SEL_REF_CLK_VALUE 1
/**  */
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_CLKIN_SEL_RX_CLK_VALUE 3
/**  */
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_CLKIN_SEL_TX_CLK_VALUE 2
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_DAC_CLK_SEL_OFFSET 2
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_DAC_CLK_SEL_SIZE 2
/**  */
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_DAC_CLK_SEL_DIV_2_VALUE 3
/**  */
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_DAC_CLK_SEL_NO_CLK_VALUE 0
/**  */
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_DAC_CLK_SEL_UNDIV_VALUE 2
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_DIG_CLK_SEL_OFFSET 4
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_DIG_CLK_SEL_SIZE 2
/**  */
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_DIG_CLK_SEL_DIV_2_VALUE 3
/**  */
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_DIG_CLK_SEL_NO_CLK_VALUE 0
/**  */
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_DIG_CLK_SEL_UNDIV_VALUE 2
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_TX_CLK_SEL_OFFSET 6
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_TX_CLK_SEL_SIZE 2
/**  */
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_TX_CLK_SEL_DIV_2_VALUE 3
/**  */
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_TX_CLK_SEL_NO_CLK_VALUE 0
/**  */
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_TX_CLK_SEL_UNDIV_VALUE 2
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_DIGIF_CLK_INV_OFFSET 8
#define TX_APB_MMAP_TXBB_DAC_CLKMUX_DIGIF_CLK_INV_SIZE 1

/** bit field defines for tx_apb_mmap_txbb_s#dbg_txbb */
#define TX_APB_MMAP_TXBB_DBG_TXBB_MEMMAP_VERSION_SHDW_OFFSET 0
#define TX_APB_MMAP_TXBB_DBG_TXBB_MEMMAP_VERSION_SHDW_SIZE 16
#define TX_APB_MMAP_TXBB_DBG_TXBB_MEMMAP_VERSION_CFG_OFFSET 16
#define TX_APB_MMAP_TXBB_DBG_TXBB_MEMMAP_VERSION_CFG_SIZE 16

/* EOF tx_apb_mmap_txbb.h */
#endif
