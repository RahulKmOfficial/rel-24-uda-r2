/*
 * Copyright (c) 2016, NVIDIA CORPORATION, All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __IMX230_I2C_TABLES__
#define __IMX230_I2C_TABLES__

#include <media/camera_common.h>
#include <media/imx2xx.h>

#define IMX230_WAIT_MS		11

static imx2xx_reg imx230_start[] = {
	{ 0x0100, 0x01 }, /* mode select streaming on */
	{ IMX2XX_TABLE_END, 0x00 }
};

static imx2xx_reg imx230_stop[] = {
	{ 0x0100, 0x00 }, /* mode select streaming off */
	{ IMX2XX_TABLE_END, 0x00 }
};

static imx2xx_reg imx230_tp_colorbars[] = {
	{0x0600, 0x00},
	{0x0601, 0x02},

	{IMX2XX_TABLE_WAIT_MS, IMX230_WAIT_MS},
	{IMX2XX_TABLE_END, 0x00}
};

static imx2xx_reg imx230_mode_2672x1600[] = {

	/* Mode setting */
	{0x0114, 0x03},
	{0x0220, 0x00},
	{0x0221, 0x11},
	{0x0222, 0x01},
	{0x0340, 0x06},
	{0x0341, 0x9A},
	{0x0342, 0x17},
	{0x0343, 0x88},
	{0x0344, 0x00},
	{0x0345, 0x00},
	{0x0346, 0x01},
	{0x0347, 0x98},
	{0x0348, 0x14},
	{0x0349, 0xDF},
	{0x034A, 0x0E},
	{0x034B, 0x17},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x01},
	{0x0901, 0x22},
	{0x0902, 0x00},
	{0x3000, 0x74},
	{0x3001, 0x00},
	{0x305C, 0x11},

	/* Output size setting */
	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x034C, 0x0A},
	{0x034D, 0x70},
	{0x034E, 0x06},
	{0x034F, 0x40},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x00},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x0A},
	{0x040D, 0x70},
	{0x040E, 0x06},
	{0x040F, 0x40},

	/* Clock setting */
	{0x0301, 0x04},
	{0x0303, 0x02},
	{0x0305, 0x04},
	{0x0306, 0x00},
	{0x0307, 0xC8},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x030D, 0x0F},
	{0x030E, 0x03},
	{0x030F, 0xA9},
	{0x0310, 0x01},

	/* Data rate setting */
	{0x0820, 0x17},
	{0x0821, 0x6C},
	{0x0822, 0xCC},
	{0x0823, 0xCC},

	/* Integration time setting */
	{0x0202, 0x06},
	{0x0203, 0x90},
	{0x0224, 0x01},
	{0x0225, 0xF4},

	/* Gain setting */
	{0x0204, 0x00},
	{0x0205, 0x00},
	{0x0216, 0x00},
	{0x0217, 0x00},
	{0x020E, 0x01},
	{0x020F, 0x00},
	{0x0210, 0x01},
	{0x0211, 0x00},
	{0x0212, 0x01},
	{0x0213, 0x00},
	{0x0214, 0x01},
	{0x0215, 0x00},

	/* HDR setting */
	{0x3006, 0x01},
	{0x3007, 0x02},
	{0x31E0, 0x03},
	{0x31E1, 0xFF},
	{0x31E4, 0x02},

	/* DPC2D setting */
	{0x3A22, 0x20},
	{0x3A23, 0x14},
	{0x3A24, 0xE0},
	{0x3A25, 0x06},
	{0x3A26, 0x40},
	{0x3A2F, 0x00},
	{0x3A30, 0x00},
	{0x3A31, 0x01},
	{0x3A32, 0x98},
	{0x3A33, 0x14},
	{0x3A34, 0xDF},
	{0x3A35, 0x0E},
	{0x3A36, 0x17},
	{0x3A37, 0x00},
	{0x3A38, 0x01},
	{0x3A39, 0x00},

	/* LSC setting */
	{0x3A21, 0x00},

	/* Stats setting */
	{0x3011, 0x00},
	{0x3013, 0x01},

	{IMX2XX_TABLE_END, 0x00}
};

