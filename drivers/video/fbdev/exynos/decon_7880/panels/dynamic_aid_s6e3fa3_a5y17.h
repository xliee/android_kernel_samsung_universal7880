#ifndef __DYNAMIC_AID_XXXX_H
#define __DYNAMIC_AID_XXXX_H __FILE__

#include "dynamic_aid.h"

enum {
	IV_VT,
	IV_0,
	IV_3,
	IV_11,
	IV_23,
	IV_35,
	IV_51,
	IV_87,
	IV_151,
	IV_203,
	IV_255,
	IV_MAX
};

enum {
	IBRIGHTNESS_002NIT,
	IBRIGHTNESS_003NIT,
	IBRIGHTNESS_004NIT,
	IBRIGHTNESS_005NIT,
	IBRIGHTNESS_006NIT,
	IBRIGHTNESS_007NIT,
	IBRIGHTNESS_008NIT,
	IBRIGHTNESS_009NIT,
	IBRIGHTNESS_010NIT,
	IBRIGHTNESS_011NIT,
	IBRIGHTNESS_012NIT,
	IBRIGHTNESS_013NIT,
	IBRIGHTNESS_014NIT,
	IBRIGHTNESS_015NIT,
	IBRIGHTNESS_016NIT,
	IBRIGHTNESS_017NIT,
	IBRIGHTNESS_019NIT,
	IBRIGHTNESS_020NIT,
	IBRIGHTNESS_021NIT,
	IBRIGHTNESS_022NIT,
	IBRIGHTNESS_024NIT,
	IBRIGHTNESS_025NIT,
	IBRIGHTNESS_027NIT,
	IBRIGHTNESS_029NIT,
	IBRIGHTNESS_030NIT,
	IBRIGHTNESS_032NIT,
	IBRIGHTNESS_034NIT,
	IBRIGHTNESS_037NIT,
	IBRIGHTNESS_039NIT,
	IBRIGHTNESS_041NIT,
	IBRIGHTNESS_044NIT,
	IBRIGHTNESS_047NIT,
	IBRIGHTNESS_050NIT,
	IBRIGHTNESS_053NIT,
	IBRIGHTNESS_056NIT,
	IBRIGHTNESS_060NIT,
	IBRIGHTNESS_064NIT,
	IBRIGHTNESS_068NIT,
	IBRIGHTNESS_072NIT,
	IBRIGHTNESS_077NIT,
	IBRIGHTNESS_082NIT,
	IBRIGHTNESS_087NIT,
	IBRIGHTNESS_093NIT,
	IBRIGHTNESS_098NIT,
	IBRIGHTNESS_105NIT,
	IBRIGHTNESS_111NIT,
	IBRIGHTNESS_119NIT,
	IBRIGHTNESS_126NIT,
	IBRIGHTNESS_134NIT,
	IBRIGHTNESS_143NIT,
	IBRIGHTNESS_152NIT,
	IBRIGHTNESS_162NIT,
	IBRIGHTNESS_172NIT,
	IBRIGHTNESS_183NIT,
	IBRIGHTNESS_195NIT,
	IBRIGHTNESS_207NIT,
	IBRIGHTNESS_220NIT,
	IBRIGHTNESS_234NIT,
	IBRIGHTNESS_249NIT,
	IBRIGHTNESS_265NIT,
	IBRIGHTNESS_282NIT,
	IBRIGHTNESS_300NIT,
	IBRIGHTNESS_316NIT,
	IBRIGHTNESS_333NIT,
	IBRIGHTNESS_350NIT,
	IBRIGHTNESS_357NIT,
	IBRIGHTNESS_365NIT,
	IBRIGHTNESS_372NIT,
	IBRIGHTNESS_380NIT,
	IBRIGHTNESS_387NIT,
	IBRIGHTNESS_395NIT,
	IBRIGHTNESS_403NIT,
	IBRIGHTNESS_412NIT,
	IBRIGHTNESS_420NIT,
	IBRIGHTNESS_MAX,
	IBRIGHTNESS_465NIT = IBRIGHTNESS_MAX,
	IBRIGHTNESS_488NIT,
	IBRIGHTNESS_510NIT,
	IBRIGHTNESS_533NIT,
	IBRIGHTNESS_555NIT,
	IBRIGHTNESS_578NIT,
	IBRIGHTNESS_600NIT,
	IBRIGHTNESS_HBM_MAX
};

#define VREG_OUT_X1000		6400	/* VREG_OUT x 1000 */

static const int index_voltage_table[IV_MAX] = {
	0,	/* IV_VT */
	0,	/* IV_0 */
	3,	/* IV_3 */
	11,	/* IV_11 */
	23,	/* IV_23 */
	35,	/* IV_35 */
	51,	/* IV_51 */
	87,	/* IV_87 */
	151,	/* IV_151 */
	203,	/* IV_203 */
	255	/* IV_255 */
};

