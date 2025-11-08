🚗 Obstacle Detection System using Ultrasonic Sensor
🔍 Overview:

This project uses an ultrasonic sensor (HC-SR04) with an Arduino UNO to detect nearby obstacles by measuring the distance to objects. If an object is detected within a set range, the system activates an LED or buzzer as an alert. This project demonstrates core embedded system concepts such as sensor interfacing, pulse measurement, and real-time distance calculation, often used in autonomous robots, parking assistance, and collision avoidance systems.

⚙️ Working Principle:

The Arduino triggers the ultrasonic sensor via the TRIG pin to send out an ultrasonic pulse.

When this pulse hits an obstacle, it reflects back to the sensor and is detected by the ECHO pin.

The Arduino measures the time taken for the pulse to return and calculates the distance using the formula:

Distance
=
𝐷
𝑢
𝑟
𝑎
𝑡
𝑖
𝑜
𝑛
×
0.034
2
Distance=
2
Duration×0.034
	​


If the distance is less than a predefined threshold (e.g., 15 cm), the LED or buzzer is turned ON as a warning signal.

When the path is clear, the warning devices remain OFF.

🧩 Components Used:
Component	Quantity	Purpose
Arduino UNO	1	Microcontroller to process signals
Ultrasonic Sensor (HC-SR04)	1	Measures distance to obstacles
LED	1	Visual alert for obstacle detection
Buzzer (optional)	1	Audible alert for obstacle detection
220Ω Resistor	1	Limits current through LED
Breadboard & Jumper Wires	—	For easy circuit connections
🔌 Circuit Connections:
Ultrasonic Sensor Pin	Connects To	Description
VCC	5V	Power supply for sensor
GND	GND	Common ground
TRIG	D9	Sends ultrasonic pulse
ECHO	D8	Receives reflected pulse
Other Component	Connection	Description
LED Anode (+)	D7 via 220Ω resistor	Glows when obstacle detected
LED Cathode (–)	GND	Completes LED circuit
Buzzer (+)	D6 (optional)	Beeps when obstacle detected
Buzzer (–)	GND	Common ground
