/* 
 * Copyright (C) 2016 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __HAL_ANALOG_VIVOSOC_TOP_H__
#define __HAL_ANALOG_VIVOSOC_TOP_H__

#define  __A_ANALOG_ARCHI_INC(x) #x
#define  _A_ANALOG_ARCHI_INC(x) __A_ANALOG_ARCHI_INC(archi/analog/x.h)
#define  A_ANALOG_ARCHI_INC(x) _A_ANALOG_ARCHI_INC(x)

#define  __A_ANALOG_INC(x) #x
#define  _A_ANALOG_INC(x) __A_ANALOG_INC(hal/analog/x.h)
#define  A_ANALOG_INC(x) _A_ANALOG_INC(x)

#include A_ANALOG_ARCHI_INC(PULP_CHIP_STR)
#include A_ANALOG_INC(PULP_CHIP_STR)

#endif    // __HAL_ANALOG_VIVOSOC_TOP_H__
