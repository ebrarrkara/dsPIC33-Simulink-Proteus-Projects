# 03 - Timer Controlled LED

This project demonstrates a custom timer and delay logic implemented on a dsPIC33 microcontroller. The system uses a fixed-step discrete solver in MATLAB/Simulink to create an accurate 3-second delay mechanism, which is then simulated in Proteus.

## 📌 Project Objective
The objective is to create a time-bound event trigger. When the start button is pressed, a red LED turns on immediately. The control logic counts the elapsed time using a custom feedback loop and automatically turns off the LED after exactly 3 seconds. The system then resets and waits for the next button press.

## 🛠 Tools & Technologies
* **Microcontroller:** dsPIC33FJ32MC204
* **Software:** MATLAB/Simulink (Fixed-Step Discrete Solver, Logic & Math Blocks)
* **Simulation Environment:** Proteus

## 🔌 Pin Configuration
* **Digital Input:** PC0 (Pin 25) - Start Button
* **Digital Output:** PB0 (Pin 21) - Red LED

## 📸 Simulation Preview
*(Screenshots of the Simulink counter logic and Proteus schematic are included in the repository files.)*