static int index_voltage_reference[IV_MAX] = {
	VREG_OUT_X1000,		/* IV_VT */
	VREG_OUT_X1000,
	VREG_OUT_X1000,
	IV_VT,
	IV_VT,
	IV_VT,
	IV_VT,
	IV_VT,
	IV_VT,
	IV_VT,
	VREG_OUT_X1000		/* IV_255 */
};

static const int index_brightness_table[IBRIGHTNESS_HBM_MAX] = {
	2,	/* IBRIGHTNESS_002NIT */
	3,	/* IBRIGHTNESS_003NIT */
	4,	/* IBRIGHTNESS_004NIT */
	5,	/* IBRIGHTNESS_005NIT */
	6,	/* IBRIGHTNESS_006NIT */
	7,	/* IBRIGHTNESS_007NIT */
	8,	/* IBRIGHTNESS_008NIT */
	9,	/* IBRIGHTNESS_009NIT */
	10,	/* IBRIGHTNESS_010NIT */
	11,	/* IBRIGHTNESS_011NIT */
	12,	/* IBRIGHTNESS_012NIT */
	13,	/* IBRIGHTNESS_013NIT */
	14,	/* IBRIGHTNESS_014NIT */
	15,	/* IBRIGHTNESS_015NIT */
	16,	/* IBRIGHTNESS_016NIT */
	17,	/* IBRIGHTNESS_017NIT */
	19,	/* IBRIGHTNESS_019NIT */
	20,	/* IBRIGHTNESS_020NIT */
	21,	/* IBRIGHTNESS_021NIT */
	22,	/* IBRIGHTNESS_022NIT */
	24,	/* IBRIGHTNESS_024NIT */
	25,	/* IBRIGHTNESS_025NIT */
	27,	/* IBRIGHTNESS_027NIT */
	29,	/* IBRIGHTNESS_029NIT */
	30,	/* IBRIGHTNESS_030NIT */
	32,	/* IBRIGHTNESS_032NIT */
	34,	/* IBRIGHTNESS_034NIT */
	37,	/* IBRIGHTNESS_037NIT */
	39,	/* IBRIGHTNESS_039NIT */
	41,	/* IBRIGHTNESS_041NIT */
	44,	/* IBRIGHTNESS_044NIT */
	47,	/* IBRIGHTNESS_047NIT */
	50,	/* IBRIGHTNESS_050NIT */
	53,	/* IBRIGHTNESS_053NIT */
	56,	/* IBRIGHTNESS_056NIT */
	60,	/* IBRIGHTNESS_060NIT */
	64,	/* IBRIGHTNESS_064NIT */
	68,	/* IBRIGHTNESS_068NIT */
	72,	/* IBRIGHTNESS_072NIT */
	77,	/* IBRIGHTNESS_077NIT */
	82,	/* IBRIGHTNESS_082NIT */
	87,	/* IBRIGHTNESS_087NIT */
	93,	/* IBRIGHTNESS_093NIT */
	98,	/* IBRIGHTNESS_098NIT */
	105,	/* IBRIGHTNESS_105NIT */
	111,	/* IBRIGHTNESS_111NIT */
	119,	/* IBRIGHTNESS_119NIT */
	126,	/* IBRIGHTNESS_126NIT */
	134,	/* IBRIGHTNESS_134NIT */
	143,	/* IBRIGHTNESS_143NIT */
	152,	/* IBRIGHTNESS_152NIT */
	162,	/* IBRIGHTNESS_162NIT */
	172,	/* IBRIGHTNESS_172NIT */
	183,	/* IBRIGHTNESS_183NIT */
	195,	/* IBRIGHTNESS_195NIT */
	207,	/* IBRIGHTNESS_207NIT */
	220,	/* IBRIGHTNESS_220NIT */
	234,	/* IBRIGHTNESS_234NIT */
	249,	/* IBRIGHTNESS_249NIT */
	265,	/* IBRIGHTNESS_265NIT */
	282,	/* IBRIGHTNESS_282NIT */
	300,	/* IBRIGHTNESS_300NIT */
	316,	/* IBRIGHTNESS_316NIT */
	333,	/* IBRIGHTNESS_333NIT */
	350,	/* IBRIGHTNESS_350NIT */
	357,	/* IBRIGHTNESS_357NIT */
	365,	/* IBRIGHTNESS_365NIT */
	372,	/* IBRIGHTNESS_372NIT */
	380,	/* IBRIGHTNESS_380NIT */
	387,	/* IBRIGHTNESS_387NIT */
	395,	/* IBRIGHTNESS_395NIT */
	403,	/* IBRIGHTNESS_403NIT */
	412,	/* IBRIGHTNESS_412NIT */
	420,	/* IBRIGHTNESS_420NIT */
	465,	/* IBRIGHTNESS_465NIT */
	488,	/* IBRIGHTNESS_488NIT */
	510,	/* IBRIGHTNESS_510NIT */
	533,	/* IBRIGHTNESS_533NIT */
	555,	/* IBRIGHTNESS_555NIT */
	578,	/* IBRIGHTNESS_578NIT */
	600	/* IBRIGHTNESS_600NIT */
};

