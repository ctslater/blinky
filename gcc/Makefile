################################################################################
# Automatically-generated file. Do not edit!
################################################################################

ifdef SystemRoot
	SHELL = cmd.exe
	MK_DIR = mkdir
else
	ifeq ($(shell uname), Linux)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), CYGWIN)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), MINGW32)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), MINGW64)
		MK_DIR = mkdir -p
	endif
endif

# List the subdirectories for creating object files
SUB_DIRS +=  \
 \
hpl/adc \
usb/class/cdc/device \
hpl/ramecc \
samd51a/gcc/gcc \
hpl/evsys \
examples \
hpl/systick \
hpl/oscctrl \
hpl/tc \
hpl/osc32kctrl \
usb \
hpl/dmac \
hal/src \
samd51a/gcc \
hal/utils/src \
hpl/rtc \
hpl/trng \
usb/class/hid/device \
hpl/usb \
hpl/mclk \
hpl/cmcc \
hpl/gclk \
usb/device \
hpl/pm \
hpl/dac \
hpl/sercom \
hpl/nvmctrl \
hpl/core \
usb/class/msc/device \
FreeRTOS/Source \
FreeRTOS/Source/portable/GCC/ARM_CM4F \
FreeRTOS/Source/portable/MemMang

# List the object files
OBJS +=  \
hal/src/hal_io.o \
hpl/systick/hpl_systick.o \
samd51a/gcc/system_samd51.o \
usb/class/hid/device/hiddf_generic.o \
hpl/evsys/hpl_evsys.o \
hpl/core/hpl_core_m4.o \
hal/src/hal_cache.o \
usb/class/cdc/device/cdcdf_acm.o \
hal/utils/src/utils_syscalls.o \
hpl/mclk/hpl_mclk.o \
hpl/nvmctrl/hpl_nvmctrl.o \
usb/class/msc/device/mscdf.o \
hal/src/hal_spi_m_sync.o \
hal/src/hal_timer.o \
hal/src/hal_pwm.o \
hpl/usb/hpl_usb.o \
hal/src/hal_i2c_m_sync.o \
hal/src/hal_delay.o \
hpl/pm/hpl_pm.o \
hpl/core/hpl_init.o \
hpl/gclk/hpl_gclk.o \
hal/utils/src/utils_list.o \
usb/class/hid/device/hiddf_mouse.o \
hal/utils/src/utils_assert.o \
hpl/dmac/hpl_dmac.o \
hpl/oscctrl/hpl_oscctrl.o \
hal/src/hal_rand_sync.o \
hpl/trng/hpl_trng.o \
usb/class/hid/device/hiddf_keyboard.o \
usb/usb_protocol.o \
hpl/dac/hpl_dac.o \
hpl/ramecc/hpl_ramecc.o \
hal/src/hal_flash.o \
hal/src/hal_init.o \
hal/src/hal_usb_device.o \
main.o \
hpl/osc32kctrl/hpl_osc32kctrl.o \
hpl/rtc/hpl_rtc.o \
examples/driver_examples.o \
driver_init.o \
hal/src/hal_usart_async.o \
hal/src/hal_adc_sync.o \
hal/src/hal_dac_sync.o \
hpl/sercom/hpl_sercom.o \
hal/utils/src/utils_ringbuffer.o \
hal/src/hal_atomic.o \
hal/src/hal_gpio.o \
hal/src/hal_evsys.o \
hal/utils/src/utils_event.o \
hal/src/hal_sleep.o \
usb_start.o \
samd51a/gcc/gcc/startup_samd51.o \
atmel_start.o \
usb/device/usbdc.o \
hpl/tc/hpl_tc.o \
hpl/cmcc/hpl_cmcc.o \
hpl/adc/hpl_adc.o \
FreeRTOS/Source/queue.o \
FreeRTOS/Source/tasks.o \
FreeRTOS/Source/list.o \
FreeRTOS/Source/timers.o \
FreeRTOS/Source/portable/MemMang/heap_1.o \
FreeRTOS/Source/portable/GCC/ARM_CM4F/port.o