static imx2xx_reg imx230_mode_5344x3200[] = {

	/* Mode setting */
	{0x0114, 0x03},
	{0x0220, 0x00},
	{0x0221, 0x11},
	{0x0222, 0x01},
	{0x0340, 0x0C},
	{0x0341, 0xDA},
	{0x0342, 0x17},
	{0x0343, 0x88},
	{0x0344, 0x00},
	{0x0345, 0x00},
	{0x0346, 0x01},
	{0x0347, 0x98},
	{0x0348, 0x14},
	{0x0349, 0xDF},
	{0x034A, 0x0E},
	{0x034B, 0x17},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x00},
	{0x0901, 0x11},
	{0x0902, 0x00},
	{0x3000, 0x74},
	{0x3001, 0x00},
	{0x305C, 0x11},

	/* Output size setting */
	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x034C, 0x14},
	{0x034D, 0xE0},
	{0x034E, 0x0C},
	{0x034F, 0x80},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x00},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x14},
	{0x040D, 0xE0},
	{0x040E, 0x0C},
	{0x040F, 0x80},

	/* Clock setting */
	{0x0301, 0x04},
	{0x0303, 0x02},
	{0x0305, 0x04},
	{0x0306, 0x00},
	{0x0307, 0xC7},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x030D, 0x0F},
	{0x030E, 0x03},
	{0x030F, 0xA9},
	{0x0310, 0x01},

	/* Data rate setting */
	{0x0820, 0x17},
	{0x0821, 0x6C},
	{0x0822, 0xCC},
	{0x0823, 0xCC},

	/* Integration time setting */
	{0x0202, 0x0C},
	{0x0203, 0xD0},
	{0x0224, 0x01},
	{0x0225, 0xF4},

	/* Gain setting */
	{0x0204, 0x00},
	{0x0205, 0x00},
	{0x0216, 0x00},
	{0x0217, 0x00},
	{0x020E, 0x01},
	{0x020F, 0x00},
	{0x0210, 0x01},
	{0x0211, 0x00},
	{0x0212, 0x01},
	{0x0213, 0x00},
	{0x0214, 0x01},
	{0x0215, 0x00},

	/* HDR setting */
	{0x3006, 0x01},
	{0x3007, 0x02},
	{0x31E0, 0x03},
	{0x31E1, 0xFF},
	{0x31E4, 0x02},

	/* DPC2D setting */
	{0x3A22, 0x20},
	{0x3A23, 0x14},
	{0x3A24, 0xE0},
	{0x3A25, 0x0C},
	{0x3A26, 0x80},
	{0x3A2F, 0x00},
	{0x3A30, 0x00},
	{0x3A31, 0x01},
	{0x3A32, 0x98},
	{0x3A33, 0x14},
	{0x3A34, 0xDF},
	{0x3A35, 0x0E},
	{0x3A36, 0x17},
	{0x3A37, 0x00},
	{0x3A38, 0x00},
	{0x3A39, 0x00},

	/* LSC setting */
	{0x3A21, 0x00},

	/* Stats setting */
	{0x3011, 0x00},
	{0x3013, 0x01},

	{IMX2XX_TABLE_END, 0x00}
};

static imx2xx_reg imx230_mode_5344x4016[] = {

	/* Mode setting */
	{0x0114, 0x03},
	{0x0220, 0x00},
	{0x0221, 0x11},
	{0x0222, 0x01},
	{0x0340, 0x10},
	{0x0341, 0x22},
	{0x0342, 0x17},
	{0x0343, 0x88},
	{0x0344, 0x00},
	{0x0345, 0x00},
	{0x0346, 0x00},
	{0x0347, 0x00},
	{0x0348, 0x14},
	{0x0349, 0xDF},
	{0x034A, 0x0F},
	{0x034B, 0xAF},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x00},
	{0x0901, 0x11},
	{0x0902, 0x00},
	{0x3000, 0x74},
	{0x3001, 0x00},
	{0x305C, 0x11},

	/* Output size setting */
	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x034C, 0x14},
	{0x034D, 0xE0},
	{0x034E, 0x0F},
	{0x034F, 0xB0},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x00},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x14},
	{0x040D, 0xE0},
	{0x040E, 0x0F},
	{0x040F, 0xB0},

	/* Clock setting */
	{0x0301, 0x04},
	{0x0303, 0x02},
	{0x0305, 0x04},
	{0x0306, 0x00},
	{0x0307, 0xB1},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x030D, 0x0F},
	{0x030E, 0x03},
	{0x030F, 0xA9},
	{0x0310, 0x01},

	/* Data rate setting */
	{0x0820, 0x17},
	{0x0821, 0x6C},
	{0x0822, 0xCC},
	{0x0823, 0xCC},

	/* Integration time setting */
	{0x0202, 0x10},
	{0x0203, 0x18},
	{0x0224, 0x01},
	{0x0225, 0xF4},

	/* Gain setting */
	{0x0204, 0x00},
	{0x0205, 0x00},
	{0x0216, 0x00},
	{0x0217, 0x00},
	{0x020E, 0x01},
	{0x020F, 0x00},
	{0x0210, 0x01},
	{0x0211, 0x00},
	{0x0212, 0x01},
	{0x0213, 0x00},
	{0x0214, 0x01},
	{0x0215, 0x00},

	/* HDR setting */
	{0x3006, 0x01},
	{0x3007, 0x02},
	{0x31E0, 0x03},
	{0x31E1, 0xFF},
	{0x31E4, 0x02},

	/* DPC2D setting */
	{0x3A22, 0x20},
	{0x3A23, 0x14},
	{0x3A24, 0xE0},
	{0x3A25, 0x0F},
	{0x3A26, 0xB0},
	{0x3A2F, 0x00},
	{0x3A30, 0x00},
	{0x3A31, 0x00},
	{0x3A32, 0x00},
	{0x3A33, 0x14},
	{0x3A34, 0xDF},
	{0x3A35, 0x0F},
	{0x3A36, 0xAF},
	{0x3A37, 0x00},
	{0x3A38, 0x00},
	{0x3A39, 0x00},

	/* LSC setting */
	{0x3A21, 0x00},

	/* Stats setting */
	{0x3011, 0x00},
	{0x3013, 0x01},

	{IMX2XX_TABLE_END, 0x00}

};