static const int gamma_default_0[IV_MAX*CI_MAX] = {
	0x00, 0x00, 0x00,	/* IV_VT */
	0x00, 0x00, 0x00,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x100, 0x100, 0x100	/* IV_255 */
};

static const int *gamma_default = gamma_default_0;

static const struct formular_t gamma_formula[IV_MAX] = {
	{0, 860},	/* IV_VT */
	{0, 256},
	{64, 320},
	{64, 320},
	{64, 320},
	{64, 320},
	{64, 320},
	{64, 320},
	{64, 320},
	{64, 320},
	{72, 860}	/* IV_255 */
};

static const int vt_voltage_value[] = {
	0, 12, 24, 36, 48, 60, 72, 84, 96, 108, 138, 148, 158, 168, 178, 186
};

static const int m_gray[IBRIGHTNESS_MAX][IV_MAX] = {
	/* VT ~ V255 */
	{0, 0, 35, 37, 40, 43, 47, 63, 95, 122, 146},
	{0, 0, 31, 33, 36, 39, 44, 60, 93, 121, 146},
	{0, 0, 27, 30, 33, 36, 41, 58, 92, 121, 146},
	{0, 0, 25, 28, 31, 34, 40, 57, 91, 121, 146},
	{0, 0, 24, 27, 30, 33, 39, 56, 91, 121, 146},
	{0, 0, 24, 27, 30, 33, 39, 57, 92, 121, 146},
	{0, 0, 23, 26, 29, 32, 38, 56, 91, 121, 146},
	{0, 0, 22, 25, 28, 32, 38, 56, 91, 121, 146},
	{0, 0, 22, 25, 28, 32, 38, 56, 91, 121, 146},
	{0, 0, 21, 24, 27, 31, 37, 56, 91, 121, 146},
	{0, 0, 21, 24, 27, 31, 37, 56, 91, 121, 146},
	{0, 0, 21, 23, 26, 30, 37, 56, 91, 121, 146},
	{0, 0, 21, 23, 26, 30, 37, 56, 91, 121, 146},
	{0, 0, 21, 23, 26, 30, 37, 56, 91, 121, 146},
	{0, 0, 21, 23, 26, 30, 37, 56, 91, 121, 146},
	{0, 0, 20, 23, 26, 30, 37, 56, 91, 121, 146},
	{0, 0, 20, 23, 26, 30, 37, 56, 91, 121, 146},
	{0, 0, 20, 23, 26, 30, 37, 56, 91, 121, 146},
	{0, 0, 20, 23, 25, 30, 37, 56, 91, 121, 146},
	{0, 0, 19, 22, 24, 29, 37, 55, 90, 121, 146},
	{0, 0, 18, 21, 23, 28, 36, 55, 90, 121, 146},
	{0, 0, 18, 21, 23, 28, 36, 55, 90, 121, 146},
	{0, 0, 17, 20, 23, 28, 36, 55, 90, 121, 146},
	{0, 0, 16, 19, 22, 27, 35, 55, 90, 120, 146},
	{0, 0, 16, 19, 22, 27, 35, 54, 90, 120, 146},
	{0, 0, 16, 19, 22, 27, 35, 54, 90, 120, 146},
	{0, 0, 15, 18, 21, 26, 34, 53, 90, 121, 146},
	{0, 0, 15, 18, 21, 26, 34, 53, 90, 120, 146},
	{0, 0, 14, 17, 20, 25, 33, 53, 90, 121, 146},
	{0, 0, 14, 17, 20, 25, 33, 53, 90, 121, 146},
	{0, 0, 13, 16, 19, 24, 33, 53, 90, 121, 146},
	{0, 0, 12, 15, 19, 24, 33, 53, 89, 120, 146},
	{0, 0, 12, 15, 19, 24, 33, 53, 89, 120, 146},
	{0, 0, 11, 15, 19, 24, 33, 53, 89, 120, 146},
	{0, 0, 11, 15, 19, 24, 33, 53, 89, 120, 146},
	{0, 0, 10, 14, 18, 23, 32, 53, 89, 120, 146},
	{0, 0, 10, 14, 18, 23, 32, 52, 89, 120, 146},
	{0, 0, 10, 13, 18, 23, 32, 52, 89, 120, 146},
	{0, 0, 10, 13, 18, 23, 32, 52, 89, 120, 146},
	{0, 0, 10, 13, 18, 23, 32, 53, 90, 121, 148},
	{0, 0, 9, 13, 18, 24, 33, 55, 93, 124, 152},
	{0, 0, 9, 13, 18, 24, 34, 56, 96, 128, 156},
	{0, 0, 9, 12, 18, 25, 35, 58, 99, 131, 160},
	{0, 0, 9, 13, 19, 26, 36, 60, 102, 134, 165},
	{0, 0, 9, 13, 19, 26, 36, 61, 105, 137, 169},
	{0, 0, 9, 13, 19, 27, 37, 63, 107, 140, 173},
	{0, 0, 8, 12, 19, 27, 38, 64, 110, 144, 178},
	{0, 0, 9, 12, 20, 28, 39, 66, 112, 147, 182},
	{0, 0, 8, 12, 20, 28, 40, 67, 115, 151, 187},
	{0, 0, 8, 12, 20, 29, 41, 69, 118, 155, 192},
	{0, 0, 7, 12, 20, 29, 42, 71, 121, 159, 197},
	{0, 0, 8, 12, 21, 30, 43, 73, 124, 163, 202},
	{0, 0, 7, 12, 21, 30, 44, 74, 127, 167, 207},
	{0, 0, 7, 12, 21, 31, 45, 76, 130, 172, 213},
	{0, 0, 7, 12, 21, 31, 45, 76, 130, 172, 213},
	{0, 0, 6, 12, 21, 31, 45, 76, 130, 172, 213},
	{0, 0, 6, 12, 21, 31, 45, 76, 130, 171, 213},
	{0, 0, 6, 11, 21, 31, 45, 76, 130, 171, 213},
	{0, 0, 6, 11, 21, 32, 45, 77, 131, 172, 214},
	{0, 0, 6, 11, 22, 32, 46, 78, 133, 176, 219},
	{0, 0, 5, 11, 22, 32, 47, 80, 137, 181, 225},
	{0, 0, 5, 11, 22, 33, 48, 82, 140, 186, 231},
	{0, 0, 5, 11, 22, 34, 49, 83, 142, 190, 236},
	{0, 0, 4, 11, 23, 35, 49, 84, 144, 193, 240},
	{0, 0, 4, 11, 23, 35, 50, 86, 148, 198, 247},
	{0, 0, 4, 11, 23, 35, 51, 87, 149, 199, 248},
	{0, 0, 4, 11, 23, 35, 51, 87, 150, 201, 250},
	{0, 0, 4, 11, 23, 35, 51, 87, 150, 201, 250},
	{0, 0, 4, 11, 23, 35, 51, 87, 150, 201, 250},
	{0, 0, 3, 11, 23, 35, 51, 87, 150, 201, 250},
	{0, 0, 3, 12, 24, 36, 52, 87, 150, 201, 250},
	{0, 0, 3, 12, 24, 36, 52, 88, 150, 200, 251},
	{0, 0, 3, 12, 24, 36, 52, 88, 151, 202, 253},
	{0, 0, 3, 11, 23, 35, 51, 87, 151, 203, 255},
};

