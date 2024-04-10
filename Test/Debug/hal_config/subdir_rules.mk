################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
hal_config/%.obj: ../hal_config/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1210/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu0 -O2 --opt_for_speed=1 --fp_mode=relaxed --include_path="D:/Project_Code/Test" --include_path="D:/Project_Code/Test/headers" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/device_support/f28004x/headers/include" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/driverlib/f28004x/driverlib" --include_path="D:/TICode/C2000Ware/C2000Ware_5_01_00_00/device_support/f28004x/common/include" --include_path="C:/ti/ccs1210/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/include" --advice:performance=all --define=_FLASH -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="hal_config/$(basename $(<F)).d_raw" --include_path="D:/Project_Code/Test/Debug/syscfg" --obj_directory="hal_config" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