OBJS_AS_ARGS +=  \
"hal/src/hal_io.o" \
"hpl/systick/hpl_systick.o" \
"samd51a/gcc/system_samd51.o" \
"usb/class/hid/device/hiddf_generic.o" \
"hpl/evsys/hpl_evsys.o" \
"hpl/core/hpl_core_m4.o" \
"hal/src/hal_cache.o" \
"usb/class/cdc/device/cdcdf_acm.o" \
"hal/utils/src/utils_syscalls.o" \
"hpl/mclk/hpl_mclk.o" \
"hpl/nvmctrl/hpl_nvmctrl.o" \
"usb/class/msc/device/mscdf.o" \
"hal/src/hal_spi_m_sync.o" \
"hal/src/hal_timer.o" \
"hal/src/hal_pwm.o" \
"hpl/usb/hpl_usb.o" \
"hal/src/hal_i2c_m_sync.o" \
"hal/src/hal_delay.o" \
"hpl/pm/hpl_pm.o" \
"hpl/core/hpl_init.o" \
"hpl/gclk/hpl_gclk.o" \
"hal/utils/src/utils_list.o" \
"usb/class/hid/device/hiddf_mouse.o" \
"hal/utils/src/utils_assert.o" \
"hpl/dmac/hpl_dmac.o" \
"hpl/oscctrl/hpl_oscctrl.o" \
"hal/src/hal_rand_sync.o" \
"hpl/trng/hpl_trng.o" \
"usb/class/hid/device/hiddf_keyboard.o" \
"usb/usb_protocol.o" \
"hpl/dac/hpl_dac.o" \
"hpl/ramecc/hpl_ramecc.o" \
"hal/src/hal_flash.o" \
"hal/src/hal_init.o" \
"hal/src/hal_usb_device.o" \
"main.o" \
"hpl/osc32kctrl/hpl_osc32kctrl.o" \
"hpl/rtc/hpl_rtc.o" \
"examples/driver_examples.o" \
"driver_init.o" \
"hal/src/hal_usart_async.o" \
"hal/src/hal_adc_sync.o" \
"hal/src/hal_dac_sync.o" \
"hpl/sercom/hpl_sercom.o" \
"hal/utils/src/utils_ringbuffer.o" \
"hal/src/hal_atomic.o" \
"hal/src/hal_gpio.o" \
"hal/src/hal_evsys.o" \
"hal/utils/src/utils_event.o" \
"hal/src/hal_sleep.o" \
"usb_start.o" \
"samd51a/gcc/gcc/startup_samd51.o" \
"atmel_start.o" \
"usb/device/usbdc.o" \
"hpl/tc/hpl_tc.o" \
"hpl/cmcc/hpl_cmcc.o" \
"hpl/adc/hpl_adc.o" \
"FreeRTOS/Source/queue.o" \
"FreeRTOS/Source/tasks.o" \
"FreeRTOS/Source/list.o" \
"FreeRTOS/Source/timers.o" \
"FreeRTOS/Source/portable/MemMang/heap_1.o" \
"FreeRTOS/Source/portable/GCC/ARM_CM4F/port.o"

# List the dependency files
DEPS := $(OBJS:%.o=%.d)

