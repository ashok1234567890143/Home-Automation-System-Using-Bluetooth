# 🏠 Home Automation System Using Bluetooth

A Bluetooth-based home automation system that allows users to
wirelessly control electrical appliances using an Android
smartphone.

## 🚀 Features

- Bluetooth-based wireless control
- Smartphone interface
- Multiple appliance control
- Arduino-based embedded system
- Relay-controlled loads
- Low-cost implementation
- Real-time command processing

## 🧰 Hardware

- Arduino UNO
- HC-05 Bluetooth Module
- 4-Channel Relay Module
- LEDs / DC Loads
- Smartphone
- Breadboard
- Jumper Wires
- 5V Power Supply

## 💻 Software

- Arduino IDE
- Embedded C/C++
- Bluetooth Serial Communication

## ⚙️ Working Principle

The smartphone sends control commands through Bluetooth.

The HC-05 receives the commands and transfers them to Arduino
through serial communication.

Arduino processes the received command and activates or
deactivates the corresponding relay.

The relay then controls the connected appliance.

## 🔌 System Architecture

Smartphone
    ↓
Bluetooth
    ↓
HC-05
    ↓
Arduino UNO
    ↓
Relay Module
    ↓
Electrical Loads

## 🎮 Control Commands

| Command | Function |
|---------|----------|
| 1 | Light 1 ON |
| 2 | Light 1 OFF |
| 3 | Light 2 ON |
| 4 | Light 2 OFF |
| 5 | Fan ON |
| 6 | Fan OFF |
| 7 | Load 4 ON |
| 8 | Load 4 OFF |

## 📸 Project Images

### Complete Prototype

![Prototype](Images/prototype.jpg)

### Circuit

![Circuit](Images/relay_circuit.jpg)

### Bluetooth Module

![HC-05](Images/hc05_module.jpg)

### Appliance ON

![Appliance ON](Images/appliance_on.jpg)

## 🎯 Applications

- Smart homes
- Hostel rooms
- Office automation
- Laboratory automation
- Assistive technology
- Energy management systems

## 🔮 Future Improvements

- ESP32-based Wi-Fi control
- Mobile application
- Voice control
- IoT cloud integration
- Energy monitoring
- PIR-based automatic lighting
- LDR-based automatic lighting
- Temperature-based fan control
- Remote control through internet

## 👨‍💻 Author

G. Ashok

Electronics and Communication Engineering
