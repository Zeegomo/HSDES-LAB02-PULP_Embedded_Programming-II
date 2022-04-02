/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __RT_RT_ANALOG_CONTROL_H__
#define __RT_RT_ANALOG_CONTROL_H__

/**
 * @ingroup groupDriversAnalog
 */

/** @defgroup analog_control Control
 * The following API gives access to the driver for the control part of the analog part of VivoSoC (IPs 0, 3, 4, and 6). It supports the following functionalities:
 *   - Manage band-gap and biases of all analog IPs according to the user's needs (IP 0)
 *   - Manage clock configurations for all analog IPs according to the user's needs and settings found to be optimal (IP 3)
 *   - Manage analog clock generator (IP 4)
 *   - Power management for all analog IPs (IP 6)
 *
 * Note: When using the other analog APIs there is no need to call functions of this API separatly, as this is handled within the other APIs
 *
 * Important: this API can only be used for the VivoSoC2 chip family, including VivoSoC2 and VivoSoC2.001
 *
 * Usage:
 *   - initialize clock dividers (has to be done first)
 *   - enable clk / pmu according to needs
 *
 * The supported functionality covers the standard use-cases. Experienced users can still use the HAL functions for more advanced functionality, however they need to be carefull when interfering with the driver.
 *
 */

/**        
 * @addtogroup analog_control
 * @{        
 */

/**@{*/





//!@}

/**        
 * @} end of analog_control group        
 */

#else
#error API file for VivoSoC/Control already included
#endif		// __RT_RT_ANALOG_CONTROL_H__
