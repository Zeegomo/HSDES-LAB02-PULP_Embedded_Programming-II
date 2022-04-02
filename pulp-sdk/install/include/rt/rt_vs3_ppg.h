/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 *      Philipp Schoenle (philipsc@iis.ee.ethz.ch)
 */

#ifndef __RT_RT_ANALOG_PPG_H__
#define __RT_RT_ANALOG_PPG_H__

/**
 * @ingroup groupDriversAnalog
 */

/** @defgroup analog_ppg PPG
 * The following API gives access to the driver for the PPG front-end of the analog part of VivoSoC (IP 7). It supports the following functionalities:
 *   - Initialize, enable and disable PPG circuitry of VivoSoC
 *   - Configure sequences 
 *    - up to 5 sequences which are sequentially processed
 *    - up to 2 subchannels per sequence, often named vs (red LED) and ir (infra-red LED)
 *    - different sets of inputs and outputs can be used for each sequence
 *    - many configurations can be set independently for each sequences, such as DCS, C_f, R_f, LED on times, LED DAC codes, ... 
 *   - Setup interrupt based readout of data from analog circuitry
 *    - data is sorted by subchannels and put into buffers provided by user  
 *   - Control of PPG circuitry
 *
 * Important: this API can only be used for the VivoSoC2 chip family, including VivoSoC2 and VivoSoC2.001
 * 
 * Usage:
 *   - initialize ppg driver (has to be done first)
 *   - initialize all sequences needed, incl sampling frequency, dithering, special modes
 *   - initialize buffers for the data stream
 *   - start continuous samples acquisition
 *   - enable ppg hardware
 *
 * The supported functionality covers the standard use-cases. Experienced users can still use the HAL functions for more advanced functionality, however they need to be carefull when interfering with the driver.
 *
 */

/**        
 * @addtogroup analog_ppg
 * @{        
 */

/**@{*/




//!@}

/**        
 * @} end of analog_ppg group        
 */

#else
#error API file for VivoSoC/PPG already included
#endif    // __RT_RT_ANALOG_PPG_H__