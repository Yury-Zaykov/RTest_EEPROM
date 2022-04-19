################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32

GEN_OPTS__FLAG := @"configPkg/compiler.opt" 
GEN_CMDS__FLAG := -Wl,-T"configPkg/linker.cmd" 

ORDERED_OBJS += \
"./IO_UART.o" \
"./main.o" \
"./Src-AM437x_HW/AM437xBB_Console.o" \
"./Src-AM437x_HW/AM437x_I2C.o" \
"./Src-AM437x_HW/AM437x_MMU.o" \
"./Src-AM437x_HW/AM437x_PWMSS.o" \
"./Src-AM437x_HW/AM437x_UART.o" \
$(GEN_CMDS__FLAG) \
-Wl,--start-group \
-lgcc \
-lm \
-lnosys \
-lstdc++ \
-lc \
-Wl,--end-group \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include Src-AM437x_HW/subdir_vars.mk
-include subdir_rules.mk
-include Src-AM437x_HW/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
RTest_EEPROM.out \

EXE_OUTPUTS__QUOTED += \
"RTest_EEPROM.out" \

BIN_OUTPUTS += \
app.bin \

BIN_OUTPUTS__QUOTED += \
"app.bin" \


# All Target
all: $(OBJS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "RTest_EEPROM.out"

# Tool invocations
RTest_EEPROM.out: $(OBJS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: GNU Linker'
	"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/bin/arm-none-eabi-gcc-7.2.1.exe" -mtune=cortex-a9 -marm -Dam4378 -DSOC_AM437x -DFLOAT_PREC_SINGLE -DMATH_FUNC_FLOAT -DNOCACHE_ADDR_START=0x9F000000 -DNOCACHE_ADDR_END=0xA0000000 -O2 -fsingle-precision-constant -Wall -u _printf_float -mfloat-abi=hard -Wl,-Map,"RTest_EEPROM.map" -nostartfiles -static -Wl,--gc-sections -L"C:/ti/bios_6_76_03_01/packages/gnu/targets/arm/libs/install-native/arm-none-eabi/lib/hard" -Wl,--defsym,STACKSIZE=0x18000 -Wl,--defsym,HEAPSIZE=0x400 --specs=nano.specs -o"RTest_EEPROM.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

app.bin: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: GNU Objcopy Utility'
	"C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/bin/arm-none-eabi-objcopy.exe"  $(EXE_OUTPUTS__QUOTED) "app.bin"
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(GEN_FILES__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "IO_UART.o" "main.o" "Src-AM437x_HW\AM437xBB_Console.o" "Src-AM437x_HW\AM437x_I2C.o" "Src-AM437x_HW\AM437x_MMU.o" "Src-AM437x_HW\AM437x_PWMSS.o" "Src-AM437x_HW\AM437x_UART.o" 
	-$(RM) "main.d" "Src-AM437x_HW\AM437xBB_Console.d" "Src-AM437x_HW\AM437x_I2C.d" "Src-AM437x_HW\AM437x_MMU.d" "Src-AM437x_HW\AM437x_PWMSS.d" "Src-AM437x_HW\AM437x_UART.d" 
	-$(RM) "IO_UART.d" 
	-$(RMDIR) $(GEN_MISC_DIRS__QUOTED)
	-@echo 'Finished clean'
	-@echo ' '

post-build:
	-C:/ti/ccs1020/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/bin/arm-none-eabi-objcopy.exe -O binary "RTest_EEPROM.out" "app.bin"
	-copy "app.bin" "c:\ti\_tftp_bin_"
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