static const int offset_color[IBRIGHTNESS_MAX][CI_MAX * IV_MAX] = {
	/* VT ~ V255 */
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 1, -3, -5, 2, -3, -9, 0, -4, -11, 2, -3, -11, 0, -5, -5, -1, -3, -3, 1, -2, -8, -1, -11},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 2, -4, -8, 1, -5, -11, 2, -3, -14, -1, -6, -9, 0, -6, -3, -1, -2, -3, 0, -2, -4, 0, -8},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 3, -4, -10, 2, -5, -11, -1, -5, -13, 1, -6, -8, 1, -4, -3, 0, -2, -2, 0, -2, -2, 1, -6},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 3, -4, -10, 1, -6, -11, 0, -4, -15, -1, -7, -7, 0, -5, -2, 0, -2, -3, -1, -1, -2, 0, -6},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 2, -5, -10, -1, -8, -11, 0, -4, -14, -1, -7, -6, 1, -4, -2, 0, -2, -2, -1, -1, -2, 0, -6},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 2, -5, -9, -2, -9, -14, -1, -5, -11, 0, -7, -6, 1, -4, -1, 1, -1, -2, -1, -1, -1, 0, -5},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 1, -6, -9, -2, -9, -11, 0, -5, -11, 1, -8, -6, 0, -5, -1, 0, -1, -2, -1, -1, -1, 0, -5},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -6, 2, -6, -7, 3, -7, -11, -1, -6, -11, 0, -9, -5, 0, -5, -1, 0, 0, -3, -1, -2, 0, 0, -4},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -6, 2, -7, -7, 2, -7, -12, -2, -7, -10, 0, -8, -5, 0, -5, -2, 0, -1, -2, -1, -1, 0, 0, -4},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 2, -8, -8, 2, -7, -11, -1, -6, -7, 2, -7, -5, 0, -5, -1, 0, 0, -2, -1, -1, 0, 0, -4},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 1, -9, -7, 2, -6, -11, -2, -7, -8, 2, -8, -4, 0, -4, -1, 0, 0, -2, -1, -2, 0, 0, -3},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 1, -9, -8, 2, -8, -8, 3, -4, -7, 2, -7, -4, 0, -4, -1, 0, -1, -2, -1, -1, 0, 0, -3},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 0, -10, -8, 1, -8, -9, 2, -5, -7, 1, -8, -3, 0, -4, -1, 0, 0, -2, -1, -1, 0, 0, -3},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 0, -10, -10, 1, -8, -7, 2, -5, -7, 1, -8, -4, 0, -4, -1, 0, -1, -2, -1, -1, 1, 0, -2},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 0, -11, -9, 0, -9, -7, 2, -5, -7, 1, -8, -3, 0, -4, -1, 0, 0, -2, -1, -1, 1, 0, -2},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 0, -11, -10, 0, -9, -7, 1, -5, -6, 1, -8, -4, 0, -4, -1, 0, 0, -2, -1, -1, 1, 0, -2},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -9, -1, -12, -10, -2, -9, -9, -1, -7, -5, 1, -7, -4, -1, -4, -1, 0, 0, -1, -1, -1, 0, 0, -2},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -10, -1, -12, -9, -1, -10, -6, -1, -6, -6, 1, -8, -3, 1, -3, -1, 0, 0, -1, -1, -1, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -12, -6, -13, -6, 3, -9, -7, 1, -6, -4, 1, -7, -4, 0, -4, 0, 0, 0, -1, 0, 0, 1, 0, -1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -11, -4, -14, -6, 3, -9, -3, 3, -4, -6, 0, -7, -2, 0, -3, -1, 0, 0, -1, 0, 0, 1, 0, -1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -11, -3, -13, -6, 3, -9, -2, 3, -3, -6, 1, -7, -2, 0, -3, 0, 0, 1, -1, 0, 0, 1, 0, -1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -12, -3, -13, -6, 2, -9, -3, 3, -3, -6, 0, -7, -2, 0, -3, 0, 0, 1, -1, 0, 0, 1, 0, -1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 3, -10, -8, 1, -10, -4, 1, -4, -6, -1, -7, -2, 0, -2, 0, 0, 1, -1, 0, -1, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -4, 2, -11, -7, 2, -8, -4, 2, -3, -4, 1, -6, -2, 0, -2, 0, 0, 1, -1, 0, -1, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 2, -12, -7, 1, -8, -5, 1, -3, -5, 0, -7, -2, 1, -2, 0, 0, 1, -1, 0, -1, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 0, -14, -7, 0, -8, -5, 1, -3, -6, -1, -7, -2, 0, -2, 0, 0, 1, -1, 0, -1, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 0, -14, -7, 2, -8, -5, 1, -3, -4, 0, -5, -1, 1, -2, 0, 0, 1, 0, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -10, -2, -14, -8, 0, -9, -6, -1, -4, -4, 0, -5, -1, 1, -1, 0, 0, 0, -1, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -11, -1, -15, -6, 1, -7, -5, 1, -3, -2, 1, -5, -1, 1, -1, 1, 0, 1, -1, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -11, -2, -15, -7, 0, -8, -6, 0, -3, -2, 1, -5, -1, 0, -1, 1, 0, 1, -1, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -12, -3, -15, -4, 3, -5, -2, 3, -1, -3, 1, -5, -1, 0, -1, 1, 0, 1, -1, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 4, -12, -6, 1, -7, -2, 3, 0, -3, 0, -5, 0, 0, 0, 0, 0, 1, -1, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 3, -12, -8, 0, -7, -3, 2, -1, -3, -1, -5, 0, 0, 0, 0, 0, 1, -1, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -9, 1, -13, -8, -2, -7, -4, 1, -1, -2, -1, -5, -1, 0, 0, 0, 0, 1, -1, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -11, -2, -15, -9, -2, -7, -5, -1, -2, -1, -1, -4, -1, 0, 0, 0, 0, 1, -1, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -10, -3, -15, -7, -1, -7, -2, 2, 0, -1, 1, -4, -1, 0, 0, 0, 0, 1, -1, 0, 0, 2, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -12, -4, -15, -7, -3, -7, -3, 2, 0, -2, 0, -4, 0, 0, 0, 0, 0, 1, -1, 0, 0, 2, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 2, -13, -9, -3, -7, -4, 0, -1, -1, 0, -3, 0, 0, 0, 1, 0, 1, -1, 0, 0, 1, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -9, 0, -13, -9, -4, -7, -4, -1, -1, -1, 0, -3, 0, 0, 0, 1, 0, 1, -1, 0, 0, 1, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -13, -3, -15, -8, -4, -7, -4, -1, -1, 1, 0, -2, -1, 0, -1, 0, 0, 1, 0, 0, 1, 1, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -13, -3, -14, -5, -1, -5, -4, -1, -1, 1, 0, -2, -1, 0, -1, 0, 0, 1, 0, 0, 0, 1, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -14, -4, -15, -4, 0, -4, -4, 1, 0, 0, -1, -2, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 5, -10, -4, 3, -3, -3, -1, 0, -2, -1, -3, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -11, 2, -12, -5, 0, -4, -4, -3, -1, -2, -1, -4, 1, -1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -12, -1, -12, -5, -2, -4, -3, -1, 0, 1, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -13, -2, -12, -1, 2, -2, -3, -2, 0, -1, 0, -3, 0, 0, 1, 1, 0, 1, 0, 0, -1, 1, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 4, -9, -2, 1, -2, -2, 0, 0, 0, 0, -1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 5, -10, -4, -3, -3, -1, 0, 1, 0, 0, -2, -1, 0, 0, 1, 0, 1, 0, 0, -1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 5, -9, -2, -3, -1, -2, 0, 1, 0, 0, -1, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 3, -8, -3, 1, -3, -1, 0, 1, 0, 0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 2, -8, -3, 0, -3, -1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 3, -6, -3, -1, -2, -1, 0, 1, 0, 0, -1, -1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 3, -6, -3, 0, -2, -1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 3, -7, -1, 2, -1, 0, 0, 1, -1, 0, -1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 2, -5, -2, 0, -2, 0, 0, 1, 1, 0, 0, -1, 0, 0, 1, 0, 1, 0, 0, 0, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 1, -5, -1, 0, -1, 0, 0, 1, 0, 0, 0, -1, 0, 0, 1, 0, 1, 0, 0, 0, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, -1, -4, -1, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -4, 1, -5, -2, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};

