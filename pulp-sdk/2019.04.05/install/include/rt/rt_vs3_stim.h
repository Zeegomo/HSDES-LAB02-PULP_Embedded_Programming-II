/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __RT_RT_ANALOG_STIM_H__
#define __RT_RT_ANALOG_STIM_H__

/**
 * @ingroup groupDriversAnalog
 */

/** @defgroup analog_stim STIM
 * The following API gives access to the driver for the STIM front-end of the analog part of VivoSoC (IP 8). It supports the following functionalities:
 *   - Initialize, enable and disable STIM circuitry of VivoSoC
 *   - Configure stimulation/blocking pulses
 *   
 * The supported functionality covers the standard use-cases. Experienced users can still use the HAL functions for more advanced functionality, however they need to be carefull when interfering with the driver.
 *
 */

/**        
 * @addtogroup analog_stim
 * @{        
 */

/**@{*/




//!@}

/**        
 * @} end of analog_stim group        
 */

#else
#error API file for VivoSoC/Stim already included
#endif    // __RT_RT_ANALOG_STIM_H__
