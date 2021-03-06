#ifndef INCLUDED_SPI
#define INCLUDED_SPI
/*
 * Copyright (C) u-blox 
 * All rights reserved. 
 * This source file is the sole property of u-blox. Reproduction or utilization 
 * of this source in whole or part is forbidden without the written consent of 
 * u-blox.
 *
 */

#include <stdint.h>

/** spi HAL Spreadsheet version number */
#define SPI_HAL_VERSION 0

/** SPI Control Registers
*/
struct spi_s {
   /** SPI Control Set register  at address offset 0x000, read-write */
   uint32_t crs;
   /** SPI Control Clear Set register  at address offset 0x004, read-write */
   uint32_t crc;
   /** SPI Control register  at address offset 0x008, read-write */
   uint32_t cr;
   /** Reserved space */
   uint8_t fill0[4];
   /** Interrupt enable Set register at address offset 0x010, read-write */
   uint32_t imrs;
   /** Interrupt enable Clear Set register at address offset 0x014, read-write */
   uint32_t imrc;
   /** Interrupt enable register at address offset 0x018, read-write */
   uint32_t imr;
   /** Reserved space */
   uint8_t fill1[4];
   /** Status register at address offset 0x020, read-write */
   uint32_t sr;
   /** Clock divider reload value register, SCLK period = 2*(<ClockDiv>+1)/PCLK at address offset 0x024, read-write */
   uint32_t cdr;
   /** Timeout counter reload value register, Timeout = 8*(<ClockDiv>+1)*<Timeout> / PCLK  at address offset 0x028, read-write */
   uint32_t tor;
   /** TX FIFO flush register at address offset 0x02C, read-write */
   uint32_t tffr;
   /** RX FIFO flush register at address offset 0x030, read-write */
   uint32_t rffr;
   /** Transmit FIFO word count register, Number of data words currently in the TX FIFO at address offset 0x034, read-only */
   uint32_t twcr;
   /** Receive FIFO word count register (Number of data words currently in the RX FIFO) at address offset 0x038, read-only */
   uint32_t rwcr;
   /** Wait select register (Time to wait between /SS low and first SCLK edge (must be at least 3 PCLK periods)) at address offset 0x03C, read-write */
   uint32_t wsr;
   /** Wait gap register (Time to wait between two consecutive transmitted words or between the last word and /SS high) at address offset 0x040, read-write */
   uint32_t wgr;
   /** Chip select register (Determines which slave is addressed by pulling low the corresponding chip select line in master mode) at address offset 0x044, read-write */
   uint32_t csr;
   /** Counter Bytes register (Counts number of bytes transitted/received. It counts at the end of the byte) at address offset 0x048, read-write */
   uint32_t cntbr;
   /** Reserved space */
   uint8_t fill2[52];
   /** Transmit data buffer register at address offset 0x080, read-write */
   uint32_t thr;
   /** Reserved space */
   uint8_t fill3[124];
   /** Receive data buffer register at address offset 0x100, read-only */
   uint32_t rhr;
   /** Reserved space */
   uint8_t fill4[252];
   /** TX DMA: Current pointer register at address offset 0x200, read-write */
   uint32_t ctxptr;
   /** TX DMA: Current byte count register at address offset 0x204, read-write */
   uint32_t ctxcnt;
   /** TX DMA: Next pointer register at address offset 0x208, read-write */
   uint32_t ntxptr;
   /** TX DMA: Next byte count register at address offset 0x20C, read-write */
   uint32_t ntxcnt;
   /** RX DMA: Current pointer register at address offset 0x210, read-write */
   uint32_t crxptr;
   /** RX DMA: Current byte count register at address offset 0x214, read-write */
   uint32_t crxcnt;
   /** RX DMA: Next pointer register at address offset 0x218, read-write */
   uint32_t nrxptr;
   /** RX DMA: next byte count register at address offset 0x21C, read-write */
   uint32_t nrxcnt;
   /** RX DMA: RX Data byte compare register at address offset 0x220, read-write */
   uint32_t rxcmp;
};