#ifdef CONFIG_LCD_HMT
enum {
	IBRIGHTNESS_HMT_010NIT,
	IBRIGHTNESS_HMT_011NIT,
	IBRIGHTNESS_HMT_012NIT,
	IBRIGHTNESS_HMT_013NIT,
	IBRIGHTNESS_HMT_014NIT,
	IBRIGHTNESS_HMT_015NIT,
	IBRIGHTNESS_HMT_016NIT,
	IBRIGHTNESS_HMT_017NIT,
	IBRIGHTNESS_HMT_019NIT,
	IBRIGHTNESS_HMT_020NIT,
	IBRIGHTNESS_HMT_021NIT,
	IBRIGHTNESS_HMT_022NIT,
	IBRIGHTNESS_HMT_023NIT,
	IBRIGHTNESS_HMT_025NIT,
	IBRIGHTNESS_HMT_027NIT,
	IBRIGHTNESS_HMT_029NIT,
	IBRIGHTNESS_HMT_031NIT,
	IBRIGHTNESS_HMT_033NIT,
	IBRIGHTNESS_HMT_035NIT,
	IBRIGHTNESS_HMT_037NIT,
	IBRIGHTNESS_HMT_039NIT,
	IBRIGHTNESS_HMT_041NIT,
	IBRIGHTNESS_HMT_044NIT,
	IBRIGHTNESS_HMT_047NIT,
	IBRIGHTNESS_HMT_050NIT,
	IBRIGHTNESS_HMT_053NIT,
	IBRIGHTNESS_HMT_056NIT,
	IBRIGHTNESS_HMT_060NIT,
	IBRIGHTNESS_HMT_064NIT,
	IBRIGHTNESS_HMT_068NIT,
	IBRIGHTNESS_HMT_072NIT,
	IBRIGHTNESS_HMT_077NIT,
	IBRIGHTNESS_HMT_082NIT,
	IBRIGHTNESS_HMT_087NIT,
	IBRIGHTNESS_HMT_093NIT,
	IBRIGHTNESS_HMT_099NIT,
	IBRIGHTNESS_HMT_105NIT,
	IBRIGHTNESS_HMT_420NIT,
	IBRIGHTNESS_HMT_MAX
};

