################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ra/fsp/src/r_dac/r_dac.c 

OBJS += \
./ra/fsp/src/r_dac/r_dac.o 

C_DEPS += \
./ra/fsp/src/r_dac/r_dac.d 


# Each subdirectory must supply rules for building sources it contributes
ra/fsp/src/r_dac/%.o: ../ra/fsp/src/r_dac/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O2 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal  -g -D_RENESAS_RA_ -I"D:\e2_studio\workspace\Final_WaterCrown\src" -I"D:\e2_studio\workspace\Final_WaterCrown\ra\fsp\inc" -I"D:\e2_studio\workspace\Final_WaterCrown\ra\fsp\inc\api" -I"D:\e2_studio\workspace\Final_WaterCrown\ra\fsp\inc\instances" -I"D:\e2_studio\workspace\Final_WaterCrown\ra\arm\CMSIS_5\CMSIS\Core\Include" -I"D:\e2_studio\workspace\Final_WaterCrown\ra_gen" -I"D:\e2_studio\workspace\Final_WaterCrown\ra_cfg\fsp_cfg\bsp" -I"D:\e2_studio\workspace\Final_WaterCrown\ra_cfg\fsp_cfg" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" -x c "$<"
	@echo 'Finished building: $<'
	@echo ' '


