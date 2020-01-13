#
# Copyright (c) 2010 Atmel Corporation. All rights reserved.
#
# \asf_license_start
#
# \page License
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice,
#    this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation
#    and/or other materials provided with the distribution.
#
# 3. The name of Atmel may not be used to endorse or promote products derived
#    from this software without specific prior written permission.
#
# 4. This software may only be redistributed and used in connection with an
#    Atmel microcontroller product.
#
# THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
# WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
# EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
# ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
# OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
# STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
# ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#
# \asf_license_stop
#

# Path to top level ASF directory relative to this project directory.
PRJ_PATH = ../../../../../..

# Microcontroller: atxmega128a1, atmega128, attiny261, etc.
MCU = atxmega32e5

# Application target name. Given with suffix .a for library and .elf for a
# standalone application.
TARGET = edma_example_1.elf

# C source files located from the top-level source directory
CSRCS = \
       common/components/display/ssd1306/font.c           \
       common/components/display/ssd1306/ssd1306.c        \
       common/services/clock/xmega/sysclk.c               \
       common/services/gfx_mono/gfx_mono_framebuffer.c    \
       common/services/gfx_mono/gfx_mono_generic.c        \
       common/services/gfx_mono/gfx_mono_text.c           \
       common/services/gfx_mono/gfx_mono_ug_2832hsweg04.c \
       common/services/gfx_mono/sysfont.c                 \
       common/services/ioport/xmega/ioport_compat.c       \
       common/services/sleepmgr/xmega/sleepmgr.c          \
       common/services/spi/xmega_usart_spi/usart_spi.c    \
       xmega/boards/xmega_e5_xplained/init.c              \
       xmega/drivers/edma/edma.c                          \
       xmega/drivers/edma/example_1/edma_example_1.c      \
       xmega/drivers/usart/usart.c

# Assembler source files located from the top-level source directory
ASSRCS = \
       xmega/drivers/cpu/ccp.s

# Include path located from the top-level source directory
INC_PATH = \
       common/boards                                      \
       common/components/display/ssd1306                  \
       common/services/clock                              \
       common/services/delay                              \
       common/services/gfx_mono                           \
       common/services/gpio                               \
       common/services/ioport                             \
       common/services/sleepmgr                           \
       common/services/spi                                \
       common/utils                                       \
       xmega/boards                                       \
       xmega/boards/xmega_e5_xplained                     \
       xmega/drivers/cpu                                  \
       xmega/drivers/edma                                 \
       xmega/drivers/edma/example_1/atxmega32e5_xmega_e5_xplained \
       xmega/drivers/pmic                                 \
       xmega/drivers/sleep                                \
       xmega/drivers/usart                                \
       xmega/utils                                        \
       xmega/utils/preprocessor \
       xmega/drivers/edma/example_1/atxmega32e5_xmega_e5_xplained/gcc

# Library paths from the top-level source directory
LIB_PATH = 

# Libraries to link with the project
LIBS = 

# Additional options for debugging. By default the common Makefile.in will
# add -gdwarf-2.
DBGFLAGS = 

# Optimization settings
OPTIMIZATION = -Os

# Extra flags used when creating an EEPROM Intel HEX file. By default the
# common Makefile.in will add -j .eeprom
# --set-section-flags=.eeprom="alloc,load" --change-section-lma .eeprom=0.
EEPROMFLAGS = 

# Extra flags used when creating an Intel HEX file. By default the common
# Makefile.in will add -R .eeprom -R .usb_descriptor_table.
FLASHFLAGS = 

# Extra flags to use when archiving.
ARFLAGS = 

# Extra flags to use when assembling.
ASFLAGS = 

# Extra flags to use when compiling.
CFLAGS = 

# Extra flags to use when preprocessing.
#
# Preprocessor symbol definitions
#   To add a definition use the format "-D name[=definition]".
#   To cancel a definition use the format "-U name".
#
# The most relevant symbols to define for the preprocessor are:
#   BOARD      Target board in use, see boards/board.h for a list.
#   EXT_BOARD  Optional extension board in use, see boards/board.h for a list.
CPPFLAGS = \
       -D BOARD=XMEGA_E5_XPLAINED                         \
       -D GFX_MONO_UG_2832HSWEG04=1                       \
       -D IOPORT_XMEGA_COMPAT

# Extra flags to use when linking
LDFLAGS =  \
       -Wl,--section-start=.BOOT=0x8000                  

# Pre- and post-build commands
PREBUILD_CMD = 
POSTBUILD_CMD = 