static const int index_brightness_table_hmt[IBRIGHTNESS_HMT_MAX] = {
	10,	/* IBRIGHTNESS_HMT_010NIT */
	11,	/* IBRIGHTNESS_HMT_011NIT */
	12,	/* IBRIGHTNESS_HMT_012NIT */
	13,	/* IBRIGHTNESS_HMT_013NIT */
	14,	/* IBRIGHTNESS_HMT_014NIT */
	15,	/* IBRIGHTNESS_HMT_015NIT */
	16,	/* IBRIGHTNESS_HMT_016NIT */
	17,	/* IBRIGHTNESS_HMT_017NIT */
	19,	/* IBRIGHTNESS_HMT_019NIT */
	20,	/* IBRIGHTNESS_HMT_020NIT */
	21,	/* IBRIGHTNESS_HMT_021NIT */
	22,	/* IBRIGHTNESS_HMT_022NIT */
	23,	/* IBRIGHTNESS_HMT_023NIT */
	25,	/* IBRIGHTNESS_HMT_025NIT */
	27,	/* IBRIGHTNESS_HMT_027NIT */
	29,	/* IBRIGHTNESS_HMT_029NIT */
	31,	/* IBRIGHTNESS_HMT_031NIT */
	33,	/* IBRIGHTNESS_HMT_033NIT */
	35,	/* IBRIGHTNESS_HMT_035NIT */
	37,	/* IBRIGHTNESS_HMT_037NIT */
	39,	/* IBRIGHTNESS_HMT_039NIT */
	41,	/* IBRIGHTNESS_HMT_041NIT */
	44,	/* IBRIGHTNESS_HMT_044NIT */
	47,	/* IBRIGHTNESS_HMT_047NIT */
	50,	/* IBRIGHTNESS_HMT_050NIT */
	53,	/* IBRIGHTNESS_HMT_053NIT */
	56,	/* IBRIGHTNESS_HMT_056NIT */
	60,	/* IBRIGHTNESS_HMT_060NIT */
	64,	/* IBRIGHTNESS_HMT_064NIT */
	68,	/* IBRIGHTNESS_HMT_068NIT */
	72,	/* IBRIGHTNESS_HMT_072NIT */
	77,	/* IBRIGHTNESS_HMT_077NIT */
	82,	/* IBRIGHTNESS_HMT_082NIT */
	87,	/* IBRIGHTNESS_HMT_087NIT */
	93,	/* IBRIGHTNESS_HMT_093NIT */
	99,	/* IBRIGHTNESS_HMT_099NIT */
	105,	/* IBRIGHTNESS_HMT_105NIT */
	420	/* IBRIGHTNESS_HMT_420NIT */
};

