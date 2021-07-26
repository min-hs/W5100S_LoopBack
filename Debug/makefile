################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include ioLibrary_Driver/Internet/httpServer/subdir.mk
-include ioLibrary_Driver/Internet/TFTP/subdir.mk
-include ioLibrary_Driver/Internet/SNTP/subdir.mk
-include ioLibrary_Driver/Internet/SNMP/subdir.mk
-include ioLibrary_Driver/Internet/MQTT/MQTTPacket/src/subdir.mk
-include ioLibrary_Driver/Internet/MQTT/subdir.mk
-include ioLibrary_Driver/Internet/FTPServer/subdir.mk
-include ioLibrary_Driver/Internet/FTPClient/subdir.mk
-include ioLibrary_Driver/Internet/DNS/subdir.mk
-include ioLibrary_Driver/Internet/DHCP/subdir.mk
-include ioLibrary_Driver/Ethernet/W5500/subdir.mk
-include ioLibrary_Driver/Ethernet/W5300/subdir.mk
-include ioLibrary_Driver/Ethernet/W5200/subdir.mk
-include ioLibrary_Driver/Ethernet/W5100S/subdir.mk
-include ioLibrary_Driver/Ethernet/W5100/subdir.mk
-include ioLibrary_Driver/Ethernet/subdir.mk
-include ioLibrary_Driver/Application/multicast/subdir.mk
-include ioLibrary_Driver/Application/loopback/subdir.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := w5100s_loopback_test
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX := 
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME).$(BUILD_ARTIFACT_EXTENSION)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
w5100s_loopback_test.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
w5100s_loopback_test.list \

OBJCOPY_BIN += \
w5100s_loopback_test.bin \


# All Target
all: main-build

# Main-build Target
main-build: w5100s_loopback_test.elf secondary-outputs

# Tool invocations
w5100s_loopback_test.elf: $(OBJS) $(USER_OBJS) C:\Users\Louis\STM32CubeIDE\workspace_1.6.1\test\test\STM32F103RBTX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "w5100s_loopback_test.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\Louis\STM32CubeIDE\workspace_1.6.1\test\test\STM32F103RBTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="w5100s_loopback_test.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

w5100s_loopback_test.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "w5100s_loopback_test.list"
	@echo 'Finished building: $@'
	@echo ' '

w5100s_loopback_test.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "w5100s_loopback_test.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents fail-specified-linker-script-missing warn-no-linker-script-specified
.SECONDARY:

-include ../makefile.targets
