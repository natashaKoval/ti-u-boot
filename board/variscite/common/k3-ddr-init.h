/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2023, Texas Instruments Incorporated - https://www.ti.com/
 * Copyright (C) 2023-2024 Variscite Ltd. - https://www.variscite.com/
 */

#ifndef __K3_DDR_INIT_H
#define __K3_DDR_INIT_H

int dram_init(void);
int dram_init_banksize(void);

void fixup_ddr_driver_for_ecc(struct spl_image_info *spl_image);
void fixup_memory_node(struct spl_image_info *spl_image);

#endif /* __K3_DDR_INIT_H */
