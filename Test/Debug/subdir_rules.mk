################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1210/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu0 -O2 --opt_for_speed=1 --fp_mode=relaxed --include_path="D:/Project_Code/Test" --include_path="D:/Project_Code/Test/headers" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/device_support/f28004x/headers/include" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/driverlib/f28004x/driverlib" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/device_support/f28004x/common/include" --include_path="C:/ti/ccs1210/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/include" --advice:performance=all --define=_FLASH -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="D:/Project_Code/Test/Debug/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

%.obj: ../%.asm $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1210/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu0 -O2 --opt_for_speed=1 --fp_mode=relaxed --include_path="D:/Project_Code/Test" --include_path="D:/Project_Code/Test/headers" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/device_support/f28004x/headers/include" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/driverlib/f28004x/driverlib" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/device_support/f28004x/common/include" --include_path="C:/ti/ccs1210/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/include" --advice:performance=all --define=_FLASH -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="D:/Project_Code/Test/Debug/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-1543844111: ../main.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"C:/ti/ccs1210/ccs/utils/sysconfig_1.14.0/sysconfig_cli.bat" -s "D:/TICode/C2000Ware/C2000Ware_5_01_00_00/.metadata/sdk.json" -d "F28004x" --script "D:/Project_Code/Test/main.syscfg" -o "syscfg" --compiler ccs
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/board.c: build-1543844111 ../main.syscfg
syscfg/board.h: build-1543844111
syscfg/board.cmd.genlibs: build-1543844111
syscfg/board.opt: build-1543844111
syscfg/pinmux.csv: build-1543844111
syscfg/epwm.dot: build-1543844111
syscfg/c2000ware_libraries.cmd.genlibs: build-1543844111
syscfg/c2000ware_libraries.opt: build-1543844111
syscfg/c2000ware_libraries.c: build-1543844111
syscfg/c2000ware_libraries.h: build-1543844111
syscfg/clocktree.h: build-1543844111
syscfg/: build-1543844111

syscfg/%.obj: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1210/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu0 -O2 --opt_for_speed=1 --fp_mode=relaxed --include_path="D:/Project_Code/Test" --include_path="D:/Project_Code/Test/headers" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/device_support/f28004x/headers/include" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/driverlib/f28004x/driverlib" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/device_support/f28004x/common/include" --include_path="C:/ti/ccs1210/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/include" --advice:performance=all --define=_FLASH -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="syscfg/$(basename $(<F)).d_raw" --include_path="D:/Project_Code/Test/Debug/syscfg" --obj_directory="syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