/** bit field defines for spi_s#crs */
#define SPI_CRS_NONE_OFFSET 0
#define SPI_CRS_NONE_SIZE 32

/** bit field defines for spi_s#crc */
#define SPI_CRC_NONE_OFFSET 0
#define SPI_CRC_NONE_SIZE 32

/** bit field defines for spi_s#cr */
#define SPI_CR_CR_ENABLE_OFFSET 0
#define SPI_CR_CR_ENABLE_SIZE 1
/**  */
#define SPI_CR_CR_ENABLE_DISABLE_VALUE 0
/**  */
#define SPI_CR_CR_ENABLE_ENABLE_VALUE 1
#define SPI_CR_CR_MASTER_OFFSET 1
#define SPI_CR_CR_MASTER_SIZE 1
/**  */
#define SPI_CR_CR_MASTER_MASTER_MODE_VALUE 1
/**  */
#define SPI_CR_CR_MASTER_SLAVE_MODE_VALUE 0
#define SPI_CR_CR_CLOCKPOL_OFFSET 2
#define SPI_CR_CR_CLOCKPOL_SIZE 1
/**  */
#define SPI_CR_CR_CLOCKPOL_SCLK_HIGH_WHEN_IDLE_VALUE 1
/**  */
#define SPI_CR_CR_CLOCKPOL_SCLK_LOW_WHEN_IDLE_VALUE 0
#define SPI_CR_CR_CLOCKPHA_OFFSET 3
#define SPI_CR_CR_CLOCKPHA_SIZE 1
/**  */
#define SPI_CR_CR_CLOCKPHA_FIRST_DATA_VALID_ON_FIRST_SCLK_EDGE_VALUE 0
/**  */
#define SPI_CR_CR_CLOCKPHA_FIRST_DATA_VALID_ON_SECOND_SCLK_EDGE_VALUE 1
#define SPI_CR_CR_FLOWCTRL_OFFSET 4
#define SPI_CR_CR_FLOWCTRL_SIZE 1
/**  */
#define SPI_CR_CR_FLOWCTRL_FLOW_CONTROL_9_BIT_MODE_ENABLED_VALUE 1
/**  */
#define SPI_CR_CR_FLOWCTRL_NORMAL_OPERATION_VALUE 0
#define SPI_CR_CR_LOCLB_OFFSET 5
#define SPI_CR_CR_LOCLB_SIZE 1
/**  */
#define SPI_CR_CR_LOCLB_DISABLE_VALUE 0
/**  */
#define SPI_CR_CR_LOCLB_ENABLE_VALUE 1
#define SPI_CR_CR_REMLB_OFFSET 6
#define SPI_CR_CR_REMLB_SIZE 1
/**  */
#define SPI_CR_CR_REMLB_DISABLE_VALUE 0
/**  */
#define SPI_CR_CR_REMLB_ENABLE_VALUE 1
#define SPI_CR_CR_NOBUSERR_OFFSET 7
#define SPI_CR_CR_NOBUSERR_SIZE 1
/**  */
#define SPI_CR_CR_NOBUSERR_BUS_ERROR_CHECKING_DISABLE_VALUE 1
/**  */
#define SPI_CR_CR_NOBUSERR_BUS_ERROR_CHECKING_ENABLE_VALUE 0
#define SPI_CR_CR_SUPRESSFF_OFFSET 8
#define SPI_CR_CR_SUPRESSFF_SIZE 1
/**  */
#define SPI_CR_CR_SUPRESSFF_DISABLE_0XFF_LOADED_INTO_RXFIFO_VALUE 0
/**  */
#define SPI_CR_CR_SUPRESSFF_ENABLE_0XFF_SUPRESSED_VALUE 1
#define SPI_CR_CR_LOCKS_OFFSET 9
#define SPI_CR_CR_LOCKS_SIZE 1
/**  */
#define SPI_CR_CR_LOCKS_DISABLE_VALUE 0
/**  */
#define SPI_CR_CR_LOCKS_ENABLE_ACTIVE_ONLY_DURING_MASTER_MODE_VALUE 1
#define SPI_CR_CR_CONTINUESCK_OFFSET 10
#define SPI_CR_CR_CONTINUESCK_SIZE 1
/**  */
#define SPI_CR_CR_CONTINUESCK_DISABLE_VALUE 0
/**  */
#define SPI_CR_CR_CONTINUESCK_ENABLE_ACTIVE_ONLY_DURING_MASTER_MODE_VALUE 1
#define SPI_CR_CR_FFSUPRESSCNT_OFFSET 11
#define SPI_CR_CR_FFSUPRESSCNT_SIZE 6
/**  */
#define SPI_CR_CR_FFSUPRESSCNT_NUMBER_OF_FFS_TO_STORE_VALUE 0
#define SPI_CR_CR_RXDMA_OFFSET 30
#define SPI_CR_CR_RXDMA_SIZE 1
/**  */
#define SPI_CR_CR_RXDMA_DISABLE_VALUE 0
/**  */
#define SPI_CR_CR_RXDMA_ENABLE_VALUE 1
#define SPI_CR_CR_TXDMA_OFFSET 31
#define SPI_CR_CR_TXDMA_SIZE 1
/**  */
#define SPI_CR_CR_TXDMA_DISABLE_VALUE 0
/**  */
#define SPI_CR_CR_TXDMA_ENABLE_VALUE 1

