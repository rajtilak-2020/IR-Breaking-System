# 🚗 **Smart Braking System with Arduino** 🚦  

[![Arduino](https://img.shields.io/badge/Made%20With-Arduino-blue.svg?style=for-the-badge)](https://www.arduino.cc/)

🌟 **A safety-first braking system using IR sensors, a servo motor, and a relay module to detect obstacles and engage brakes automatically or manually!**

---

## 🛠️ **Features**  
✨ **Obstacle Detection**: IR sensors scan for nearby objects and trigger the brakes.  
✨ **Manual Control**: Engage brakes using a switch.  
✨ **Smooth Servo Braking**: A servo motor moves precisely to engage/disengage brakes.  
✨ **Power Management**: Relay cuts off power to other systems during braking.

---






---

## 🔧 **Components You’ll Need**  

| **Component**        | **Quantity** | **Purpose**                        |
|-----------------------|--------------|------------------------------------|
| Arduino Board         | 1            | Controls the system logic          |
| Servo Motor           | 1            | Engages/disengages braking         |
| Relay Module          | 1            | Manages power flow during braking  |
| IR Sensors            | 6            | Detects obstacles                  |
| Manual Switch         | 1            | Allows manual braking control      |
| Connecting Wires      | As Needed    | Connect all components             |

---

## 📝 **Future Enhancements**
- Add a **buzzer** to alert when brakes are engaged.
- Include **distance measurement** with ultrasonic sensors.
- Develop a mobile app interface for remote control.

---

## 🔌 **Circuit Diagram**


               +------------------+
               |   Arduino Board  |
               +------------------+
                   |       |       |       |       |       |
                   |       |       |       |       |       |
               +---+   +---+   +---+   +---+   +---+   +---+
               |IR1|   |IR2|   |IR3|   |IR4|   |IR5|   |IR6|
               +---+   +---+   +---+   +---+   +---+   +---+
                LOW      LOW      LOW      LOW      LOW      LOW
                 |        |        |        |        |        |
                 +--------+--------+--------+--------+--------+
                              To Digital Pins

                   +----------------------+
                   |      Servo Motor     |
                   +----------------------+
                              |
                              +----------> Pin 11

                   +----------------------+
                   |     Relay Module     |
                   +----------------------+
                              |
                              +----------> Pin 8

                   +----------------------+
                   |     Manual Switch    |
                   +----------------------+
                              |
                              +----------> Pin 10

---

## 💬 Feedback and Contributions

I’m open to feedback and collaboration! Feel free to open an issue if you find any bugs or have suggestions for improvement. 

1. **Clone the Repository**:
    ```bash
    https://github.com/rajtilak-2020/IR-Breaking-System.git
    ```
2. **Navigate into the Directory**:
    ```bash
    cd IR-Breaking-System
    ```
3. **Make your Changes** and submit a pull request!

---


<p align="center">
  🌟 Give this project a star if you found it helpful! ⭐

  <p align="center">
    Made with ❤️ by <a href="https://github.com/rajtilak-2020">Raj</a>
</p>
