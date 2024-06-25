#include "legolocations.h"

DECOMP_SIZE_ASSERT(LegoLocation, 0x60)
DECOMP_SIZE_ASSERT(LegoLocation::Boundary, 0x18)

// GLOBAL: LEGO1 0x100f4c60
LegoLocation g_locations[] = {
	{0,
	 "look at origin from z=-8",
	 0,
	 1.25,
	 -8,
	 0,
	 0,
	 1,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{1,
	 "LCAMBA1",
	 0.852546,
	 1.25,
	 -17.078703,
	 0.990515,
	 0,
	 -0.137405,
	 0,
	 1,
	 0,
	 {"EDG02_13", 2, 0.75, 0, 0.25, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 40},
	{2,
	 "LCAMBA2",
	 3.505301,
	 1.25,
	 -27.955006,
	 -0.002102,
	 0,
	 0.999998,
	 0,
	 1,
	 0,
	 {"EDG02_37", 2, 0.75, 0, 0.25, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 20},
	{3,
	 "LCAMBA3",
	 -7.472569,
	 1.25,
	 -16.129034,
	 1,
	 0,
	 0.000926,
	 0,
	 1,
	 0,
	 {"EDG02_26", 0, 0.75, 2, 0.25, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 20},
	{4,
	 "LCAMBA4",
	 38.55205,
	 1.25,
	 -16.129,
	 -0.999997,
	 0,
	 0.002449,
	 0,
	 1,
	 0,
	 {"EDG00_146", 0, 0.5, 2, 0.5, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 30},
	{5,
	 "LCAMCA1",
	 -36.778473,
	 -1.996432,
	 30.392212,
	 0.001013,
	 0,
	 -0.999999,
	 0,
	 1,
	 0,
	 {"INT01", 2, 0.5, 6, 0.5, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{6,
	 "LCAMCA2",
	 -36.774277,
	 -1.996432,
	 24.695135,
	 -0.305789,
	 0.001457,
	 0.952098,
	 0.000446,
	 0.999999,
	 -0.001387,
	 {"EDG00_104", 0, 0.5, 2, 0.5, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{7,
	 "LCAMCA3",
	 -36.888363,
	 0.5625,
	 33.169434,
	 -0.091475,
	 -0.001896,
	 0.995806,
	 -0.000173,
	 0.999998,
	 0.001888,
	 {"EDG02_58", 2, 0.25, 0, 0.75, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{8,
	 "LCAMGS1",
	 27.647768,
	 1.25,
	 -4.07201,
	 0,
	 0,
	 1,
	 0,
	 1,
	 0,
	 {"EDG02_40", 2, 0.25, 0, 0.25, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 70},
	{9,
	 "LCAMGS2",
	 25.153421,
	 1.25,
	 6.101026,
	 0,
	 0,
	 -1,
	 0,
	 1,
	 0,
	 {"INT19", 1, 0.75, 0, 0.75, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{10,
	 "LCAMGS3",
	 29.506308,
	 1.25,
	 -1.23529,
	 -1,
	 0,
	 0,
	 0,
	 1,
	 0,
	 {"EDG00_74", 0, 0.5, 2, 0.5, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{11,
	 "LCAMHO1",
	 84.22306,
	 4.78298,
	 29.150623,
	 0.779248,
	 0,
	 -0.626715,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 50},
	{12,
	 "LCAMHO2",
	 90.92687,
	 4.78298,
	 23.340658,
	 -0.983254,
	 0,
	 0.182241,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{13,
	 "LCAMHO3",
	 87.66666,
	 4.829471,
	 20.905437,
	 0.841755,
	 -0.006868,
	 0.539817,
	 0.005781,
	 0.999976,
	 0.003708,
	 {"EDG02_27", 1, 0.89, 2, 0.89, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{14,
	 "LCAMHO4",
	 86.33506,
	 4.814447,
	 20.489912,
	 0.948965,
	 0.035898,
	 0.313331,
	 -0.034088,
	 0.999355,
	 -0.011255,
	 {"EDG02_27", 1, 0.89, 2, 0.89, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 100},
	{15,
	 "LCAMIC1",
	 80.11602,
	 10.193289,
	 -17.946644,
	 0.664706,
	 0,
	 0.747105,
	 0,
	 1,
	 0,
	 {"EDG00_69", 2, 0.5, 0, 0.5, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{16,
	 "LCAMIC2",
	 86.31804,
	 10.193289,
	 -11.24872,
	 -0.936663,
	 0,
	 -0.350231,
	 0,
	 1,
	 0,
	 {"EDG02_66", 2, 0.5, 0, 0.5, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{17,
	 "LCAMIC3",
	 86.82608,
	 10.193289,
	 -4.398705,
	 0.466761,
	 0,
	 -0.884383,
	 0,
	 1,
	 0,
	 {"EDG02_68", 0, 0.5, 2, 0.5, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 20},
	{18,
	 "LCAMJA1",
	 95.05279,
	 1.318484,
	 -46.451622,
	 0.93196,
	 0.006837,
	 0.362497,
	 -0.006372,
	 0.999977,
	 -0.002478,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 100},
	{19,
	 "LCAMJA2",
	 97.214066,
	 1.318484,
	 -49.035267,
	 -0.892783,
	 -0.012109,
	 0.450324,
	 -0.010811,
	 0.999927,
	 0.005453,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{20,
	 "LCAMJA3",
	 94.12146,
	 1.25,
	 -48.242523,
	 -1,
	 0,
	 -0.000415,
	 0,
	 1,
	 0,
	 {"INT33", 1, 0.9, 3, 0.9, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{21,
	 "LCAMJA4",
	 95.58649,
	 1.17483,
	 -43.42485,
	 0.137268,
	 0.010506,
	 -0.990478,
	 -0.001442,
	 0.999945,
	 0.010407,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{22,
	 "LCAMJA5",
	 91.586105,
	 1.17483,
	 -48.882996,
	 0.702508,
	 0.010117,
	 0.711604,
	 -0.007107,
	 0.999949,
	 -0.007199,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{23,
	 "LCAMJS1",
	 9.885858,
	 0.154871,
	 -54.080086,
	 0.573803,
	 -0.001138,
	 -0.818993,
	 0.000653,
	 0.999999,
	 -0.000932,
	 {"INT26", 0, 0.5, 3, 0.5, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 100},
	{24,
	 "LCAMJS2",
	 14.753909,
	 0.125,
	 -55.5238,
	 -0.789437,
	 0,
	 -0.613832,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 100},
	{25,
	 "LCAMJS3",
	 12.373611,
	 0.925977,
	 -64.69941,
	 0.114162,
	 0,
	 0.993462,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 100},
	{26,
	 "LCAMJS4",
	 27.136557,
	 1.125,
	 -41.8613,
	 -0.187784,
	 -0.001389,
	 -0.982209,
	 -0.000261,
	 0.999999,
	 -0.001364,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{27,
	 "LCAMMT1",
	 -63.277508,
	 15.25,
	 23.717245,
	 -0.985194,
	 0,
	 0.171445,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 50},
	{28,
	 "LCAMMT2",
	 -58.28056,
	 15.25,
	 22.75,
	 0.829409,
	 0,
	 -0.558642,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{29,
	 "LCAMPK1",
	 39.875,
	 1.25,
	 -1,
	 0.587492,
	 0,
	 -0.80923,
	 0,
	 1,
	 0,
	 {"EDG00_83", 0, 0.9, 2, 0.9, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 50},
	{30,
	 "LCAMPK2",
	 63.75,
	 1.25,
	 15.5625,
	 -0.968277,
	 0,
	 -0.249878,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{31,
	 "LCAMPK4",
	 49.5625,
	 1.25,
	 0,
	 -0.480011,
	 0,
	 -0.877262,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 25},
	{32,
	 "LCAMPO1",
	 -24.38507,
	 1.25,
	 -55.71749,
	 -1,
	 0,
	 0.000066,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 20},
	{33,
	 "LCAMPO2",
	 -41.35899,
	 1.790912,
	 -56.728477,
	 0.967347,
	 0,
	 0.253455,
	 0,
	 1,
	 0,
	 {"EDG00_191", 0, 0.5, 2, 0.5, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{34,
	 "LCAMPS1",
	 63.1466,
	 2.25,
	 -81.58665,
	 0.860361,
	 0,
	 -0.509685,
	 0,
	 1,
	 0,
	 {"EDG02_40", 0, 0.5, 2, 0.5, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 25},
	{35,
	 "LCAMPS2",
	 70.99095,
	 2.25,
	 -87.82898,
	 -0.746009,
	 0,
	 0.665936,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 25},
	{36,
	 "LCAMPS3",
	 73.92391,
	 2.25,
	 -71.65845,
	 -0.480404,
	 0,
	 -0.877047,
	 0,
	 1,
	 0,
	 {"EDG02_66", 1, 0.15, 2, 0.15, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 25},
	{37,
	 "LCAMPS4",
	 61.471172,
	 1.829919,
	 -74.37842,
	 0.812146,
	 0,
	 -0.583455,
	 0,
	 1,
	 0,
	 {"EDG02_40", 0, 0.5, 2, 0.5, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{38,
	 "LCAMPZ1",
	 -19.517637,
	 1.25,
	 -44.645412,
	 -0.582251,
	 0,
	 0.813009,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 80},
	{39,
	 "LCAMPZ2",
	 -21.870003,
	 1.25,
	 -41.47747,
	 0.310142,
	 0,
	 0.95069,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 90},
	{40,
	 "LCAMPZ3",
	 -21.860731,
	 1.25,
	 -41.47234,
	 0.877738,
	 0,
	 -0.479141,
	 0,
	 1,
	 0,
	 {"EDG00_24", 0, 0.9, 2, 0.9, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 100},
	{41,
	 "LCAMPZ4",
	 -20.492962,
	 1.25,
	 -43.951485,
	 0,
	 0,
	 1,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{42,
	 "LCAMPZ5",
	 -11.0625,
	 1.25,
	 -45.75,
	 -0.998358,
	 0,
	 -0.057283,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 50},
	{43,
	 "LCAMPZ6",
	 -14.837131,
	 1.25,
	 -41.580185,
	 -0.485221,
	 0,
	 0.874392,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{44,
	 "LCAMPZ7",
	 -22.17942,
	 1.25,
	 -41.132347,
	 0.697186,
	 0,
	 0.716891,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{45,
	 "LCAMRA1",
	 -68.90462,
	 10.238018,
	 -15.521397,
	 -0.150999,
	 -0.051266,
	 -0.987204,
	 -0.007751,
	 0.998685,
	 -0.050677,
	 {"EDG00_03", 1, 0.5, 3, 0.5, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{46,
	 "LCAMRA2",
	 -67.931305,
	 7.883309,
	 -28.911201,
	 -0.596641,
	 -0.000131,
	 0.802509,
	 -0.000078,
	 1,
	 0.000105,
	 {"EDG01_17", 0, 0.5, 3, 0.5, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 25},
	{47,
	 "LCAMRA3",
	 -57.06778,
	 7.883309,
	 -45.567757,
	 -0.982252,
	 -0.000114,
	 0.187564,
	 -0.000112,
	 1,
	 0.000021,
	 {"EDG01_40", 2, 0.5, 0, 0.5, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{48,
	 "LCAMRA4",
	 -72.23135,
	 7.912604,
	 -45.26192,
	 0.993571,
	 -0.036148,
	 -0.10728,
	 0.035939,
	 0.999346,
	 -0.00388,
	 {"EDG01_27", 0, 0.5, 2, 0.5, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 25},
	{49,
	 "LCAMRA5",
	 -84.27638,
	 4.683791,
	 -52.99282,
	 0.976109,
	 -0.025475,
	 -0.215783,
	 0.024875,
	 0.999675,
	 -0.005499,
	 {"EDG01_08", 2, 0.7, 0, 0.7, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 25},
	{50,
	 "LCAMRA6",
	 -86.96998,
	 5.265254,
	 -16.33013,
	 -0.999696,
	 0.000378,
	 -0.024655,
	 0.000378,
	 1,
	 0.000009,
	 {"EDG01_13", 1, 0.2, 0, 0.2, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{51,
	 "LCAMRT1",
	 -11.308265,
	 1.25,
	 9.629765,
	 1,
	 0,
	 0,
	 0,
	 1,
	 0,
	 {"EDG03_10", 0, 0.5, 2, 0.5, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 80},
	{52,
	 "LCAMRT2",
	 -2.950222,
	 1.25,
	 12.345603,
	 0.816763,
	 0,
	 -0.576974,
	 0,
	 1,
	 0,
	 {"EDG03_10", 0, 0.5, 2, 0.5, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 100},
	{53,
	 "LCAMRT3",
	 -0.87654,
	 1.25,
	 11.844613,
	 0.006162,
	 0,
	 -0.999981,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 100},
	{54,
	 "LCAMRT4",
	 0.4375,
	 1.25,
	 7,
	 -0.748454,
	 0,
	 -0.663187,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{55,
	 "LCAMRT5",
	 -27.213715,
	 1.25,
	 13.280918,
	 -0.670318,
	 0,
	 -0.742074,
	 0,
	 1,
	 0,
	 {"EDG03_05", 1, 0.5, 2, 0.5, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{56,
	 "LCAMRT6",
	 -21.811115,
	 1.25,
	 9.006517,
	 0.97496,
	 0,
	 0.222379,
	 0,
	 1,
	 0,
	 {"EDG03_10", 0, 0.5, 2, 0.5, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 60},
	{57,
	 "LCAMST1",
	 -40.1615,
	 2.02756,
	 -56.701893,
	 -0.958601,
	 0,
	 -0.284751,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 20},
	{58,
	 "LCAMST2",
	 -48.750553,
	 2.703701,
	 -55.472034,
	 -0.032008,
	 0,
	 -0.999488,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{59,
	 "LCAMZG1",
	 31.694365,
	 1.25,
	 -2.814015,
	 -0.650445,
	 0,
	 0.759553,
	 0,
	 1,
	 0,
	 {"INT22", 0, 0.4, 2, 0.4, 1},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{60,
	 "LCAMZI1",
	 93.37283,
	 10.1875,
	 -10.382307,
	 0,
	 0,
	 1,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{61,
	 "LCAMZI2",
	 93.37283,
	 19.4375,
	 -10.382307,
	 0,
	 0,
	 1,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{62,
	 "LCAMZIE",
	 93.375,
	 19.4375,
	 -10.375,
	 0.967075,
	 -0.254493,
	 0,
	 0.254493,
	 0.967075,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{63,
	 "LCAMZIN",
	 93.37283,
	 19.4375,
	 -10.382307,
	 0,
	 -0.254006,
	 0.967203,
	 0,
	 0.967203,
	 0.254006,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{64,
	 "LCAMZIS",
	 93.37283,
	 19.4375,
	 -10.382307,
	 0,
	 -0.254982,
	 -0.966946,
	 0,
	 0.966946,
	 -0.254982,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{65,
	 "LCAMZIW",
	 93.375,
	 19.4375,
	 -10.375,
	 -0.967075,
	 -0.254493,
	 0,
	 -0.254493,
	 0.967075,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{66,
	 "LCAMZP1",
	 73.70144,
	 2.25,
	 -88.91317,
	 -0.911398,
	 0,
	 0.411526,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{67,
	 "LCAMRT7",
	 -1.170637,
	 1.25,
	 5.082029,
	 -1,
	 0,
	 -0.000599,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 0},
	{68,
	 "LCAMJS5",
	 -1.734375,
	 -0.625,
	 -61.8125,
	 -0.454574,
	 0,
	 -0.890709,
	 0,
	 1,
	 0,
	 {NULL, 0, 0, 0, 0, 0},
	 {NULL, 0, 0, 0, 0, 0},
	 FALSE,
	 100},
	{69, "overhead", 0, 135, 0, 0, -1, 0, 0, 0, 1, {NULL, 0, 0, 0, 0, 0}, {NULL, 0, 0, 0, 0, 0}, FALSE, 0}
};