/** bit field defines for spi_s#imrs */
#define SPI_IMRS_NONE_OFFSET 0
#define SPI_IMRS_NONE_SIZE 32

/** bit field defines for spi_s#imrc */
#define SPI_IMRC_NONE_OFFSET 0
#define SPI_IMRC_NONE_SIZE 32

/** bit field defines for spi_s#imr */
#define SPI_IMR_IMR_RXNOEMPTY_OFFSET 0
#define SPI_IMR_IMR_RXNOEMPTY_SIZE 1
/**  */
#define SPI_IMR_IMR_RXNOEMPTY_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_RXNOEMPTY_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_TXEMPTY_OFFSET 1
#define SPI_IMR_IMR_TXEMPTY_SIZE 1
/**  */
#define SPI_IMR_IMR_TXEMPTY_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_TXEMPTY_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_TXHALFEMPTY_OFFSET 2
#define SPI_IMR_IMR_TXHALFEMPTY_SIZE 1
/**  */
#define SPI_IMR_IMR_TXHALFEMPTY_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_TXHALFEMPTY_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_BUSERROR_OFFSET 3
#define SPI_IMR_IMR_BUSERROR_SIZE 1
/**  */
#define SPI_IMR_IMR_BUSERROR_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_BUSERROR_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_RXUNDERFLOWERR_OFFSET 4
#define SPI_IMR_IMR_RXUNDERFLOWERR_SIZE 1
/**  */
#define SPI_IMR_IMR_RXUNDERFLOWERR_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_RXUNDERFLOWERR_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_RXOVERFLOWERR_OFFSET 5
#define SPI_IMR_IMR_RXOVERFLOWERR_SIZE 1
/**  */
#define SPI_IMR_IMR_RXOVERFLOWERR_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_RXOVERFLOWERR_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_TIMEOUTNOEMPTY_OFFSET 6
#define SPI_IMR_IMR_TIMEOUTNOEMPTY_SIZE 1
/**  */
#define SPI_IMR_IMR_TIMEOUTNOEMPTY_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_TIMEOUTNOEMPTY_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_RXHALFFULL_OFFSET 7
#define SPI_IMR_IMR_RXHALFFULL_SIZE 1
/**  */
#define SPI_IMR_IMR_RXHALFFULL_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_RXHALFFULL_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_RXFULL_OFFSET 8
#define SPI_IMR_IMR_RXFULL_SIZE 1
/**  */
#define SPI_IMR_IMR_RXFULL_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_RXFULL_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_SELECTED_OFFSET 9
#define SPI_IMR_IMR_SELECTED_SIZE 1
/**  */
#define SPI_IMR_IMR_SELECTED_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_SELECTED_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_DESELECTED_OFFSET 10
#define SPI_IMR_IMR_DESELECTED_SIZE 1
/**  */
#define SPI_IMR_IMR_DESELECTED_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_DESELECTED_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_STRXNOEMPTY_OFFSET 11
#define SPI_IMR_IMR_STRXNOEMPTY_SIZE 1
/**  */
#define SPI_IMR_IMR_STRXNOEMPTY_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_STRXNOEMPTY_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_CNTBYTES_OFFSET 12
#define SPI_IMR_IMR_CNTBYTES_SIZE 1
/**  */
#define SPI_IMR_IMR_CNTBYTES_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_CNTBYTES_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_CHIPSELECT_OFFSET 13
#define SPI_IMR_IMR_CHIPSELECT_SIZE 1
/**  */
#define SPI_IMR_IMR_CHIPSELECT_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_CHIPSELECT_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_RXMATCH_OFFSET 27
#define SPI_IMR_IMR_RXMATCH_SIZE 1
/**  */
#define SPI_IMR_IMR_RXMATCH_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_RXMATCH_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_RXBF_OFFSET 28
#define SPI_IMR_IMR_RXBF_SIZE 1
/**  */
#define SPI_IMR_IMR_RXBF_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_RXBF_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_RXNBF_OFFSET 29
#define SPI_IMR_IMR_RXNBF_SIZE 1
/**  */
#define SPI_IMR_IMR_RXNBF_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_RXNBF_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_TXBE_OFFSET 30
#define SPI_IMR_IMR_TXBE_SIZE 1
/**  */
#define SPI_IMR_IMR_TXBE_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_TXBE_INTERRUPT_ENABLED_VALUE 1
#define SPI_IMR_IMR_TXNBE_OFFSET 31
#define SPI_IMR_IMR_TXNBE_SIZE 1
/**  */
#define SPI_IMR_IMR_TXNBE_INTERRUPT_DISABLED_VALUE 0
/**  */
#define SPI_IMR_IMR_TXNBE_INTERRUPT_ENABLED_VALUE 1

