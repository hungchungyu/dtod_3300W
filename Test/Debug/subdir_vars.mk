################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
CMD_SRCS += \
../28004x_cla_flash_lnk.cmd \
../f28004x_headers_nonbios.cmd 

SYSCFG_SRCS += \
../main.syscfg 

LIB_SRCS += \
../driverlib_coff.lib 

ASM_SRCS += \
../f28004x_codestartbranch.asm 

C_SRCS += \
../device.c \
../f28004x_globalvariabledefs.c \
../main.c \
./syscfg/board.c \
./syscfg/c2000ware_libraries.c 

GEN_FILES += \
./syscfg/board.c \
./syscfg/board.opt \
./syscfg/c2000ware_libraries.opt \
./syscfg/c2000ware_libraries.c 

GEN_MISC_DIRS += \
./syscfg/ 

C_DEPS += \
./device.d \
./f28004x_globalvariabledefs.d \
./main.d \
./syscfg/board.d \
./syscfg/c2000ware_libraries.d 

GEN_OPTS += \
./syscfg/board.opt \
./syscfg/c2000ware_libraries.opt 

OBJS += \
./device.obj \
./f28004x_codestartbranch.obj \
./f28004x_globalvariabledefs.obj \
./main.obj \
./syscfg/board.obj \
./syscfg/c2000ware_libraries.obj 

ASM_DEPS += \
./f28004x_codestartbranch.d 

GEN_MISC_FILES += \
./syscfg/board.h \
./syscfg/board.cmd.genlibs \
./syscfg/pinmux.csv \
./syscfg/epwm.dot \
./syscfg/c2000ware_libraries.cmd.genlibs \
./syscfg/c2000ware_libraries.h \
./syscfg/clocktree.h 

GEN_MISC_DIRS__QUOTED += \
"syscfg\" 

OBJS__QUOTED += \
"device.obj" \
"f28004x_codestartbranch.obj" \
"f28004x_globalvariabledefs.obj" \
"main.obj" \
"syscfg\board.obj" \
"syscfg\c2000ware_libraries.obj" 

GEN_MISC_FILES__QUOTED += \
"syscfg\board.h" \
"syscfg\board.cmd.genlibs" \
"syscfg\pinmux.csv" \
"syscfg\epwm.dot" \
"syscfg\c2000ware_libraries.cmd.genlibs" \
"syscfg\c2000ware_libraries.h" \
"syscfg\clocktree.h" 

C_DEPS__QUOTED += \
"device.d" \
"f28004x_globalvariabledefs.d" \
"main.d" \
"syscfg\board.d" \
"syscfg\c2000ware_libraries.d" 

GEN_FILES__QUOTED += \
"syscfg\board.c" \
"syscfg\board.opt" \
"syscfg\c2000ware_libraries.opt" \
"syscfg\c2000ware_libraries.c" 

ASM_DEPS__QUOTED += \
"f28004x_codestartbranch.d" 

C_SRCS__QUOTED += \
"../device.c" \
"../f28004x_globalvariabledefs.c" \
"../main.c" \
"./syscfg/board.c" \
"./syscfg/c2000ware_libraries.c" 

ASM_SRCS__QUOTED += \
"../f28004x_codestartbranch.asm" 

SYSCFG_SRCS__QUOTED += \
"../main.syscfg" 


