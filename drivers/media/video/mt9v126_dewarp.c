/*
 * Dewarp config for the MT9V126 CMOS Image Sensor from Aptina
 *
 * Copyright (C) 2010-2013, Alban Bedel <alban.bedel@avionic-design.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/types.h>
#include "mt9v126_driver.h"

static const u8 dewarp_data_pal_640x480[] = {
	0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
	0x03, 0xe8, 0x02, 0xd0, 0x02, 0x1c, 0x02, 0x40,
	0x00, 0x00, 0x01, 0xe0, 0xf8, 0x48, 0x00, 0x03,
	0xf0, 0x47, 0x00, 0x0d, 0xf8, 0x48, 0x00, 0x03,
	0x88, 0x48, 0x00, 0x06, 0x00, 0x40, 0x00, 0x00,
	0x77, 0x87, 0x00, 0x1f, 0x84, 0x81, 0x00, 0x06,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x71, 0xbf, 0x00, 0x0c, 0x7f, 0x8f, 0x00, 0x12,
	0x95, 0x8d, 0x00, 0x02, 0xaf, 0x0c, 0x00, 0x06,
	0x41, 0x8b, 0x00, 0x18, 0x52, 0x89, 0x00, 0x02,
	0x4b, 0x85, 0x00, 0x1c, 0xec, 0x81, 0x00, 0x07,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xb9, 0x00, 0x1f, 0xaa, 0xbf, 0x00, 0x0a,
	0xd1, 0x12, 0x00, 0x0a, 0xc6, 0x11, 0x00, 0x16,
	0xa8, 0x8f, 0x00, 0x05, 0x4e, 0x0c, 0x00, 0x18,
	0x54, 0x09, 0x00, 0x00, 0xa7, 0x04, 0x00, 0x19,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xaa, 0xe0, 0xae, 0xab, 0xea, 0xba, 0xab, 0xaa,
	0xba, 0xae, 0xaa, 0xea, 0xae, 0xab, 0xea, 0xba,
	0xab, 0xaa, 0xba, 0xae, 0xaa, 0xea, 0xae, 0xab,
	0xea, 0xba, 0xab, 0xaa, 0xba, 0xae, 0xaa, 0xea,
	0xae, 0xab, 0xea, 0xba, 0xab, 0xaa, 0xba, 0xae,
	0xaa, 0xea, 0xae, 0xab, 0xea, 0xba, 0xab, 0xaa,
	0xba, 0xae, 0xaa, 0xea, 0xae, 0xab, 0xea, 0xba,
	0xab, 0xaa, 0xba, 0xae, 0x00, 0x06, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xab, 0xaa, 0xba, 0xae,
	0xaa, 0xea, 0xae, 0xab, 0xea, 0xba, 0xab, 0xaa,
	0xba, 0xae, 0xaa, 0xea, 0xae, 0xab, 0xea, 0xba,
	0xab, 0xaa, 0xba, 0xae, 0xaa, 0xea, 0xae, 0xab,
	0xea, 0xba, 0xab, 0xaa, 0xba, 0xae, 0xaa, 0xea,
	0xae, 0xab, 0xea, 0xba, 0xab, 0xaa, 0xba, 0xae,
	0xaa, 0xea, 0xae, 0xab, 0xea, 0xba, 0xab, 0xaa,
	0xba, 0xae, 0xaa, 0xea, 0xae, 0xab, 0xea, 0xba,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0x03, 0xe8, 0x02, 0x1c, 0x00, 0x00,
	0x01, 0xe0, 0x02, 0x80, 0x00, 0x31, 0x00, 0xa4,
	0x00, 0x60
};

const struct mt9v126_dewarp mt9v126_dewarp_config_pal_640x480 = {
	0x00,
	sizeof(dewarp_data_pal_640x480),
	dewarp_data_pal_640x480
};

static const u8 dewarp_data_p25_640x480_46[] = {
	0x00, 0x61, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
	0x03, 0xe8, 0x02, 0xd0, 0x02, 0x1c, 0x02, 0x40,
	0x00, 0x00, 0x01, 0xe0, 0xf8, 0x48, 0x00, 0x03,
	0xf0, 0x47, 0x00, 0x0d, 0xf8, 0x48, 0x00, 0x03,
	0x88, 0x48, 0x00, 0x06, 0x95, 0x3f, 0x00, 0x0a,
	0x00, 0xb7, 0x00, 0x0c, 0xe3, 0xaf, 0x00, 0x11,
	0xbc, 0xa6, 0x00, 0x0a, 0x72, 0x9d, 0x00, 0x13,
	0x71, 0xbf, 0x00, 0x0c, 0x7f, 0x8f, 0x00, 0x12,
	0x95, 0x8d, 0x00, 0x02, 0xaf, 0x0c, 0x00, 0x06,
	0x41, 0x8b, 0x00, 0x18, 0x52, 0x89, 0x00, 0x02,
	0x4b, 0x85, 0x00, 0x1c, 0xec, 0x81, 0x00, 0x07,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xb9, 0x00, 0x1f, 0xaa, 0xbf, 0x00, 0x0a,
	0xd1, 0x12, 0x00, 0x0a, 0xc6, 0x11, 0x00, 0x16,
	0xa8, 0x8f, 0x00, 0x05, 0x4e, 0x0c, 0x00, 0x18,
	0x54, 0x09, 0x00, 0x00, 0xa7, 0x04, 0x00, 0x19,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xfe, 0xee, 0xfe, 0xfe,
	0xfe, 0xfe, 0xef, 0xee, 0xee, 0xfe, 0xef, 0xee,
	0xee, 0xee, 0xee, 0xef, 0xee, 0xee, 0xee, 0xee,
	0x6e, 0xee, 0xee, 0xee, 0x6e, 0xee, 0xee, 0xee,
	0xee, 0xe6, 0xee, 0x6e, 0xee, 0x6e, 0xee, 0x6e,
	0xee, 0xe6, 0x6e, 0xe6, 0xe6, 0xee, 0xee, 0x6e,
	0x6e, 0xe6, 0xe6, 0xee, 0x66, 0x6e, 0x66, 0x66,
	0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
	0x66, 0x66, 0x6e, 0x66, 0x66, 0x66, 0x66, 0x66,
	0xe6, 0x66, 0x66, 0x66, 0x6e, 0x66, 0x66, 0x66,
	0x66, 0x6e, 0x66, 0x6e, 0xe6, 0x6e, 0x6e, 0x66,
	0xe6, 0xe6, 0x6e, 0x66, 0x6e, 0x6e, 0xee, 0x6e,
	0x6e, 0xe6, 0xe6, 0xee, 0xe6, 0xee, 0xee, 0xee,
	0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xef,
	0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x09, 0x07, 0xd0, 0x02, 0x1c, 0x00, 0x00,
	0x01, 0xe0, 0x02, 0x80, 0x00, 0x31, 0x00, 0xa4,
	0x00, 0x60
};

const struct mt9v126_dewarp mt9v126_dewarp_config_p25_640x480_46 = {
	0x00,
	sizeof(dewarp_data_p25_640x480_46),
	dewarp_data_p25_640x480_46
};

static const u8 dewarp_data_p30_640x480_46[] = {
	0x00, 0x61, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
	0x03, 0x5a, 0x02, 0xd0, 0x02, 0x0d, 0x01, 0xe0,
	0x00, 0x00, 0x01, 0xe0, 0xf8, 0x48, 0x00, 0x03,
	0xf0, 0x47, 0x00, 0x0d, 0xf8, 0x48, 0x00, 0x03,
	0x88, 0x48, 0x00, 0x06, 0x95, 0x3f, 0x00, 0x0a,
	0x00, 0xb7, 0x00, 0x0c, 0xe3, 0xaf, 0x00, 0x11,
	0xbc, 0xa6, 0x00, 0x0a, 0x72, 0x9d, 0x00, 0x13,
	0x71, 0xbf, 0x00, 0x0c, 0x50, 0x0f, 0x00, 0x18,
	0x64, 0x8f, 0x00, 0x0b, 0xc5, 0x0e, 0x00, 0x1f,
	0x5f, 0x8d, 0x00, 0x05, 0x42, 0x8b, 0x00, 0x11,
	0xbd, 0x88, 0x00, 0x00, 0xfa, 0x04, 0x00, 0x12,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x3a, 0x00, 0x10, 0xff, 0xbf, 0x00, 0x0f,
	0x33, 0x10, 0x00, 0x01, 0x57, 0x0e, 0x00, 0x1e,
	0xdf, 0x8c, 0x00, 0x04, 0xfb, 0x86, 0x00, 0x12,
	0x9d, 0x06, 0x00, 0x14, 0x00, 0x83, 0x00, 0x04,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xee, 0xe6, 0xee, 0xee,
	0xee, 0x6e, 0xe6, 0xee, 0xe6, 0xee, 0xee, 0x6e,
	0xe6, 0xe6, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e,
	0x6e, 0x6e, 0xe6, 0xe6, 0x6e, 0x66, 0x66, 0xe6,
	0xe6, 0x6e, 0x6e, 0x66, 0x66, 0xe6, 0x66, 0xe6,
	0x66, 0xe6, 0x66, 0xe6, 0x66, 0xe6, 0x66, 0xe6,
	0x6e, 0x66, 0x6e, 0x66, 0x26, 0x66, 0x62, 0x66,
	0x66, 0x26, 0x26, 0x62, 0x62, 0x66, 0x66, 0x26,
	0x66, 0x62, 0x26, 0x62, 0x26, 0x66, 0x62, 0x66,
	0x62, 0x66, 0x26, 0x66, 0x66, 0x66, 0x66, 0x62,
	0x62, 0x66, 0x66, 0x66, 0x26, 0x66, 0x66, 0x66,
	0x66, 0x66, 0x66, 0x66, 0x66, 0xe6, 0x66, 0x66,
	0x66, 0xe6, 0x66, 0xe6, 0x66, 0xe6, 0x6e, 0x6e,
	0xe6, 0xe6, 0x6e, 0xe6, 0xee, 0x6e, 0xee, 0xe6,
	0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x08, 0x06, 0xb4, 0x02, 0x0d, 0x00, 0x00,
	0x01, 0xe0, 0x02, 0x80, 0x00, 0x31, 0x00, 0xa4,
	0x00, 0x60
};

const struct mt9v126_dewarp mt9v126_dewarp_config_p30_640x480_46 = {
	0x00,
	sizeof(dewarp_data_p30_640x480_46),
	dewarp_data_p30_640x480_46
};