/** bit field defines for spi_s#sr */
#define SPI_SR_SR_RXNOEMPTY_OFFSET 0
#define SPI_SR_SR_RXNOEMPTY_SIZE 1
/**  */
#define SPI_SR_SR_RXNOEMPTY_AT_LEAST_ONE_DATA_WORD_IS_IN_RX_BUFFER_VALUE 1
/**  */
#define SPI_SR_SR_RXNOEMPTY_RX_BUFFER_IS_EMPTY_VALUE 0
#define SPI_SR_SR_TXEMPTY_OFFSET 1
#define SPI_SR_SR_TXEMPTY_SIZE 1
/**  */
#define SPI_SR_SR_TXEMPTY_AT_LEAST_ONE_DATA_WORD_IS_IN_TX_BUFFER_VALUE 0
/**  */
#define SPI_SR_SR_TXEMPTY_TX_BUFFER_IS_EMPTY_VALUE 1
#define SPI_SR_SR_TXHALFEMPTY_OFFSET 2
#define SPI_SR_SR_TXHALFEMPTY_SIZE 1
/** TX_buffer_contains_ */
#define SPI_SR_SR_TXHALFEMPTY_LESS_THAN_OR_EXACT_8_WORDS_VALUE 1
/** TX_buffer_contains_ */
#define SPI_SR_SR_TXHALFEMPTY_MORE_THAN_8_WORDS_VALUE 0
#define SPI_SR_SR_BUSERROR_OFFSET 3
#define SPI_SR_SR_BUSERROR_SIZE 1
/**  */
#define SPI_SR_SR_BUSERROR_BUS_ERROR_DETECTED_VALUE 1
/**  */
#define SPI_SR_SR_BUSERROR_NO_BUS_ERROR_VALUE 0
#define SPI_SR_SR_TXUNDERFLOWERR_OFFSET 4
#define SPI_SR_SR_TXUNDERFLOWERR_SIZE 1
/**  */
#define SPI_SR_SR_TXUNDERFLOWERR_NO_TX_UNDERFLOW_ERROR_VALUE 0
/**  */
#define SPI_SR_SR_TXUNDERFLOWERR_TX_UNDERFLOW_ERROR_DETECTED_VALUE 1
#define SPI_SR_SR_RXOVERFLOWERR_OFFSET 5
#define SPI_SR_SR_RXOVERFLOWERR_SIZE 1
/**  */
#define SPI_SR_SR_RXOVERFLOWERR_NO_RX_OVERFLOW_ERROR_VALUE 0
/**  */
#define SPI_SR_SR_RXOVERFLOWERR_RX_OVERFLOW_ERROR_DETECTED_VALUE 1
#define SPI_SR_SR_TIMEOUTNOEMPTY_OFFSET 6
#define SPI_SR_SR_TIMEOUTNOEMPTY_SIZE 1
/**  */
#define SPI_SR_SR_TIMEOUTNOEMPTY_NO_TIMEOUT_VALUE 0
/**  */
#define SPI_SR_SR_TIMEOUTNOEMPTY_TIMEOUT_DETECTED_VALUE 1
#define SPI_SR_SR_RXHALFFULL_OFFSET 7
#define SPI_SR_SR_RXHALFFULL_SIZE 1
/** RX_buffer_contains_ */
#define SPI_SR_SR_RXHALFFULL_LESS_THAN_OR_EXACT_8_WORDS_VALUE 0
/** RX_buffer_contains_ */
#define SPI_SR_SR_RXHALFFULL_MORE_THAN_8_WORDS_VALUE 1
#define SPI_SR_SR_RXFULL_OFFSET 8
#define SPI_SR_SR_RXFULL_SIZE 1
/**  */
#define SPI_SR_SR_RXFULL_RX_BUFFER_IS_FULL_VALUE 1
/**  */
#define SPI_SR_SR_RXFULL_RX_BUFFER_IS_NOT_FULL_VALUE 0
#define SPI_SR_SR_SELECTED_OFFSET 9
#define SPI_SR_SR_SELECTED_SIZE 1
/**  */
#define SPI_SR_SR_SELECTED_MODULE_WAS_NOT_SELECTED_VALUE 0
/**  */
#define SPI_SR_SR_SELECTED_MODULE_WAS_SELECTED_VALUE 1
#define SPI_SR_SR_DESELECTED_OFFSET 10
#define SPI_SR_SR_DESELECTED_SIZE 1
/**  */
#define SPI_SR_SR_DESELECTED_MODULE_WAS_DESELECTED_VALUE 1
/**  */
#define SPI_SR_SR_DESELECTED_MODULE_WAS_NOT_DESELECTED_VALUE 0
#define SPI_SR_SR_STRXNOEMPTY_OFFSET 11
#define SPI_SR_SR_STRXNOEMPTY_SIZE 1
/**  */
#define SPI_SR_SR_STRXNOEMPTY_AT_LEAST_ONE_DATA_WORD_IS_IN_RX_BUFFER_VALUE 1
/**  */
#define SPI_SR_SR_STRXNOEMPTY_RX_BUFFER_IS_EMPTY_VALUE 0
#define SPI_SR_SR_CNTBYTES_OFFSET 12
#define SPI_SR_SR_CNTBYTES_SIZE 1
/**  */
#define SPI_SR_SR_CNTBYTES_BYTES_TRANSFERRED_EQUAL_CNTBR_VALUE 1
/**  */
#define SPI_SR_SR_CNTBYTES_BYTES_TRANSFERRED_LESSTHAN_CNTBR_VALUE 0
#define SPI_SR_SR_TXFULL_OFFSET 13
#define SPI_SR_SR_TXFULL_SIZE 1
/**  */
#define SPI_SR_SR_TXFULL_TX_BUFFER_IS_FULL_VALUE 1
/**  */
#define SPI_SR_SR_TXFULL_TX_BUFFER_IS_NOT_FULL_VALUE 0
#define SPI_SR_SR_ENABLED_OFFSET 14
#define SPI_SR_SR_ENABLED_SIZE 1
/**  */
#define SPI_SR_SR_ENABLED_DISABLED_VALUE 0
/**  */
#define SPI_SR_SR_ENABLED_ENABLED_VALUE 1
#define SPI_SR_SR_SELECTSTATE_OFFSET 15
#define SPI_SR_SR_SELECTSTATE_SIZE 1
/**  */
#define SPI_SR_SR_SELECTSTATE_NOT_SELECTED__NSS_PIN_IS_HIGH_VALUE 0
/**  */
#define SPI_SR_SR_SELECTSTATE_SELECTED__NSS_PIN_IS_LOW_VALUE 1
#define SPI_SR_SR_CHIPSELECT_OFFSET 16
#define SPI_SR_SR_CHIPSELECT_SIZE 1
/**  */
#define SPI_SR_SR_CHIPSELECT_SLAVE_IS_ACTIVE_VALUE 1
/**  */
#define SPI_SR_SR_CHIPSELECT_SLAVE_IS_NOT_ACTIVE_VALUE 0
#define SPI_SR_SR_RXDMAACTIVE_OFFSET 25
#define SPI_SR_SR_RXDMAACTIVE_SIZE 1
/**  */
#define SPI_SR_SR_RXDMAACTIVE_RX_ACTIVE_VALUE 1
/**  */
#define SPI_SR_SR_RXDMAACTIVE_RX_NOT_ACTIVE_VALUE 0
#define SPI_SR_SR_TXDMAACTIVE_OFFSET 26
#define SPI_SR_SR_TXDMAACTIVE_SIZE 1
/**  */
#define SPI_SR_SR_TXDMAACTIVE_TX_ACTIVE_VALUE 1
/**  */
#define SPI_SR_SR_TXDMAACTIVE_TX_NOT_ACTIVE_VALUE 0
#define SPI_SR_SR_RXMATCH_OFFSET 27
#define SPI_SR_SR_RXMATCH_SIZE 1
/** Received_byte_value */
#define SPI_SR_SR_RXMATCH__MATCHED_IN_RXCMP_VALUE 1
/** Received_byte_value_ */
#define SPI_SR_SR_RXMATCH_NOT_MATCHED_IN_RXCMP_VALUE 0
#define SPI_SR_SR_RXBF_OFFSET 28
#define SPI_SR_SR_RXBF_SIZE 1
/**  */
#define SPI_SR_SR_RXBF_RX_BUFFER_IS_FULL_VALUE 1
/**  */
#define SPI_SR_SR_RXBF_RX_BUFFER_IS_NOT_FULL_VALUE 0
#define SPI_SR_SR_RXNBF_OFFSET 29
#define SPI_SR_SR_RXNBF_SIZE 1
/**  */
#define SPI_SR_SR_RXNBF_RX_NEXT_BUFFER_IS_FULL_VALUE 1
/**  */
#define SPI_SR_SR_RXNBF_RX_NEXTBUFFER_IS_NOT_FULL_VALUE 0
#define SPI_SR_SR_TXBE_OFFSET 30
#define SPI_SR_SR_TXBE_SIZE 1
/**  */
#define SPI_SR_SR_TXBE_TX_BUFFER_IS_EMPTY_VALUE 1
/**  */
#define SPI_SR_SR_TXBE_TX_BUFFER_IS_NOT_EMPTY_VALUE 0
#define SPI_SR_SR_TXNBE_OFFSET 31
#define SPI_SR_SR_TXNBE_SIZE 1
/**  */
#define SPI_SR_SR_TXNBE_TX_NEXT_BUFFER_IS_EMPTY_VALUE 1
/**  */
#define SPI_SR_SR_TXNBE_TX_NEXT_BUFFER_IS_NOT_EMPTY_VALUE 0

