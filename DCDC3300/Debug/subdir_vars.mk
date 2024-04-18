################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
CMD_SRCS += \
../28004x_cla_flash_lnk.cmd \
../f28004x_headers_nonbios.cmd 

SYSCFG_SRCS += \
../C2000.syscfg 

LIB_SRCS += \
../driverlib_eabi.lib 

ASM_SRCS += \
../f28004x_codestartbranch.asm 

C_SRCS += \
./syscfg/board.c \
./syscfg/c2000ware_libraries.c \
../device.c \
../f28004x_globalvariabledefs.c \
../main.c 

GEN_FILES += \
./syscfg/board.c \
./syscfg/board.opt \
./syscfg/c2000ware_libraries.opt \
./syscfg/c2000ware_libraries.c 

GEN_MISC_DIRS += \
./syscfg/ 

C_DEPS += \
./syscfg/board.d \
./syscfg/c2000ware_libraries.d \
./device.d \
./f28004x_globalvariabledefs.d \
./main.d 

GEN_OPTS += \
./syscfg/board.opt \
./syscfg/c2000ware_libraries.opt 

OBJS += \
./syscfg/board.obj \
./syscfg/c2000ware_libraries.obj \
./device.obj \
./f28004x_codestartbranch.obj \
./f28004x_globalvariabledefs.obj \
./main.obj 

ASM_DEPS += \
./f28004x_codestartbranch.d 

GEN_MISC_FILES += \
./syscfg/board.h \
./syscfg/board.cmd.genlibs \
./syscfg/pinmux.csv \
./syscfg/c2000ware_libraries.cmd.genlibs \
./syscfg/c2000ware_libraries.h \
./syscfg/clocktree.h 

GEN_MISC_DIRS__QUOTED += \
"syscfg\" 

OBJS__QUOTED += \
"syscfg\board.obj" \
"syscfg\c2000ware_libraries.obj" \
"device.obj" \
"f28004x_codestartbranch.obj" \
"f28004x_globalvariabledefs.obj" \
"main.obj" 

GEN_MISC_FILES__QUOTED += \
"syscfg\board.h" \
"syscfg\board.cmd.genlibs" \
"syscfg\pinmux.csv" \
"syscfg\c2000ware_libraries.cmd.genlibs" \
"syscfg\c2000ware_libraries.h" \
"syscfg\clocktree.h" 

C_DEPS__QUOTED += \
"syscfg\board.d" \
"syscfg\c2000ware_libraries.d" \
"device.d" \
"f28004x_globalvariabledefs.d" \
"main.d" 

GEN_FILES__QUOTED += \
"syscfg\board.c" \
"syscfg\board.opt" \
"syscfg\c2000ware_libraries.opt" \
"syscfg\c2000ware_libraries.c" 

ASM_DEPS__QUOTED += \
"f28004x_codestartbranch.d" 

SYSCFG_SRCS__QUOTED += \
"../C2000.syscfg" 

C_SRCS__QUOTED += \
"./syscfg/board.c" \
"./syscfg/c2000ware_libraries.c" \
"../device.c" \
"../f28004x_globalvariabledefs.c" \
"../main.c" 

ASM_SRCS__QUOTED += \
"../f28004x_codestartbranch.asm" 


