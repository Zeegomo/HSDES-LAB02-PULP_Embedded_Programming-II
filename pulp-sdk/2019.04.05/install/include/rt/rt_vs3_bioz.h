/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __RT_RT_ANALOG_BIOZ_H__
#define __RT_RT_ANALOG_BIOZ_H__

/**
 * @ingroup groupDriversAnalog
 */

/** @defgroup analog_bioz BIOZ
 * The following API gives access to the driver for the BIOZ front-end of the analog part of VivoSoC (IP 1). It supports the following functionalities:
 *   - Initialize, enable and disable BIOZ circuitry of VivoSoC
 *   - Setup interrupt based readout of data from analog circuitry
 *    - data is sorted by channels and put into buffers provided by user
 *   
 * The supported functionality covers the standard use-cases. Experienced users can still use the HAL functions for more advanced functionality, however they need to be carefull when interfering with the driver.
 *
 */

/**        
 * @addtogroup analog_bioz
 * @{        
 */

/**@{*/


//!@}

/**        
 * @} end of analog_bioz group        
 */


#else
#error API file for VivoSoC/BioZ already included
#endif		// __RT_RT_ANALOG_BIOZ_H__