/** bit field defines for spi_s#cdr */
#define SPI_CDR_NONE_OFFSET 0
#define SPI_CDR_NONE_SIZE 8

/** bit field defines for spi_s#tor */
#define SPI_TOR_NONE_OFFSET 0
#define SPI_TOR_NONE_SIZE 8

/** bit field defines for spi_s#tffr */
#define SPI_TFFR_NONE_OFFSET 0
#define SPI_TFFR_NONE_SIZE 32

/** bit field defines for spi_s#rffr */
#define SPI_RFFR_NONE_OFFSET 0
#define SPI_RFFR_NONE_SIZE 32

/** bit field defines for spi_s#twcr */
#define SPI_TWCR_NONE_OFFSET 0
#define SPI_TWCR_NONE_SIZE 5

/** bit field defines for spi_s#rwcr */
#define SPI_RWCR_NONE_OFFSET 0
#define SPI_RWCR_NONE_SIZE 5

/** bit field defines for spi_s#wsr */
#define SPI_WSR_NONE_OFFSET 0
#define SPI_WSR_NONE_SIZE 8

/** bit field defines for spi_s#wgr */
#define SPI_WGR_NONE_OFFSET 0
#define SPI_WGR_NONE_SIZE 8

/** bit field defines for spi_s#csr */
#define SPI_CSR_NONE_OFFSET 0
#define SPI_CSR_NONE_SIZE 2