static imx2xx_reg imx230_mode_table_common[] = {

	/* external clock setting */
	{0x0136, 0x18},
	{0x0137, 0x00},

	/* global setting */
	{0x4800, 0x0E},
	{0x4890, 0x01},
	{0x4D1E, 0x01},
	{0x4D1F, 0xFF},
	{0x4FA0, 0x00},
	{0x4FA1, 0x00},
	{0x4FA2, 0x00},
	{0x4FA3, 0x83},
	{0x6153, 0x01},
	{0x6156, 0x01},
	{0x69BB, 0x01},
	{0x69BC, 0x05},
	{0x69BD, 0x05},
	{0x69C1, 0x00},
	{0x69C4, 0x01},
	{0x69C6, 0x01},
	{0x7300, 0x00},
	{0x9009, 0x1A},
	{0xB040, 0x90},
	{0xB041, 0x14},
	{0xB042, 0x6B},
	{0xB043, 0x43},
	{0xB044, 0x63},
	{0xB045, 0x2A},
	{0xB046, 0x68},
	{0xB047, 0x06},
	{0xB048, 0x68},
	{0xB049, 0x07},
	{0xB04A, 0x68},
	{0xB04B, 0x04},
	{0xB04C, 0x68},
	{0xB04D, 0x05},
	{0xB04E, 0x68},
	{0xB04F, 0x16},
	{0xB050, 0x68},
	{0xB051, 0x17},
	{0xB052, 0x68},
	{0xB053, 0x74},
	{0xB054, 0x68},
	{0xB055, 0x75},
	{0xB056, 0x68},
	{0xB057, 0x76},
	{0xB058, 0x68},
	{0xB059, 0x77},
	{0xB05A, 0x68},
	{0xB05B, 0x7A},
	{0xB05C, 0x68},
	{0xB05D, 0x7B},
	{0xB05E, 0x68},
	{0xB05F, 0x0A},
	{0xB060, 0x68},
	{0xB061, 0x0B},
	{0xB062, 0x68},
	{0xB063, 0x08},
	{0xB064, 0x68},
	{0xB065, 0x09},
	{0xB066, 0x68},
	{0xB067, 0x0E},
	{0xB068, 0x68},
	{0xB069, 0x0F},
	{0xB06A, 0x68},
	{0xB06B, 0x0C},
	{0xB06C, 0x68},
	{0xB06D, 0x0D},
	{0xB06E, 0x68},
	{0xB06F, 0x13},
	{0xB070, 0x68},
	{0xB071, 0x12},
	{0xB072, 0x90},
	{0xB073, 0x0E},
	{0xD000, 0xDA},
	{0xD001, 0xDA},
	{0xD002, 0xAF},
	{0xD003, 0xE1},
	{0xD004, 0x55},
	{0xD005, 0x34},
	{0xD006, 0x21},
	{0xD007, 0x00},
	{0xD008, 0x1C},
	{0xD009, 0x80},
	{0xD00A, 0xFE},
	{0xD00B, 0xC5},
	{0xD00C, 0x55},
	{0xD00D, 0xDC},
	{0xD00E, 0xB6},
	{0xD00F, 0x00},
	{0xD010, 0x31},
	{0xD011, 0x02},
	{0xD012, 0x4A},
	{0xD013, 0x0E},
	{0xD014, 0x55},
	{0xD015, 0xF0},
	{0xD016, 0x1B},
	{0xD017, 0x00},
	{0xD018, 0xFA},
	{0xD019, 0x2C},
	{0xD01A, 0xF1},
	{0xD01B, 0x7E},
	{0xD01C, 0x55},
	{0xD01D, 0x1C},
	{0xD01E, 0xD8},
	{0xD01F, 0x00},
	{0xD020, 0x76},
	{0xD021, 0xC1},
	{0xD022, 0xBF},
	{0xD044, 0x40},
	{0xD045, 0xBA},
	{0xD046, 0x70},
	{0xD047, 0x47},
	{0xD048, 0xC0},
	{0xD049, 0xBA},
	{0xD04A, 0x70},
	{0xD04B, 0x47},
	{0xD04C, 0x82},
	{0xD04D, 0xF6},
	{0xD04E, 0xDA},
	{0xD04F, 0xFA},
	{0xD050, 0x00},
	{0xD051, 0xF0},
	{0xD052, 0x02},
	{0xD053, 0xF8},
	{0xD054, 0x81},
	{0xD055, 0xF6},
	{0xD056, 0xCE},
	{0xD057, 0xFD},
	{0xD058, 0x10},
	{0xD059, 0xB5},
	{0xD05A, 0x0D},
	{0xD05B, 0x48},
	{0xD05C, 0x40},
	{0xD05D, 0x7A},
	{0xD05E, 0x01},
	{0xD05F, 0x28},
	{0xD060, 0x15},
	{0xD061, 0xD1},
	{0xD062, 0x0C},
	{0xD063, 0x49},
	{0xD064, 0x0C},
	{0xD065, 0x46},
	{0xD066, 0x40},
	{0xD067, 0x3C},
	{0xD068, 0x48},
	{0xD069, 0x8A},
	{0xD06A, 0x62},
	{0xD06B, 0x8A},
	{0xD06C, 0x80},
	{0xD06D, 0x1A},
	{0xD06E, 0x8A},
	{0xD06F, 0x89},
	{0xD070, 0x00},
	{0xD071, 0xB2},
	{0xD072, 0x10},
	{0xD073, 0x18},
	{0xD074, 0x0A},
	{0xD075, 0x46},
	{0xD076, 0x20},
	{0xD077, 0x32},
	{0xD078, 0x12},
	{0xD079, 0x88},
	{0xD07A, 0x90},
	{0xD07B, 0x42},
	{0xD07C, 0x00},
	{0xD07D, 0xDA},
	{0xD07E, 0x10},
	{0xD07F, 0x46},
	{0xD080, 0x80},
	{0xD081, 0xB2},
	{0xD082, 0x88},
	{0xD083, 0x81},
	{0xD084, 0x84},
	{0xD085, 0xF6},
	{0xD086, 0x06},
	{0xD087, 0xF8},
	{0xD088, 0xE0},
	{0xD089, 0x67},
	{0xD08A, 0x85},
	{0xD08B, 0xF6},
	{0xD08C, 0x4B},
	{0xD08D, 0xFC},
	{0xD08E, 0x10},
	{0xD08F, 0xBD},
	{0xD090, 0x00},
	{0xD091, 0x18},
	{0xD092, 0x1E},
	{0xD093, 0x78},
	{0xD094, 0x00},
	{0xD095, 0x18},
	{0xD096, 0x17},
	{0xD097, 0x98},

	/* Load,  setting */
	{0x5869, 0x01},

	/* Wait at least 10.6ms before stream on */
	{IMX2XX_TABLE_WAIT_MS, IMX230_WAIT_MS},

	{IMX2XX_TABLE_END, 0x00}
};

