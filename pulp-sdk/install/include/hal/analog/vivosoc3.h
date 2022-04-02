/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __HAL_ANALOG_VIVOSOC_H__
#define __HAL_ANALOG_VIVOSOC_H__

#include "hal/pulp.h"

/*
 * Analog top HAL file for VivoSoC3
 *
 */

static inline void hal_analog_ip_write_reg(int ip, int reg, int value);
static inline void hal_analog_ip_write_bit(int ip, int reg, int value, int mask);
static inline unsigned int hal_analog_ip_read_reg(int ip, int reg);

// Include HAL driver files for IPs available to chip. Choose correct version 

// Control driver: IP0, IP3, IP4, IP6
#include "hal/analog/control_v3.h"

// EXG driver: IP1, IP2, IP5
#include "hal/analog/exg_v3.h"

// PPG driver: IP7
#include "hal/analog/ppg_v3.h"

// STIM driver: IP8
#include "hal/analog/stim_v3.h"

// BIOZ driver: IP10
#include "hal/analog/bioz_v3.h"

/*
 * General register write functions
 */

// Write full register given ip, register number and value
static inline void hal_analog_ip_write_reg(int ip, int reg, int value) {
	pulp_write32(ARCHI_ANALOG_ADDR + ((ARCHI_ANALOG_IP_OFFSET + ip) << ARCHI_ANALOG_IP_BIT) + (reg << 2), value);
}

// Write part of register given ip, register number, value and mask
// Note: there is only one mask register for all IPs! Make sure that this function is not interrupted!
static inline void hal_analog_ip_write_bit(int ip, int reg, int value, int mask) {
	pulp_write32(ARCHI_ANALOG_ADDR + ARCHI_ANALOG_MASK_REG, mask);	// set mask
	pulp_write32(ARCHI_ANALOG_ADDR + ((ARCHI_ANALOG_IP_OFFSET + ip) << ARCHI_ANALOG_IP_BIT) + (reg << 2), value);
	pulp_write32(ARCHI_ANALOG_ADDR + ARCHI_ANALOG_MASK_REG, 0xFFFFFFFF);	// reset mask
}

// Read from general register given ip, register number and value
static inline unsigned int hal_analog_ip_read_reg(int ip, int reg) {
	return pulp_read32(ARCHI_ANALOG_ADDR + ((ARCHI_ANALOG_IP_OFFSET + ip) << ARCHI_ANALOG_IP_BIT) + (reg << 2));
}

#else
#error HAL file for VivoSoC already included
#endif		// __HAL_ANALOG_VIVOSOC_H__
