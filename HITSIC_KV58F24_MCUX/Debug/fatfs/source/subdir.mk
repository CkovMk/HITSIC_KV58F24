################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../fatfs/source/diskio.c \
../fatfs/source/ff.c \
../fatfs/source/ffsystem.c \
../fatfs/source/ffunicode.c 

OBJS += \
./fatfs/source/diskio.o \
./fatfs/source/ff.o \
./fatfs/source/ffsystem.o \
./fatfs/source/ffunicode.o 

C_DEPS += \
./fatfs/source/diskio.d \
./fatfs/source/ff.d \
./fatfs/source/ffsystem.d \
./fatfs/source/ffunicode.d 


# Each subdirectory must supply rules for building sources it contributes
fatfs/source/%.o: ../fatfs/source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-c++ -std=c++17 -DCPU_MKV58F1M0VLQ24 -DCPU_MKV58F1M0VLQ24_cm7 -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=1 -DSERIAL_PORT_TYPE_UART=0 -DSERIAL_PORT_TYPE_SWO=1 -DDEBUG_CONSOLE_RX_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__NEWLIB__ -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\board" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\source" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\drivers" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\device" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\CMSIS" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\utilities" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\serial_manager" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\lists" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\uart" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\utilities\utilities" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\fatfs\source" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\fatfs\source\fsl_ram_disk" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\fatfs\source\fsl_sdspi_disk" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\sdmmc\inc" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\rtcesl\amclib" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\rtcesl\gdflib" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\rtcesl\gflib" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\rtcesl\gmclib" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\rtcesl\mlib" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\gpio" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\internal_flash" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\rng" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\crc" -I"C:\Users\CkovMk\Repository\HITSIC_KV58F24\HITSIC_KV58F24_MCUX\component\mem_manager" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fno-rtti -fexceptions -fpermissive -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m7 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