static const int imx230_mode_2672x1600_fr[] = {
	58,
};

static const int imx230_mode_5344x3200_fr[] = {
	30,
};

static const int imx230_mode_5344x4016_fr[] = {
	21,
};

enum {
	IMX230_MODE_2672x1600 = IMX2XX_SENSOR_MODE_BEGIN,
	IMX230_MODE_5344x3200,
	IMX230_MODE_5344x4016,
};

static imx2xx_reg *imx230_mode_table[] = {
	[IMX2XX_MODE_COMMON] = imx230_mode_table_common,
	[IMX2XX_MODE_START_STREAM] = imx230_start,
	[IMX2XX_MODE_STOP_STREAM] = imx230_stop,
	[IMX2XX_MODE_TEST_PATTERN] = imx230_tp_colorbars,

	[IMX230_MODE_2672x1600] = imx230_mode_2672x1600,
	[IMX230_MODE_5344x3200] = imx230_mode_5344x3200,
	[IMX230_MODE_5344x4016] = imx230_mode_5344x4016,
};

static const struct camera_common_frmfmt imx230_frmfmt[] = {
	{{2672, 1600},	imx230_mode_2672x1600_fr, 1, 0, IMX230_MODE_2672x1600},
	{{5344, 3200},	imx230_mode_5344x3200_fr, 1, 0, IMX230_MODE_5344x3200},
	{{5344, 4016},	imx230_mode_5344x4016_fr, 1, 0, IMX230_MODE_5344x4016},
};

static const struct camera_common_colorfmt imx230_color_fmts[] = {
	{
		V4L2_MBUS_FMT_SRGGB10_1X10,
		V4L2_COLORSPACE_SRGB,
		V4L2_PIX_FMT_SRGGB10,
	},
};

#endif  /* __IMX230_I2C_TABLES__ */
