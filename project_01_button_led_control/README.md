# 01 - Button Controlled LED

This project demonstrates a basic digital input/output (I/O) control using a dsPIC33FJ32MC204 microcontroller. The control logic is designed in MATLAB/Simulink using a Model-Based Design approach and simulated in Proteus.

## 📌 Project Objective
The objective is to control a green LED using a push button. When the button is pressed, the LED turns on. When the button is released, the LED turns off. The embedded logic is generated directly from Simulink blocks into a `.hex` file without writing traditional C code.

## 🛠 Tools & Technologies
* **Microcontroller:** dsPIC33FJ32MC204
* **Software:** MATLAB/Simulink (Microchip Device Blocks for Simulink)
* **Simulation Environment:** Proteus

## 🔌 Pin Configuration
* **Digital Input:** PC0 (Pin 25) - Push Button (Pull-Down configuration)
* **Digital Output:** PA9 (Pin 35) - Green LED

## 📸 Simulation Preview
*(Screenshots of the Simulink model and Proteus schematic are included in the repository files.)*
