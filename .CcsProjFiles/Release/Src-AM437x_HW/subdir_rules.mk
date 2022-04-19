################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
Src-AM437x_HW/AM437xBB_Console.o: C:/WorkspaceRaptor/AM437x_HW/AM437xBB_Console.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/bin/arm-none-eabi-gcc-7.2.1.exe" -c -mcpu=cortex-a9 -march=armv7-a -mtune=cortex-a9 -marm -mfloat-abi=hard -Dam4378 -DSOC_AM437x -DFLOAT_PREC_SINGLE -DMATH_FUNC_FLOAT -DNOCACHE_ADDR_START=0x9F000000 -DNOCACHE_ADDR_END=0xA0000000 -I"C:/WorkspaceRaptor/RTest_EEPROM/.CcsProjFiles" -I"C:/ti/bios_6_76_03_01/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include/newlib-nano" -I"C:/ti/bios_6_76_03_01/packages/ti/posix/gcc" -I"C:/WorkspaceRaptor/RTest_EEPROM" -I"C:/WorkspaceRaptor/AM437x_HW" -I"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/arm-none-eabi/include" -O2 -fsingle-precision-constant -Wall -u _printf_float -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -std=c99 $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Src-AM437x_HW/AM437x_I2C.o: C:/WorkspaceRaptor/AM437x_HW/AM437x_I2C.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/bin/arm-none-eabi-gcc-7.2.1.exe" -c -mcpu=cortex-a9 -march=armv7-a -mtune=cortex-a9 -marm -mfloat-abi=hard -Dam4378 -DSOC_AM437x -DFLOAT_PREC_SINGLE -DMATH_FUNC_FLOAT -DNOCACHE_ADDR_START=0x9F000000 -DNOCACHE_ADDR_END=0xA0000000 -I"C:/WorkspaceRaptor/RTest_EEPROM/.CcsProjFiles" -I"C:/ti/bios_6_76_03_01/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include/newlib-nano" -I"C:/ti/bios_6_76_03_01/packages/ti/posix/gcc" -I"C:/WorkspaceRaptor/RTest_EEPROM" -I"C:/WorkspaceRaptor/AM437x_HW" -I"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/arm-none-eabi/include" -O2 -fsingle-precision-constant -Wall -u _printf_float -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -std=c99 $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Src-AM437x_HW/AM437x_MMU.o: C:/WorkspaceRaptor/AM437x_HW/AM437x_MMU.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/bin/arm-none-eabi-gcc-7.2.1.exe" -c -mcpu=cortex-a9 -march=armv7-a -mtune=cortex-a9 -marm -mfloat-abi=hard -Dam4378 -DSOC_AM437x -DFLOAT_PREC_SINGLE -DMATH_FUNC_FLOAT -DNOCACHE_ADDR_START=0x9F000000 -DNOCACHE_ADDR_END=0xA0000000 -I"C:/WorkspaceRaptor/RTest_EEPROM/.CcsProjFiles" -I"C:/ti/bios_6_76_03_01/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include/newlib-nano" -I"C:/ti/bios_6_76_03_01/packages/ti/posix/gcc" -I"C:/WorkspaceRaptor/RTest_EEPROM" -I"C:/WorkspaceRaptor/AM437x_HW" -I"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/arm-none-eabi/include" -O2 -fsingle-precision-constant -Wall -u _printf_float -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -std=c99 $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Src-AM437x_HW/AM437x_PWMSS.o: C:/WorkspaceRaptor/AM437x_HW/AM437x_PWMSS.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/bin/arm-none-eabi-gcc-7.2.1.exe" -c -mcpu=cortex-a9 -march=armv7-a -mtune=cortex-a9 -marm -mfloat-abi=hard -Dam4378 -DSOC_AM437x -DFLOAT_PREC_SINGLE -DMATH_FUNC_FLOAT -DNOCACHE_ADDR_START=0x9F000000 -DNOCACHE_ADDR_END=0xA0000000 -I"C:/WorkspaceRaptor/RTest_EEPROM/.CcsProjFiles" -I"C:/ti/bios_6_76_03_01/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include/newlib-nano" -I"C:/ti/bios_6_76_03_01/packages/ti/posix/gcc" -I"C:/WorkspaceRaptor/RTest_EEPROM" -I"C:/WorkspaceRaptor/AM437x_HW" -I"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/arm-none-eabi/include" -O2 -fsingle-precision-constant -Wall -u _printf_float -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -std=c99 $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Src-AM437x_HW/AM437x_UART.o: C:/WorkspaceRaptor/AM437x_HW/AM437x_UART.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/bin/arm-none-eabi-gcc-7.2.1.exe" -c -mcpu=cortex-a9 -march=armv7-a -mtune=cortex-a9 -marm -mfloat-abi=hard -Dam4378 -DSOC_AM437x -DFLOAT_PREC_SINGLE -DMATH_FUNC_FLOAT -DNOCACHE_ADDR_START=0x9F000000 -DNOCACHE_ADDR_END=0xA0000000 -I"C:/WorkspaceRaptor/RTest_EEPROM/.CcsProjFiles" -I"C:/ti/bios_6_76_03_01/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/include/newlib-nano" -I"C:/ti/bios_6_76_03_01/packages/ti/posix/gcc" -I"C:/WorkspaceRaptor/RTest_EEPROM" -I"C:/WorkspaceRaptor/AM437x_HW" -I"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/arm-none-eabi/include" -O2 -fsingle-precision-constant -Wall -u _printf_float -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -std=c99 $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


