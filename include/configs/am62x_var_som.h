/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Configuration header file for K3 AM625 SoC family
 *
 * Copyright (C) 2020-2022 Texas Instruments Incorporated - https://www.ti.com/
 *	Suman Anna <s-anna@ti.com>
 */

#ifndef __CONFIG_AM62X_VAR_SOM_H
#define __CONFIG_AM62X_VAR_SOM_H
#include <linux/sizes.h>
#include <config_distro_bootcmd.h>

/* DDR Configuration */
#define CFG_SYS_SDRAM_BASE1             0x880000000

#define DEFAULT_SDRAM_SIZE              SZ_512M
#define CFG_MAX_MEM_MAPPED              0x80000000

/* Now for the remaining common defines */
#include <configs/ti_armv7_common.h>

#endif /* __CONFIG_AM62X_VAR_SOM_H */
