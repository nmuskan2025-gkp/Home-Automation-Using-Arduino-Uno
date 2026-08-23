# Home-Automation-Using-Arduino-Uno
Arduino based home automation systems for controlling home appliances
# Home Automation Using Arduino Uno

An Arduino-based home automation system designed to control home appliances using sensors, switches, and a servo motor.

## Features

- Automatic light control using LDR sensor
- Fan control using a switch
- Door control using a servo motor
- Simple and low-cost automation system
- Arduino Uno based control

## Components Used

- Arduino Uno
- LDR Sensor
- Servo Motor
- Fan
- Light
- Switches
- Jumper Wires
- Breadboard
## Arduino Pin Connections

| Component | Arduino Pin |
|---|---|
| LDR Sensor | A0 |
| Light | D8 |
| Fan | D9 |
| Servo Motor | D10 |
| Door Switch | D6 |
| Fan Switch | D7 |
## Working

The LDR sensor detects the surrounding light intensity. When the environment becomes dark, the light is automatically turned ON.

The fan can be controlled using a switch.

The servo motor is used to control the door. The door can be opened or closed using the control switch.

Arduino Uno acts as the main controller and manages all the connected components.

## Technologies Used

- Arduino Uno
- Arduino IDE
- Embedded C/C++
- LDR Sensor
- Servo Motor

## Project Structure

- `Home_Automation.ino` - Arduino source code
- `README.md` - Project documentation

## Future Improvements

- Add temperature-based fan control
- Add Bluetooth or Wi-Fi control
- Add mobile application control
- Add IoT-based monitoring




