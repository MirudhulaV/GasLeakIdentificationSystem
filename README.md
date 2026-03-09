# Gas Leak Detection System with Automatic Window and Fan

## Aim
To design and develop a gas leak detection system using ESP8266 and MQ-2 gas sensor that automatically opens a window and turns on a fan when gas leakage is detected to improve safety and ventilation.

## Problem Statement
Gas leakage in homes, kitchens, laboratories, and industries can lead to dangerous accidents such as fires, explosions, and health hazards. Many existing systems only provide alarms without taking action to remove the gas. Therefore, a smart system is required to detect gas leakage and automatically activate ventilation to reduce gas concentration and prevent accidents.

## Scope
The system continuously monitors the gas concentration in the environment using an MQ-2 gas sensor. When the gas level exceeds a predefined threshold value, the system automatically opens a window and turns on a fan to ventilate the area. Once the gas level returns to a safe range, the system stops the fan and closes the window. This system can be used in homes, kitchens, laboratories, and small industrial environments for safety purposes.

## Components Used

### Hardware
- ESP8266 NodeMCU
- MQ-2 Gas Sensor
- Servo Motor (for window opening)
- Fan
- Relay Module
- Breadboard
- Jumper Wires
- Power Supply

## Software Used
- Arduino IDE (for programming ESP8266)
- GitHub (for project documentation and code hosting)
- Tinkercad / Fritzing (for circuit simulation and diagram)

## Working Principle
The MQ-2 gas sensor detects the presence of gas in the environment and sends the sensor readings to the ESP8266 microcontroller. The microcontroller continuously checks the gas value and compares it with a predefined threshold. When the gas level exceeds the threshold, the system activates the ventilation mechanism. A servo motor rotates to open the window, and the fan turns on to remove the gas from the environment. Once the gas level returns to a safe value, the fan stops and the window closes automatically.