static const int m_gray_hmt[IBRIGHTNESS_HMT_MAX][IV_MAX] = {
	/* VT ~ V255 */
	{0, 0, 19, 16, 19, 22, 26, 38, 61, 79, 96},
	{0, 0, 19, 16, 19, 22, 27, 39, 63, 81, 100},
	{0, 0, 19, 16, 19, 22, 28, 40, 66, 84, 104},
	{0, 0, 19, 16, 19, 22, 28, 41, 67, 86, 108},
	{0, 0, 19, 16, 20, 23, 29, 43, 69, 90, 112},
	{0, 0, 14, 16, 20, 24, 30, 44, 72, 93, 115},
	{0, 0, 14, 16, 20, 24, 30, 45, 73, 95, 118},
	{0, 0, 14, 17, 20, 24, 30, 46, 75, 98, 121},
	{0, 0, 15, 17, 21, 25, 31, 48, 78, 103, 127},
	{0, 0, 15, 17, 21, 25, 31, 49, 80, 105, 130},
	{0, 0, 15, 17, 21, 25, 32, 50, 81, 108, 133},
	{0, 0, 15, 17, 21, 26, 33, 50, 83, 111, 136},
	{0, 0, 15, 17, 21, 26, 33, 51, 84, 112, 138},
	{0, 0, 14, 18, 22, 27, 34, 53, 86, 118, 143},
	{0, 0, 15, 18, 22, 27, 35, 55, 90, 121, 147},
	{0, 0, 15, 18, 22, 28, 36, 57, 94, 124, 151},
	{0, 0, 15, 18, 22, 28, 37, 59, 97, 128, 156},
	{0, 0, 15, 18, 22, 29, 38, 60, 99, 131, 160},
	{0, 0, 16, 17, 23, 30, 38, 61, 103, 135, 164},
	{0, 0, 16, 18, 23, 30, 39, 63, 104, 137, 168},
	{0, 0, 15, 18, 23, 31, 40, 64, 107, 140, 172},
	{0, 0, 15, 19, 24, 31, 40, 66, 109, 143, 175},
	{0, 0, 15, 18, 24, 31, 41, 68, 113, 147, 180},
	{0, 0, 16, 19, 25, 32, 43, 70, 116, 151, 186},
	{0, 0, 16, 18, 25, 32, 43, 71, 120, 155, 190},
	{0, 0, 16, 18, 26, 33, 45, 73, 123, 159, 195},
	{0, 0, 15, 19, 26, 33, 46, 75, 125, 162, 199},
	{0, 0, 16, 19, 27, 34, 47, 77, 129, 167, 205},
	{0, 0, 16, 19, 27, 34, 48, 78, 132, 172, 211},
	{0, 0, 16, 19, 27, 35, 49, 81, 136, 176, 217},
	{0, 0, 16, 19, 28, 36, 50, 82, 139, 180, 222},
	{0, 0, 11, 15, 22, 31, 43, 72, 120, 157, 195},
	{0, 0, 11, 16, 23, 32, 44, 73, 123, 161, 200},
	{0, 0, 11, 16, 23, 32, 45, 75, 127, 165, 205},
	{0, 0, 11, 16, 24, 33, 47, 77, 130, 170, 211},
	{0, 0, 11, 16, 24, 34, 47, 79, 133, 175, 217},
	{0, 0, 11, 16, 25, 35, 49, 81, 137, 180, 222},
	{0, 0, 3, 11, 23, 35, 51, 87, 151, 203, 255}
};

