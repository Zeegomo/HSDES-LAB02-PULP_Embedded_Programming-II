/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __ARCHI_ANALOG_VIVOSOC_H__
#define __ARCHI_ANALOG_VIVOSOC_H__

/*
 * Analog top ARCHI file for VivoSoC3
 *
 */

// Include ARCHI driver files for IPs available to chip. Choose correct version 

// Control driver: IP0, IP3, IP4, IP6
#include "archi/analog/control_v3.h"

// EXG driver: IP1, IP2, IP5
#include "archi/analog/exg_v3.h"

// PPG driver: IP7
#include "archi/analog/ppg_v3.h"

// STIM driver: IP8
#include "archi/analog/stim_v3.h"

// BIOZ driver: IP10
#include "archi/analog/bioz_v3.h"

/*
 * Analog register offsets
 */

// Base register offset for analog IPs
#define ARCHI_ANALOG_IP_OFFSET              0x20

// Base register offset for ExG channels
#define ARCHI_ANALOG_EXG_CH_OFFSET         	0x10

// Bit position of IP information in register address
#define ARCHI_ANALOG_IP_BIT                	0x09

// Offset of mask register 
#define ARCHI_ANALOG_MASK_REG 				0x0C

/*
 * IP defines
 * Attention: analog IP numbers do not always match the analog block numbering on pulp side!
 */
//											ana_block
// IP0: Band-Gap and Biases0
#define ARCHI_ANALOG_CONTROL_BG_BIAS_IP 	0

// IP10: BioZ - AFE and SAR
#define ARCHI_ANALOG_BIOZ_IP                10

// IP2: SAR Cerebro
#define ARCHI_ANALOG_EXG_SAR_IP             2

// IP3: Clock Divider
#define ARCHI_ANALOG_CONTORL_CLK_DIV_IP     3

// IP4: Clock Generator
#define ARCHI_ANALOG_CONTORL_CLK_GEN_IP     4

// IP5: Electrode Impedance Measurement
#define ARCHI_ANALOG_EXG_EIM_IP             5

// IP6: PMU
#define ARCHI_ANALOG_CONTORL_PMU_IP         6

// IP7: TMA-O
#define ARCHI_ANALOG_PPG_IP                 7

// IP8: Miur Nerve Stimulator and Blocker
#define ARCHI_ANALOG_STIM_IP                8

//											ana_channel (base channel)
// IP1: EXG Channels
#define ARCHI_ANALOG_EXG_CH_0               0
#define ARCHI_ANALOG_EXG_CH_1               1
#define ARCHI_ANALOG_EXG_CH_2               2
#define ARCHI_ANALOG_EXG_CH_3               3
#define ARCHI_ANALOG_EXG_CH_4               4
#define ARCHI_ANALOG_EXG_CH_5               5
#define ARCHI_ANALOG_EXG_CH_6               6
#define ARCHI_ANALOG_EXG_CH_7               7
#define ARCHI_ANALOG_EXG_CH_8               8

#else
#error Archi file for VivoSoC already included
#endif		// __ARCHI_ANALOG_VIVOSOC_H__