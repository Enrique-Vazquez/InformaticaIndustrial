// ESP32_6.h

#ifndef _ESP32_6_h
#define _ESP32_6_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include "ADC_Read.h"

#include "LED_Handler.h"



#define LED_BUILTIN 15
#define BUTTON_BUILTIN 0
#define BATTERY_PIN 36
class NiMU {

public:
	
	NiMU(); //constructor
	~NiMU();
	LED led;
	uint8_t readBattery();

private:
	ADCRead battery;
};
#endif
