/*
 * This file is subject to the terms of the GFX License. If a copy of
 * the license was not distributed with this file, you can obtain one at:
 *
 *              http://ugfx.org/license.html
 */

#ifndef _GDISP_LLD_CONFIG_H
#define _GDISP_LLD_CONFIG_H

/* uGFX Includes */
#include "sdkconfig.h"
#include "ugfx_driver_config.h"

#if GFX_USE_GDISP

#define GDISP_HARDWARE_STREAM_WRITE     TRUE
// #define GDISP_HARDWARE_STREAM_READ      TRUE
#define GDISP_HARDWARE_CONTROL          TRUE
#define GDISP_HARDWARE_FILLS            TRUE

#define GDISP_LLD_PIXELFORMAT           GDISP_PIXELFORMAT_RGB565

#endif /* GFX_USE_GDISP */

#endif /* _GDISP_LLD_CONFIG_H */