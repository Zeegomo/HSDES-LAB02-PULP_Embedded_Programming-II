/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

// TODO temporary deactivated this code as it does not compile

#ifndef __HAL_ANALOG_BIOZ_H__
#define __HAL_ANALOG_BIOZ_H__

/*
 * Analog BIOZ HAL file for VivoSoC IP: BIOZ_IP
 * Use this file for BIOZ IP compliant to VivoSoC3
 *
 */

/*
 * BIOZ_IP: BioZ - AFE and SAR
 */

// Write full register functions
// Enums
typedef enum {
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_0 = BIOZ_SAR_CC_0,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_1,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_2,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_3,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_4,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_5,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_6,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_7,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_8,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_9,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_10,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_11,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_12,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_13,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_14,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_15,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_16,
	HAL_ANALOG_BIOZ_CLOCKING_CYCLE_RESET,
} hal_analog_bioz_clocking_cycle_t;

typedef enum {
	HAL_ANALOG_BIOZ_CIC_CHANNEL_0 = BIOZ_SAR_CIC_0,
	HAL_ANALOG_BIOZ_CIC_CHANNEL_1,
} hal_analog_bioz_cic_channel_t;

static inline void hal_analog_bioz_sar_cap_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_0, value & ((1<<BIOZ_ADC_CWR_0_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_1, value & ((1<<BIOZ_ADC_CWR_1_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_2, value & ((1<<BIOZ_ADC_CWR_2_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_3, value & ((1<<BIOZ_ADC_CWR_3_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_4_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_4, value & ((1<<BIOZ_ADC_CWR_4_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_5_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_5, value & ((1<<BIOZ_ADC_CWR_5_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_6_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_6, value & ((1<<BIOZ_ADC_CWR_6_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_7_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_7, value & ((1<<BIOZ_ADC_CWR_7_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_8_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_8, value & ((1<<BIOZ_ADC_CWR_8_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_9_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_9, value & ((1<<BIOZ_ADC_CWR_9_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_10_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_10, value & ((1<<BIOZ_ADC_CWR_10_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_11_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_11, value & ((1<<BIOZ_ADC_CWR_11_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_12_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_12, value & ((1<<BIOZ_ADC_CWR_12_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_13_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_13, value & ((1<<BIOZ_ADC_CWR_13_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_14_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_14, value & ((1<<BIOZ_ADC_CWR_14_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_15_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_15, value & ((1<<BIOZ_ADC_CWR_15_NBITS)-1));
}

static inline void hal_analog_bioz_sar_cap_16_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_CWR_16, value & ((1<<BIOZ_ADC_CWR_16_NBITS)-1));
}

static inline void hal_analog_bioz_sar_peturbation_cap_weight_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_SAR_PCWR, value & ((1<<BIOZ_SAR_PCWR_NBITS)-1));
}

static inline void hal_analog_bioz_sar_offset_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_OSR, value & ((1<<BIOZ_ADC_OSR_NBITS)-1));
}

static inline void hal_analog_bioz_mfcr_set(unsigned int value){
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_MFCR, value);
}

static inline void hal_analog_bioz_asr_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_ASR, value);
}

static inline void hal_analog_bioz_sgs_set(unsigned int value){
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_SAR_SGS, value);
}

static inline void hal_analog_bioz_dsr_set(unsigned int value){
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_DSR, value);
}

static inline void hal_analog_bioz_lcr_set(unsigned int value){
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_ADC_LCR, value);
}
// Write full SAR clocking cycles register
static inline void hal_analog_bioz_sar_clocking_cycle_set(hal_analog_bioz_clocking_cycle_t number, unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, number, value);
}
// Write full CIC register given ExG channel
static inline void hal_analog_bioz_sar_cic_set(hal_analog_bioz_cic_channel_t channel, unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, channel, value);
}

static inline void hal_analog_bioz_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_0, value);
}

static inline void hal_analog_bioz_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_BIOZ_IP, BIOZ_1, value);
}

// Write partial register functions

// TODO - only possible with shadow copies!!

// Read full register functions

// NOT POSSIBLE TO READ REGISTER OF THIS IP!

#else
#error HAL file for VivoSoC/BioZ already included
#endif		// __HAL_ANALOG_BIOZ_H__