static const int offset_color_hmt[IBRIGHTNESS_HMT_MAX][CI_MAX * IV_MAX] = {
	/* VT ~ V255 */
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, -3, -7, 4, -6, -10, 3, -7, -11, 3, -6, -6, 1, -5, -2, 0, -2, -1, 0, -1, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, -4, -7, 3, -6, -10, 4, -6, -8, 3, -6, -6, 2, -5, -2, 0, -1, 0, 0, -1, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, -3, -8, 4, -7, -10, 3, -6, -10, 3, -6, -6, 2, -5, 0, 0, -1, -1, 0, -2, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, -3, -9, 4, -10, -11, 3, -6, -9, 3, -4, -5, 2, -4, 0, 0, -2, 0, 0, -1, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, -3, -8, 3, -8, -11, 3, -7, -8, 3, -6, -5, 1, -4, 0, 0, -1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -5, -10, 4, -10, -11, 3, -8, -8, 2, -5, -5, 1, -4, -1, 0, -2, -1, 0, -1, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -6, 3, -7, -8, 4, -10, -10, 3, -7, -9, 2, -5, -5, 1, -4, 0, 0, 0, 0, 0, -1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -4, 3, -6, -11, 5, -10, -9, 3, -6, -9, 2, -6, -4, 1, -4, -1, 0, -1, 0, 0, -1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 4, -9, -8, 3, -7, -9, 3, -7, -8, 2, -5, -2, 1, -3, 0, 0, 0, 0, 0, 0, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 4, -9, -10, 3, -8, -8, 3, -6, -8, 2, -5, -2, 1, -3, -1, 0, -1, 0, 0, 0, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 4, -9, -10, 4, -8, -9, 3, -6, -7, 2, -4, -3, 1, -3, 0, 0, -1, 0, 0, 0, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -6, 4, -9, -10, 4, -8, -10, 2, -6, -7, 3, -6, -3, 1, -3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 4, -9, -10, 4, -8, -10, 2, -6, -6, 3, -6, -2, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -10, 5, -10, -8, 3, -7, -9, 2, -5, -6, 2, -6, -2, 1, -3, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -11, 4, -10, -8, 3, -7, -9, 3, -6, -6, 2, -6, -1, 1, -3, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -10, 4, -10, -11, 4, -9, -7, 2, -4, -7, 2, -5, -1, 1, -3, 0, 0, 0, 0, 0, 0, 1, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -10, 4, -10, -10, 4, -8, -6, 2, -4, -5, 2, -5, -2, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -13, 5, -11, -10, 3, -7, -8, 2, -5, -5, 2, -4, -1, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -11, 6, -12, -10, 4, -8, -6, 2, -4, -4, 2, -4, 0, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -11, 5, -11, -11, 3, -8, -7, 2, -5, -4, 2, -4, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -12, 5, -11, -11, 4, -8, -5, 2, -4, -5, 2, -4, -1, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -13, 5, -10, -10, 3, -8, -5, 2, -4, -4, 1, -3, -1, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -12, 6, -12, -8, 3, -7, -6, 2, -4, -3, 2, -4, -2, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -14, 6, -13, -8, 3, -6, -6, 2, -5, -4, 1, -4, -1, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -14, 6, -13, -10, 3, -8, -4, 2, -4, -3, 2, -4, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -14, 7, -14, -7, 3, -6, -5, 2, -4, -2, 1, -3, -2, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -13, 6, -12, -8, 3, -6, -4, 2, -4, -3, 1, -3, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -16, 6, -13, -6, 3, -6, -5, 2, -4, -3, 0, -2, -1, 0, -1, 0, 0, 0, 1, 0, 1, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -16, 6, -13, -6, 3, -6, -5, 2, -4, -3, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -17, 6, -13, -7, 3, -6, -5, 2, -5, -2, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -17, 6, -14, -7, 2, -6, -5, 1, -4, -1, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -10, 5, -12, -6, 2, -5, -3, 1, -3, -2, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -10, 5, -10, -5, 2, -4, -3, 1, -4, -2, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -9, 5, -10, -6, 2, -5, -3, 1, -3, -2, 0, -2, -1, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -12, 5, -11, -5, 1, -4, -4, 1, -3, -1, 0, -1, -2, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -11, 5, -11, -6, 1, -4, -2, 1, -3, -2, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, -11, 5, -11, -7, 1, -3, -2, 2, -3, 0, 0, 0, -2, 0, 0, 0, 0, 0, 0, 0, 1, 2, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};
#endif
#endif /* __DYNAMIC_AID_XXXX_H */
