/**
 * \file
 *
 * \brief SAM HA1G16A Xplained Pro test configuration.
 *
 * Copyright (c) 2015-2016 Atmel Corporation. All rights reserved.
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

#ifndef CONF_TEST_H_INCLUDED
#define CONF_TEST_H_INCLUDED

#define CONF_STDIO_USART          EDBG_CDC_MODULE
#define CONF_STDIO_MUX_SETTING    EDBG_CDC_SERCOM_MUX_SETTING
#define CONF_STDIO_PINMUX_PAD0    EDBG_CDC_SERCOM_PINMUX_PAD0
#define CONF_STDIO_PINMUX_PAD1    EDBG_CDC_SERCOM_PINMUX_PAD1
#define CONF_STDIO_PINMUX_PAD2    EDBG_CDC_SERCOM_PINMUX_PAD2
#define CONF_STDIO_PINMUX_PAD3    EDBG_CDC_SERCOM_PINMUX_PAD3
#define CONF_STDIO_BAUDRATE       38400

/* RX USART to test
 * For unit_test connection uniformity, SERCOM for USART should be
 * the same as SPI, SERCOM for USART in the EXT headers of the
 * rev. 2 is not suitable, just define them directly here.
 */
#define CONF_RX_USART              SERCOM2
#define CONF_RX_USART_SERCOM_MUX   USART_RX_1_TX_0_XCK_1
#define CONF_RX_USART_PINMUX_PAD0  PINMUX_PA08D_SERCOM2_PAD0
#define CONF_RX_USART_PINMUX_PAD1  PINMUX_PA09D_SERCOM2_PAD1
#define CONF_RX_USART_PINMUX_PAD2  PINMUX_UNUSED
#define CONF_RX_USART_PINMUX_PAD3  PINMUX_UNUSED

/* TX USART to test */
#define CONF_TX_USART              SERCOM4
#define CONF_TX_USART_SERCOM_MUX   USART_RX_3_TX_2_XCK_3
#define CONF_TX_USART_PINMUX_PAD0  PINMUX_PB11D_SERCOM4_PAD3
#define CONF_TX_USART_PINMUX_PAD1  PINMUX_PB10D_SERCOM4_PAD2
#define CONF_TX_USART_PINMUX_PAD2  PINMUX_UNUSED
#define CONF_TX_USART_PINMUX_PAD3  PINMUX_UNUSED

#endif /* CONF_TEST_H_INCLUDED */
