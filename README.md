 Arduino program that **measures distance** using an **ultrasonic sensor**.
 
**It works as follows:**

Defines TRIG_PIN (D9) and ECHO_PIN (D10) for triggering and receiving signals.

Initializes serial communication and sets pin modes in setup().

In loop(), it:

Sends a short pulse to the trigger pin.

Reads the time taken for the echo to return.

Calculates the distance in centimeters using the speed of sound.

Prints the distance to the Serial Monitor.

Waits 500ms before the next reading.

**Components Required**

Arduino Board (Uno, Mega, or Nano)

Ultrasonic Sensor HC-SR04

Jumper Wires

USB Cable (to connect Arduino to PC)

HC-SR04 Pin	Arduino Pin
VCC	    5V
GND    	GND
TRIG   	D9
ECHO	  D10
