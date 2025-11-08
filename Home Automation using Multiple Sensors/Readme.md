🏠 Project: Home Automation using Multiple Sensors (LDR, PIR, LM35)
🔍 Overview:

This project demonstrates an intelligent home automation system that automatically controls electrical appliances based on real-time environmental conditions. It uses three sensors — an LDR (Light Dependent Resistor) for ambient light detection, a PIR (Passive Infrared) sensor for motion detection, and an LM35 temperature sensor for monitoring room temperature.

The Arduino processes inputs from these sensors to perform smart actions such as turning lights ON/OFF based on motion and light levels, and activating a fan when temperature rises above a threshold. This project highlights core embedded system concepts like sensor interfacing, automation logic, and real-time data processing — making it ideal for smart home and IoT applications.

⚙️ Key Features:

Automatic lighting control using LDR and PIR sensors.

Temperature-based fan control using LM35.

Real-time sensor data monitoring via Serial Monitor.

Energy-efficient and fully autonomous operation.

🧩 Components Used:

Arduino UNO

LDR Sensor

PIR Sensor

LM35 Temperature Sensor

LED (for light simulation)

DC Motor or Fan (for temperature control)

⚙️ Working Principle:

The system continuously reads inputs from the connected sensors and makes intelligent decisions in real-time.

The LDR sensor measures surrounding light intensity — when the light level drops below a threshold, and motion is detected by the PIR sensor, the system automatically turns the light (LED) ON.

The LM35 sensor monitors ambient temperature — when the temperature exceeds a set limit, the fan (DC motor) is activated to cool the environment.

Once no motion is detected or the temperature drops, the devices are turned OFF automatically, ensuring energy efficiency and user convenience.

Resistors, Transistor, and Diode