DEPS_AS_ARGS +=  \
"usb/usb_protocol.d" \
"hal/utils/src/utils_event.d" \
"hal/src/hal_io.d" \
"hpl/ramecc/hpl_ramecc.d" \
"hpl/systick/hpl_systick.d" \
"hpl/core/hpl_core_m4.d" \
"hpl/evsys/hpl_evsys.d" \
"hal/utils/src/utils_syscalls.d" \
"usb/class/cdc/device/cdcdf_acm.d" \
"samd51a/gcc/system_samd51.d" \
"hal/src/hal_i2c_m_sync.d" \
"hpl/usb/hpl_usb.d" \
"hal/src/hal_evsys.d" \
"usb/class/msc/device/mscdf.d" \
"hpl/nvmctrl/hpl_nvmctrl.d" \
"hal/src/hal_pwm.d" \
"hal/src/hal_timer.d" \
"hal/src/hal_spi_m_sync.d" \
"usb/class/hid/device/hiddf_mouse.d" \
"hal/utils/src/utils_list.d" \
"hpl/cmcc/hpl_cmcc.d" \
"hpl/dmac/hpl_dmac.d" \
"hal/utils/src/utils_assert.d" \
"hpl/mclk/hpl_mclk.d" \
"hal/src/hal_delay.d" \
"hpl/core/hpl_init.d" \
"hpl/pm/hpl_pm.d" \
"hal/src/hal_flash.d" \
"hpl/gclk/hpl_gclk.d" \
"hal/src/hal_usb_device.d" \
"usb_start.d" \
"hal/src/hal_init.d" \
"usb/class/hid/device/hiddf_keyboard.d" \
"hpl/trng/hpl_trng.d" \
"hal/src/hal_rand_sync.d" \
"hpl/dac/hpl_dac.d" \
"driver_init.d" \
"hal/src/hal_adc_sync.d" \
"hal/src/hal_usart_async.d" \
"hpl/osc32kctrl/hpl_osc32kctrl.d" \
"main.d" \
"examples/driver_examples.d" \
"hpl/rtc/hpl_rtc.d" \
"hal/src/hal_cache.d" \
"hal/src/hal_sleep.d" \
"hal/utils/src/utils_ringbuffer.d" \
"hpl/sercom/hpl_sercom.d" \
"hal/src/hal_dac_sync.d" \
"hal/src/hal_gpio.d" \
"usb/class/hid/device/hiddf_generic.d" \
"hal/src/hal_atomic.d" \
"hpl/tc/hpl_tc.d" \
"usb/device/usbdc.d" \
"hpl/oscctrl/hpl_oscctrl.d" \
"hpl/adc/hpl_adc.d" \
"samd51a/gcc/gcc/startup_samd51.d" \
"atmel_start.d"

OUTPUT_FILE_NAME :=Blinky
QUOTE := "
OUTPUT_FILE_PATH +=$(OUTPUT_FILE_NAME).elf
OUTPUT_FILE_PATH_AS_ARGS +=$(OUTPUT_FILE_NAME).elf

vpath %.c ../
vpath %.s ../
vpath %.S ../

# All Target
all: $(SUB_DIRS) $(OUTPUT_FILE_PATH)

# Linker target

$(OUTPUT_FILE_PATH): $(OBJS)
	@echo Building target: $@
	@echo Invoking: ARM/GNU Linker
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -o $(OUTPUT_FILE_NAME).elf $(OBJS_AS_ARGS) -Wl,--start-group -lm -Wl,--end-group -mthumb \
-Wl,-Map="$(OUTPUT_FILE_NAME).map" --specs=nano.specs -Wl,--gc-sections -mcpu=cortex-m4 \
 \
-T"../samd51a/gcc/gcc/samd51g19a_flash.ld" \
-L"../samd51a/gcc/gcc"
	@echo Finished building target: $@

	"arm-none-eabi-objcopy" -O binary "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).bin"
	"arm-none-eabi-objcopy" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  \
        "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).hex"
	"arm-none-eabi-objcopy" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma \
        .eeprom=0 --no-change-warnings -O binary "$(OUTPUT_FILE_NAME).elf" \
        "$(OUTPUT_FILE_NAME).eep" || exit 0
	"arm-none-eabi-objdump" -h -S "$(OUTPUT_FILE_NAME).elf" > "$(OUTPUT_FILE_NAME).lss"
	"arm-none-eabi-size" "$(OUTPUT_FILE_NAME).elf"

	

# Compiler targets




%.o: %.c
	@echo Building file: $<
	@echo ARM/GNU C Compiler
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 -Wall -c -std=gnu99 \
-D__SAMD51G19A__ -mcpu=cortex-m4 -mfloat-abi=softfp -mfpu=fpv4-sp-d16 \
-I"../" -I"../config" -I"../examples" -I"../hal/include" -I"../hal/utils/include" -I"../hpl/adc" -I"../hpl/cmcc" -I"../hpl/core" -I"../hpl/dac" -I"../hpl/dmac" -I"../hpl/evsys" -I"../hpl/gclk" -I"../hpl/mclk" -I"../hpl/nvmctrl" -I"../hpl/osc32kctrl" -I"../hpl/oscctrl" -I"../hpl/pm" -I"../hpl/port" -I"../hpl/ramecc" -I"../hpl/rtc" -I"../hpl/sercom" -I"../hpl/systick" -I"../hpl/tc" -I"../hpl/trng" -I"../hpl/usb" -I"../hri" -I"../" -I"../config" -I"../usb" -I"../usb/class/cdc" -I"../usb/class/cdc/device" -I"../usb/class/composite/device" -I"../usb/class/hid" -I"../usb/class/hid/device" -I"../usb/class/hub" -I"../usb/class/msc" -I"../usb/class/msc/device" -I"../usb/class/vendor" -I"../usb/device" -I"../" -I"../CMSIS/Core/Include" -I"../samd51a/include"  -I"../FreeRTOS/Source/include" -I"../FreeRTOS/Source/portable/GCC/ARM_CM4F" \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.s
	@echo Building file: $<
	@echo ARM/GNU Assembler
	$(QUOTE)arm-none-eabi-as$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 -Wall -c -std=gnu99 \
