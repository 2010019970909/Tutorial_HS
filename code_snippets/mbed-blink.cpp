/**
  *  Blink example from Mbed for the Nucleo 64 F303RE board
  */

#include "mbed.h"   // Include Mbed main header

DigitalOut myled(LED2); // Create an DigitalOut object

int main() {
	while(1) {
		myled = 1; // LED is ON
		wait(0.2); // 200 ms
		myled = 0; // LED is OFF
		wait(1.0); // 1 second
	}
}