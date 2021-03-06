/**
 * \file
 *
 * \brief Font definition of C42364A LCD Glass component.
 *
 * Copyright (c) 2013-2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */

#ifndef C42364A_FONT_H_INCLUDED
#define C42364A_FONT_H_INCLUDED

#include "c42364a_segmap.h"

/* LCD symbol pixel mapping, seg remap to chip seg */
enum c42364a_symbol_pixel{
	G1  = 4 * C42364A_G1_SEG_NUM, G0, G2, G3,            // 0 ==> 48
	G4  = 4 * C42364A_G4_SEG_NUM, G5, G6, G7,            // 1 ==> 49
	D3A = 4 * C42364A_D3A_SEG_NUM, D3B, D3C, B9,         // 4 ==> 27
	D3F = 4 * C42364A_D3F_SEG_NUM, D3G, D3E, D3D,        // 5 ==> 26
	D2A = 4 * C42364A_D2A_SEG_NUM, D2B, D2C, D2P,        // 6 ==> 25
	D2F = 4 * C42364A_D2F_SEG_NUM, D2G, D2E, D2D,        // 7 ==> 24
	D1A = 4 * C42364A_D1A_SEG_NUM, D1B, D1C, D1P,        // 8 ==> 22
	D1F = 4 * C42364A_D1F_SEG_NUM, D1G, D1E, D1D,        // 9 ==> 21
	D0A = 4 * C42364A_D0A_SEG_NUM, D0B, D0C, D0P,        // 10 ==> 20
	D0F = 4 * C42364A_D0F_SEG_NUM, D0G, D0E, D0D,        // 11 ==> 17
	A6H = 4 * C42364A_A6H_SEG_NUM, A6I, A6K, A6N,        // 12 ==> 47
	B14 = 4 * C42364A_B14_SEG_NUM, A6F, A6E, A6D,        // 13 ==> 46
	A6A = 4 * C42364A_A6A_SEG_NUM, A6B, A6C, B13,        // 14 ==> 45
	A6G = 4 * C42364A_A6G_SEG_NUM, A6J, A6L, A6M,        // 15 ==> 44
	A5H = 4 * C42364A_A5H_SEG_NUM, A5I, A5K, A5N,        // 16 ==> 43
	B5  = 4 * C42364A_B5_SEG_NUM, A5F, A5E, A5D,         // 17 ==> 42
	A5A = 4 * C42364A_A5A_SEG_NUM, A5B, A5C, B12,        // 18 ==> 41
	A5G = 4 * C42364A_A5G_SEG_NUM, A5J, A5L, A5M,        // 19 ==> 40
	A4H = 4 * C42364A_A4H_SEG_NUM, A4I, A4K, A4N,        // 20 ==> 39
	B6  = 4 * C42364A_B6_SEG_NUM, A4F, A4E, A4D,         // 21 ==> 38
	A4A = 4 * C42364A_A4A_SEG_NUM, A4B, A4C, B11,        // 22 ==> 37
	A4G = 4 * C42364A_A4G_SEG_NUM, A4J, A4L, A4M,        // 23 ==> 36
	A3H = 4 * C42364A_A3H_SEG_NUM, A3I, A3K, A3N,        // 24 ==> 35
	B4  = 4 * C42364A_B4_SEG_NUM, A3F, A3E, A3D,         // 25 ==> 34
	A3A = 4 * C42364A_A3A_SEG_NUM, A3B, A3C, B10,        // 26 ==> 33
	A3G = 4 * C42364A_A3G_SEG_NUM, A3J, A3L, A3M,        // 27 ==> 32
	A2H = 4 * C42364A_A2H_SEG_NUM, A2I, A2K, A2N,        // 28 ==> 31
	B3  = 4 * C42364A_B3_SEG_NUM, A2F, A2E, A2D,         // 29 ==> 30
	A2A = 4 * C42364A_A2A_SEG_NUM, A2B, A2C, B1,         // 30 ==> 29
	A2G = 4 * C42364A_A2G_SEG_NUM, A2J, A2L, A2M,        // 31 ==> 28
#if SAM4CP
	A1H = 4 * C42364A_A1H_SEG_NUM, A1I, A1K, A1N,        // 28 ==> 31
	B2  = 4 * C42364A_B2_SEG_NUM, A1F, A1E, A1D,         // 29 ==> 30
	A1A = 4 * C42364A_A1A_SEG_NUM, A1B, A1C, B8,         // 30 ==> 29
	A1G = 4 * C42364A_A1G_SEG_NUM, A1J, A1L, A1M,        // 31 ==> 28
#endif
};