/** bit field defines for spi_s#cntbr */
#define SPI_CNTBR_NONE_OFFSET 0
#define SPI_CNTBR_NONE_SIZE 24

/** bit field defines for spi_s#thr */
#define SPI_THR_NONE_OFFSET 0
#define SPI_THR_NONE_SIZE 8

/** bit field defines for spi_s#rhr */
#define SPI_RHR_NONE_OFFSET 0
#define SPI_RHR_NONE_SIZE 8

/** bit field defines for spi_s#ctxptr */
#define SPI_CTXPTR_NONE_OFFSET 0
#define SPI_CTXPTR_NONE_SIZE 32

/** bit field defines for spi_s#ctxcnt */
#define SPI_CTXCNT_NONE_OFFSET 0
#define SPI_CTXCNT_NONE_SIZE 12

/** bit field defines for spi_s#ntxptr */
#define SPI_NTXPTR_NONE_OFFSET 0
#define SPI_NTXPTR_NONE_SIZE 32

/** bit field defines for spi_s#ntxcnt */
#define SPI_NTXCNT_NONE_OFFSET 0
#define SPI_NTXCNT_NONE_SIZE 12

/** bit field defines for spi_s#crxptr */
#define SPI_CRXPTR_NONE_OFFSET 0
#define SPI_CRXPTR_NONE_SIZE 32

/** bit field defines for spi_s#crxcnt */
#define SPI_CRXCNT_NONE_OFFSET 0
#define SPI_CRXCNT_NONE_SIZE 12

/** bit field defines for spi_s#nrxptr */
#define SPI_NRXPTR_NONE_OFFSET 0
#define SPI_NRXPTR_NONE_SIZE 32

/** bit field defines for spi_s#nrxcnt */
#define SPI_NRXCNT_NONE_OFFSET 0
#define SPI_NRXCNT_NONE_SIZE 12

/** bit field defines for spi_s#rxcmp */
#define SPI_RXCMP_NONE_OFFSET 0
#define SPI_RXCMP_NONE_SIZE 8

/* EOF spi.h */
#endif