-D__SAMD51G19A__ -mcpu=cortex-m4 -mfloat-abi=softfp -mfpu=fpv4-sp-d16 \
-I"../" -I"../config" -I"../examples" -I"../hal/include" -I"../hal/utils/include" -I"../hpl/adc" -I"../hpl/cmcc" -I"../hpl/core" -I"../hpl/dac" -I"../hpl/dmac" -I"../hpl/evsys" -I"../hpl/gclk" -I"../hpl/mclk" -I"../hpl/nvmctrl" -I"../hpl/osc32kctrl" -I"../hpl/oscctrl" -I"../hpl/pm" -I"../hpl/port" -I"../hpl/ramecc" -I"../hpl/rtc" -I"../hpl/sercom" -I"../hpl/systick" -I"../hpl/tc" -I"../hpl/trng" -I"../hpl/usb" -I"../hri" -I"../" -I"../config" -I"../usb" -I"../usb/class/cdc" -I"../usb/class/cdc/device" -I"../usb/class/composite/device" -I"../usb/class/hid" -I"../usb/class/hid/device" -I"../usb/class/hub" -I"../usb/class/msc" -I"../usb/class/msc/device" -I"../usb/class/vendor" -I"../usb/device" -I"../" -I"../CMSIS/Core/Include" -I"../samd51a/include"  -I"../FreeRTOS/Source/include" -I"../FreeRTOS/Source/portable/GCC/ARM_CM4F" \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.S
	@echo Building file: $<
	@echo ARM/GNU Preprocessing Assembler
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 -Wall -c -std=gnu99 \
-D__SAMD51G19A__ -mcpu=cortex-m4 -mfloat-abi=softfp -mfpu=fpv4-sp-d16 \
-I"../" -I"../config" -I"../examples" -I"../hal/include" -I"../hal/utils/include" -I"../hpl/adc" -I"../hpl/cmcc" -I"../hpl/core" -I"../hpl/dac" -I"../hpl/dmac" -I"../hpl/evsys" -I"../hpl/gclk" -I"../hpl/mclk" -I"../hpl/nvmctrl" -I"../hpl/osc32kctrl" -I"../hpl/oscctrl" -I"../hpl/pm" -I"../hpl/port" -I"../hpl/ramecc" -I"../hpl/rtc" -I"../hpl/sercom" -I"../hpl/systick" -I"../hpl/tc" -I"../hpl/trng" -I"../hpl/usb" -I"../hri" -I"../" -I"../config" -I"../usb" -I"../usb/class/cdc" -I"../usb/class/cdc/device" -I"../usb/class/composite/device" -I"../usb/class/hid" -I"../usb/class/hid/device" -I"../usb/class/hub" -I"../usb/class/msc" -I"../usb/class/msc/device" -I"../usb/class/vendor" -I"../usb/device" -I"../" -I"../CMSIS/Core/Include" -I"../samd51a/include"  -I"../FreeRTOS/Source/include" -I"../FreeRTOS/Source/portable/GCC/ARM_CM4F" \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

# Detect changes in the dependent files and recompile the respective object files.
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(DEPS)),)
-include $(DEPS)
endif
endif

$(SUB_DIRS):
	$(MK_DIR) "$@"

clean:
	rm -f $(OBJS_AS_ARGS)
	rm -f $(OUTPUT_FILE_PATH)
	rm -f $(DEPS_AS_ARGS)
	rm -f $(OUTPUT_FILE_NAME).a $(OUTPUT_FILE_NAME).hex $(OUTPUT_FILE_NAME).bin \
        $(OUTPUT_FILE_NAME).lss $(OUTPUT_FILE_NAME).eep $(OUTPUT_FILE_NAME).map \
        $(OUTPUT_FILE_NAME).srec