/*Multiple pixels symbols*/
#define C42364A_PATTERN_SYMBOL_D0       {D0A,D0B,D0C,D0D,D0E,D0F,D0G}
#define C42364A_PATTERN_SYMBOL_D1       {D1A,D1B,D1C,D1D,D1E,D1F,D1G}
#define C42364A_PATTERN_SYMBOL_D2       {D2A,D2B,D2C,D2D,D2E,D2F,D2G}
#define C42364A_PATTERN_SYMBOL_D3       {D3A,D3B,D3C,D3D,D3E,D3F,D3G}

//#if SAM4CP
#define C42364A_PATTERN_SYMBOL_A1       {A1A,A1B,A1C,A1D,A1E,A1F,A1G,A1H,A1I,A1J,A1K,A1L,A1M,A1N}
//#endif
#define C42364A_PATTERN_SYMBOL_A2       {A2A,A2B,A2C,A2D,A2E,A2F,A2G,A2H,A2I,A2J,A2K,A2L,A2M,A2N}
#define C42364A_PATTERN_SYMBOL_A3       {A3A,A3B,A3C,A3D,A3E,A3F,A3G,A3H,A3I,A3J,A3K,A3L,A3M,A3N}
#define C42364A_PATTERN_SYMBOL_A4       {A4A,A4B,A4C,A4D,A4E,A4F,A4G,A4H,A4I,A4J,A4K,A4L,A4M,A4N}
#define C42364A_PATTERN_SYMBOL_A5       {A5A,A5B,A5C,A5D,A5E,A5F,A5G,A5H,A5I,A5J,A5K,A5L,A5M,A5N}
#define C42364A_PATTERN_SYMBOL_A6       {A6A,A6B,A6C,A6D,A6E,A6F,A6G,A6H,A6I,A6J,A6K,A6L,A6M,A6N}

/* Number */
#define C42364A_PLOT_NUMBER_0   0x3F
#define C42364A_PLOT_NUMBER_1   0x06
#define C42364A_PLOT_NUMBER_2   0x5B
#define C42364A_PLOT_NUMBER_3   0x4F
#define C42364A_PLOT_NUMBER_4   0x66
#define C42364A_PLOT_NUMBER_5   0x6D
#define C42364A_PLOT_NUMBER_6   0x7D
#define C42364A_PLOT_NUMBER_7   0x07
#define C42364A_PLOT_NUMBER_8   0x7F
#define C42364A_PLOT_NUMBER_9   0x6F

/* Letter */
#define C42364A_PLOT_LETTER_0   0x003F
#define C42364A_PLOT_LETTER_1   0x1080
#define C42364A_PLOT_LETTER_2   0x061B
#define C42364A_PLOT_LETTER_3   0x060F
#define C42364A_PLOT_LETTER_4   0x0626
#define C42364A_PLOT_LETTER_5   0x062D
#define C42364A_PLOT_LETTER_6   0x063D
#define C42364A_PLOT_LETTER_7   0x0007
#define C42364A_PLOT_LETTER_8   0x063F
#define C42364A_PLOT_LETTER_9   0x062F
#define C42364A_PLOT_LETTER_A   0x0637
#define C42364A_PLOT_LETTER_B   0x148F
#define C42364A_PLOT_LETTER_C   0x0039
#define C42364A_PLOT_LETTER_D   0x108F
#define C42364A_PLOT_LETTER_E   0x0639
#define C42364A_PLOT_LETTER_F   0x0631
#define C42364A_PLOT_LETTER_G   0x043D
#define C42364A_PLOT_LETTER_H   0x0636
#define C42364A_PLOT_LETTER_I   0x1089
#define C42364A_PLOT_LETTER_J   0x001E
#define C42364A_PLOT_LETTER_K   0x2330
#define C42364A_PLOT_LETTER_L   0x0038
#define C42364A_PLOT_LETTER_M   0x0176
#define C42364A_PLOT_LETTER_N   0x2076
#define C42364A_PLOT_LETTER_O   0x003F
#define C42364A_PLOT_LETTER_P   0x0633
#define C42364A_PLOT_LETTER_Q   0x203F
#define C42364A_PLOT_LETTER_R   0x2633
#define C42364A_PLOT_LETTER_S   0x062D
#define C42364A_PLOT_LETTER_T   0x1081
#define C42364A_PLOT_LETTER_U   0x003E
#define C42364A_PLOT_LETTER_V   0x0930
#define C42364A_PLOT_LETTER_W   0x2836
#define C42364A_PLOT_LETTER_X   0x2940
#define C42364A_PLOT_LETTER_Y   0x1140
#define C42364A_PLOT_LETTER_Z   0x0909

#endif  /* C42364A_FONT_H_INCLUDED */
