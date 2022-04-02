/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __RT_RT_ANALOG_API_H__
#define __RT_RT_ANALOG_API_H__

/**
 * @ingroup groupDrivers
 */

/** @defgroup groupDriversAnalog Analog APIs
 * The APIs in this group give access to the different analog frontends of VivoSoC 
 */

#if PULP_CHIP_FAMILY == CHIP_VIVOSOC2
	#include "rt_vs2_bioz.h"
	#include "rt_vs2_control.h"
	#include "rt_vs2_exg.h"
	#include "rt_vs2_ppg.h"
	#include "rt_vs2_stim.h"
#elif PULP_CHIP_FAMILY == CHIP_VIVOSOC3
	#include "rt_vs3_bioz.h"
	#include "rt_vs3_control.h"
	#include "rt_vs3_exg.h"
	#include "rt_vs3_ppg.h"
	#include "rt_vs3_stim.h"
#else
	#error Analog API cannot be compiled for given PULP_CHIP_FAMILY
#endif


#endif		// __RT_RT_ANALOG_API_H__