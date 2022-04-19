################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
IO_UART.o: C:/WorkspaceRaptor/RTest_EEPROM/IO_UART.cpp $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/bin/arm-none-eabi-gcc-7.2.1.exe" -c -mcpu=cortex-a9 -march=armv7-a -mtune=cortex-a9 -marm -mfloat-abi=hard -Dam4378 -DSOC_AM437x -DFLOAT_PREC_SINGLE -DMATH_FUNC_FLOAT -DNOCACHE_ADDR_START=0x9F000000 -DNOCACHE_ADDR_END=0xA0000000 -I"C:/WorkspaceRaptor/RTest_EEPROM/.CcsProjFiles" -I"C:/ti/bios_6_76_03_01/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include/newlib-nano" -I"C:/ti/bios_6_76_03_01/packages/ti/posix/gcc" -I"C:/WorkspaceRaptor/RTest_EEPROM" -I"C:/WorkspaceRaptor/AM437x_HW" -I"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/arm-none-eabi/include" -O2 -fsingle-precision-constant -Wall -u _printf_float -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -std=c++98  -fno-threadsafe-statics $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-249235057:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-249235057-inproc

build-249235057-inproc: C:/WorkspaceRaptor/RTest_EEPROM/BiosConfig/app.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"C:/ti/ccs1020/xdctools_3_62_00_08_core/xs" --xdcpath="C:/ti/bios_6_76_03_01/packages;C:/WorkspaceRaptor/Packages;" xdc.tools.configuro -o configPkg -t gnu.targets.arm.A9F -p AM437xBB -r release -c "C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-249235057 C:/WorkspaceRaptor/RTest_EEPROM/BiosConfig/app.cfg
configPkg/compiler.opt: build-249235057
configPkg/: build-249235057

main.o: C:/WorkspaceRaptor/RTest_EEPROM/main.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/bin/arm-none-eabi-gcc-7.2.1.exe" -c -mcpu=cortex-a9 -march=armv7-a -mtune=cortex-a9 -marm -mfloat-abi=hard -Dam4378 -DSOC_AM437x -DFLOAT_PREC_SINGLE -DMATH_FUNC_FLOAT -DNOCACHE_ADDR_START=0x9F000000 -DNOCACHE_ADDR_END=0xA0000000 -I"C:/WorkspaceRaptor/RTest_EEPROM/.CcsProjFiles" -I"C:/ti/bios_6_76_03_01/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include/newlib-nano" -I"C:/ti/bios_6_76_03_01/packages/ti/posix/gcc" -I"C:/WorkspaceRaptor/RTest_EEPROM" -I"C:/WorkspaceRaptor/AM437x_HW" -I"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/arm-none-eabi/include" -O2 -fsingle-precision-constant -Wall -u _printf_float -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -std=c99 $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


