# 🔒 Biometric-Door-Lock-System

A biometric-based electronic mini project that uses a phone's fingerprint sensor and Bluetooth to control a solenoid lock via an Arduino Uno. Built for enhanced access control in homes, offices, or labs.

## 📌 Project Summary

This system integrates **biometric authentication** with **IoT-based hardware control**. A user’s fingerprint is scanned using a phone fingerprint app and sent via **Bluetooth (HC-05)** to an **Arduino Uno**, which then activates a **5V relay** to unlock a **solenoid lock** if the fingerprint is valid.

### 🔄 Workflow:

1. Fingerprint is scanned via a mobile app.
2. Bluetooth module HC-05 sends data to Arduino.
3. Arduino reads the input and checks if it matches a predefined value.
4. If matched:
   - Solenoid lock opens for 3 seconds.


---

## 🔧 Components Used

- Arduino UNO  
- Bluetooth Module (HC-05)  
- 5V Relay Module  
- Solenoid Lock  
- Jumper Wires  
- Mobile Phone with Fingerprint App

## What I Learned
- Basics of interfacing hardware with Arduino
- Working with Bluetooth modules (HC-05)
- Writing serial communication logic in Arduino
- Using fingerprint app integration with hardware
- Building a real-world security-focused system

