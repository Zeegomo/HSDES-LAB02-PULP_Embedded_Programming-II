/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __RT_RT_ANALOG_EXG_H__
#define __RT_RT_ANALOG_EXG_H__

/**
 * @ingroup groupDriversAnalog
 */

/** @defgroup analog_exg ExG
 * The following API gives access to the driver for the ExG front-end of the analog part of VivoSoC (IP 1, IP 2, IP 5). It supports the following functionalities:
 *   - Initialize, enable and disable ExG circuitry of VivoSoC
 *   - Configure sampling frequency (2*bandwidth) of the sampling of the analog signals
 *    - 8kHz/16kHz/32kHz and possible decimation factors 1/2/4/5/8/10/16/20/25/32/40
 *   - Setup interrupt based readout of data from analog circuitry
 *    - data is sorted by channels and put into buffers provided by user 
 *   
 * The supported functionality covers the standard use-cases. Experienced users can still use the HAL functions for more advanced functionality, however they need to be carefull when interfering with the driver.
 *
 */

/**        
 * @addtogroup analog_exg
 * @{        
 */

/**@{*/



//!@}

/**        
 * @} end of analog_exg group        
 */

#else
#error API file for VivoSoC/ExG already included
#endif    // __RT_RT_ANALOG_EXG_H__