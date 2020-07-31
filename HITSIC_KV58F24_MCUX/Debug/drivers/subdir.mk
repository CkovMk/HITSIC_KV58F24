################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_adc16.c \
../drivers/fsl_aoi.c \
../drivers/fsl_clock.c \
../drivers/fsl_cmp.c \
../drivers/fsl_common.c \
../drivers/fsl_crc.c \
../drivers/fsl_dac.c \
../drivers/fsl_dmamux.c \
../drivers/fsl_dspi.c \
../drivers/fsl_dspi_edma.c \
../drivers/fsl_edma.c \
../drivers/fsl_enc.c \
../drivers/fsl_enet.c \
../drivers/fsl_ewm.c \
../drivers/fsl_flexbus.c \
../drivers/fsl_flexcan.c \
../drivers/fsl_flexcan_edma.c \
../drivers/fsl_ftfx_cache.c \
../drivers/fsl_ftfx_controller.c \
../drivers/fsl_ftfx_flash.c \
../drivers/fsl_ftfx_flexnvm.c \
../drivers/fsl_ftm.c \
../drivers/fsl_gpio.c \
../drivers/fsl_hsadc.c \
../drivers/fsl_i2c.c \
../drivers/fsl_i2c_edma.c \
../drivers/fsl_llwu.c \
../drivers/fsl_lptmr.c \
../drivers/fsl_pdb.c \
../drivers/fsl_pit.c \
../drivers/fsl_pmc.c \
../drivers/fsl_pwm.c \
../drivers/fsl_rcm.c \
../drivers/fsl_sim.c \
../drivers/fsl_smc.c \
../drivers/fsl_sysmpu.c \
../drivers/fsl_trng.c \
../drivers/fsl_uart.c \
../drivers/fsl_uart_edma.c \
../drivers/fsl_wdog.c \
../drivers/fsl_xbara.c \
../drivers/fsl_xbarb.c 

OBJS += \
./drivers/fsl_adc16.o \
./drivers/fsl_aoi.o \
./drivers/fsl_clock.o \
./drivers/fsl_cmp.o \
./drivers/fsl_common.o \
./drivers/fsl_crc.o \
./drivers/fsl_dac.o \
./drivers/fsl_dmamux.o \
./drivers/fsl_dspi.o \
./drivers/fsl_dspi_edma.o \
./drivers/fsl_edma.o \
./drivers/fsl_enc.o \
./drivers/fsl_enet.o \
./drivers/fsl_ewm.o \
./drivers/fsl_flexbus.o \
./drivers/fsl_flexcan.o \
./drivers/fsl_flexcan_edma.o \
./drivers/fsl_ftfx_cache.o \
./drivers/fsl_ftfx_controller.o \
./drivers/fsl_ftfx_flash.o \
./drivers/fsl_ftfx_flexnvm.o \
./drivers/fsl_ftm.o \
./drivers/fsl_gpio.o \
./drivers/fsl_hsadc.o \
./drivers/fsl_i2c.o \
./drivers/fsl_i2c_edma.o \
./drivers/fsl_llwu.o \
./drivers/fsl_lptmr.o \
./drivers/fsl_pdb.o \
./drivers/fsl_pit.o \
./drivers/fsl_pmc.o \
./drivers/fsl_pwm.o \
./drivers/fsl_rcm.o \
./drivers/fsl_sim.o \
./drivers/fsl_smc.o \
./drivers/fsl_sysmpu.o \
./drivers/fsl_trng.o \
./drivers/fsl_uart.o \
./drivers/fsl_uart_edma.o \
./drivers/fsl_wdog.o \
./drivers/fsl_xbara.o \
./drivers/fsl_xbarb.o 

C_DEPS += \
./drivers/fsl_adc16.d \
./drivers/fsl_aoi.d \
./drivers/fsl_clock.d \
./drivers/fsl_cmp.d \
./drivers/fsl_common.d \
./drivers/fsl_crc.d \
./drivers/fsl_dac.d \
./drivers/fsl_dmamux.d \
./drivers/fsl_dspi.d \
./drivers/fsl_dspi_edma.d \
./drivers/fsl_edma.d \
./drivers/fsl_enc.d \
./drivers/fsl_enet.d \
./drivers/fsl_ewm.d \
./drivers/fsl_flexbus.d \
./drivers/fsl_flexcan.d \
./drivers/fsl_flexcan_edma.d \
./drivers/fsl_ftfx_cache.d \
./drivers/fsl_ftfx_controller.d \
./drivers/fsl_ftfx_flash.d \
./drivers/fsl_ftfx_flexnvm.d \
./drivers/fsl_ftm.d \
./drivers/fsl_gpio.d \
./drivers/fsl_hsadc.d \
./drivers/fsl_i2c.d \
./drivers/fsl_i2c_edma.d \
./drivers/fsl_llwu.d \
./drivers/fsl_lptmr.d \
./drivers/fsl_pdb.d \
./drivers/fsl_pit.d \
./drivers/fsl_pmc.d \
./drivers/fsl_pwm.d \
./drivers/fsl_rcm.d \
./drivers/fsl_sim.d \
./drivers/fsl_smc.d \
./drivers/fsl_sysmpu.d \
./drivers/fsl_trng.d \
./drivers/fsl_uart.d \
./drivers/fsl_uart_edma.d \
./drivers/fsl_wdog.d \
./drivers/fsl_xbara.d \
./drivers/fsl_xbarb.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-c++ -std=c++17 -DCPU_MKV58F1M0VLQ24 -DCPU_MKV58F1M0VLQ24_cm7 -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=1 -DSERIAL_PORT_TYPE_UART=0 -DSERIAL_PORT_TYPE_SWO=1 -DDEBUG_CONSOLE_RX_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__NEWLIB__ -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\board" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\source" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\drivers" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\device" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\CMSIS" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\utilities" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\serial_manager" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\lists" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\uart" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\utilities\utilities" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\fatfs\source" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\fatfs\source\fsl_ram_disk" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\fatfs\source\fsl_sdspi_disk" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\sdmmc\inc" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\rtcesl\amclib" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\rtcesl\gdflib" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\rtcesl\gflib" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\rtcesl\gmclib" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\rtcesl\mlib" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\gpio" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\internal_flash" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\rng" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\crc" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\mem_manager" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fno-rtti -fexceptions -fpermissive -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m7 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


