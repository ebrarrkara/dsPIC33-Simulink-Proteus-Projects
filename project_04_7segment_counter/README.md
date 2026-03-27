# 04 - 7-Segment 99-Second Timer

This project implements a 99-second digital timer using two 7-segment displays. The logic is built using a Model-Based Design approach in MATLAB/Simulink and simulated on a dsPIC33 microcontroller in Proteus.

## 📌 Project Objective
The system counts from 00 to 99 seconds using a discrete fixed-step solver (0.01s step size). It features a "Start" button to initiate the timer and a "Reset" button to clear the displays back to 00. The numerical data is processed through mathematical logic blocks (modulus and rounding) and converted into a 7-segment display hex format via an index vector.

## 🛠 Tools & Technologies
* **Microcontroller:** dsPIC33FJ32MC204
* **Software:** MATLAB/Simulink (Discrete Solver, Math & Lookup Table Blocks)
* **Simulation Environment:** Proteus

## 🔌 Pin Configuration
* **Digital Inputs:** * PA9 (Pin 35) - Start Button
  * PA10 (Pin 12) - Reset Button
* **Digital Outputs:** * PB0 to PB7 - Tens Digit (7-Segment Display 1)
  * PC0 to PC7 - Ones Digit (7-Segment Display 2)

## 📸 Simulation Preview
*(Screenshots of the Simulink counter logic and the Proteus schematic are included in the repository files.)*
