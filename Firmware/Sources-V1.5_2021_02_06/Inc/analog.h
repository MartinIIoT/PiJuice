/*
 * analog.h
 *
 *  Created on: 11.12.2016.
 *      Author: milan
 */

#ifndef ANALOG_H_
#define ANALOG_H_

extern ADC_AnalogWDGConfTypeDef analogWDGConfig;

void ANALOG_Init(uint32_t sysTime);
void ANALOG_Service(uint32_t sysTime);

uint16_t ANALOG_GetAVDDMv(void);
uint16_t ANALOG_GetMv(uint8_t channel);
uint16_t ANALOG_GetBatteryMv(void);
uint16_t ANALOG_Get5VRailMv(void);
int16_t ANALOG_Get5VRailMa(void);
uint8_t ANALOG_AnalogSamplesReady(void);
int16_t ANALOG_GetMCUTemp(void);



#if !defined(RTOS_FREERTOS)
void AnalogTask(void);
#endif

void AnalogStop(void);
void AnalogStart(void);
void AnalogPowerIsGood(void);
void AnalogAdcWDGEnable(uint8_t enable);

int16_t Get5vIoVoltage();
uint8_t AnalogSamplesReady();
HAL_StatusTypeDef AnalogAdcWDGConfig(uint8_t channel, uint16_t voltThresh_mV);
uint16_t GetSampleVoltage(uint8_t channel);
uint16_t GetAverageBatteryVoltage(void);

__STATIC_INLINE uint16_t GetAdcWDGThreshold() {
	return analogWDGConfig.LowThreshold;
}

#endif /* ANALOG_H_ */
