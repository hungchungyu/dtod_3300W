################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
build-729263055: ../C2000.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"C:/ti/ccs1210/ccs/utils/sysconfig_1.14.0/sysconfig_cli.bat" -s "D:/TI_Code/C2000Ware_5_01_00_00/.metadata/sdk.json" -d "F28004x" --script "D:/Project_Code/dtod_3300W/DCDC3300/C2000.syscfg" -o "syscfg" --compiler ccs
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/board.c: build-729263055 ../C2000.syscfg
syscfg/board.h: build-729263055
syscfg/board.cmd.genlibs: build-729263055
syscfg/board.opt: build-729263055
syscfg/pinmux.csv: build-729263055
syscfg/c2000ware_libraries.cmd.genlibs: build-729263055
syscfg/c2000ware_libraries.opt: build-729263055
syscfg/c2000ware_libraries.c: build-729263055
syscfg/c2000ware_libraries.h: build-729263055
syscfg/clocktree.h: build-729263055
syscfg/: build-729263055

syscfg/%.obj: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1210/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu0 --opt_for_speed=3 --fp_mode=relaxed --include_path="D:/Project_Code/dtod_3300W/DCDC3300" --include_path="D:/TI_Code/C2000Ware_5_01_00_00/device_support/f28004x/headers/include" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/driverlib/f28004x/driverlib" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/device_support/f28004x/common/include" --include_path="C:/ti/ccs1210/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/include" --define=_FLASH -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="syscfg/$(basename $(<F)).d_raw" --include_path="D:/Project_Code/dtod_3300W/DCDC3300/Debug/syscfg" --obj_directory="syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1210/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu0 --opt_for_speed=3 --fp_mode=relaxed --include_path="D:/Project_Code/dtod_3300W/DCDC3300" --include_path="D:/TI_Code/C2000Ware_5_01_00_00/device_support/f28004x/headers/include" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/driverlib/f28004x/driverlib" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/device_support/f28004x/common/include" --include_path="C:/ti/ccs1210/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/include" --define=_FLASH -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="D:/Project_Code/dtod_3300W/DCDC3300/Debug/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

%.obj: ../%.asm $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1210/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu0 --opt_for_speed=3 --fp_mode=relaxed --include_path="D:/Project_Code/dtod_3300W/DCDC3300" --include_path="D:/TI_Code/C2000Ware_5_01_00_00/device_support/f28004x/headers/include" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/driverlib/f28004x/driverlib" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/device_support/f28004x/common/include" --include_path="C:/ti/ccs1210/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/include" --define=_FLASH -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="D:/Project_Code/dtod_3300W/DCDC3300/Debug/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


