# 02 - Quiz Show Buzzer System

This project implements a "first-to-press" priority encoder logic, commonly used in quiz show buzzer systems. The control logic is designed using Model-Based Design in MATLAB/Simulink and simulated on a dsPIC33 microcontroller via Proteus.

## 📌 Project Objective
The system features three contestant buttons and one reset button. When a contestant presses their button first, their corresponding LED lights up. The logic immediately locks out the other two buttons, preventing their LEDs from turning on even if pressed. A dedicated "Reset" button clears the system for the next round.

## 🛠 Tools & Technologies
* **Microcontroller:** dsPIC33FJ32MC204
* **Software:** MATLAB/Simulink (Stateflow/Logic Blocks)
* **Simulation Environment:** Proteus

## 🔌 Pin Configuration
* **Digital Inputs:** * PC0 (Pin 25) - Contestant 1 Button
  * PC1 (Pin 26) - Contestant 2 Button
  * PC2 (Pin 27) - Contestant 3 Button
  * PC3 (Pin 36) - Reset Button
* **Digital Outputs:** * PB0 (Pin 21) - Contestant 1 LED
  * PB1 (Pin 22) - Contestant 2 LED
  * PB2 (Pin 23) - Contestant 3 LED

## 📸 Simulation Preview
*(Screenshots of the priority logic in Simulink and the Proteus schematic are included in the repository files.)*
