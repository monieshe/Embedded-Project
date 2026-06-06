# 🔥 Fire Extinguisher Robot Using Flame Sensor

An autonomous fire-fighting robot capable of detecting and extinguishing small fires using a flame sensor and an Arduino-based control system. The robot continuously monitors its surroundings, locates the fire source, moves toward it, and activates an extinguishing mechanism such as a water pump or fan.

---

## 📌 Project Description

This project demonstrates the implementation of an autonomous fire extinguisher robot using embedded systems and sensor technology. The robot is designed to detect flames using an infrared flame sensor and respond automatically by moving toward the flame and extinguishing it.

The project is intended for educational purposes, robotics competitions, and fire safety demonstrations.

---

## 🚀 Features

- Automatic flame detection
- Autonomous fire source tracking
- Water pump or fan-based fire suppression
- Real-time sensor monitoring
- Compact and low-cost design
- Easy to modify and expand

---

## 🛠 Hardware Components

| Component | Quantity |
|------------|----------|
| Arduino Uno/Nano | 1 |
| Flame Sensor Module | 1 |
| L298N Motor Driver | 1 |
| DC Gear Motors | 2 |
| Robot Chassis | 1 |
| Wheels | 2 |
| Water Pump / DC Fan | 1 |
| Relay Module / MOSFET | 1 |
| Battery Pack | 1 |
| Jumper Wires | As Required |

---

## 🔌 System Architecture

```text
Flame Sensor
      │
      ▼
 Arduino Controller
      │
 ┌────┴────┐
 ▼         ▼
Motor    Relay
Driver   Module
 ▼         ▼
Motors   Pump/Fan
```

---

## ⚙️ Working Principle

1. The flame sensor continuously scans the environment.
2. When a flame is detected, the sensor sends a signal to the Arduino.
3. The Arduino processes the signal and determines the fire location.
4. The robot moves toward the detected flame.
5. Once the robot reaches a safe extinguishing distance, the water pump or fan is activated.
6. The flame is extinguished.
7. The robot returns to monitoring mode.

---

## 🔧 Circuit Connections

### Flame Sensor

| Flame Sensor | Arduino |
|--------------|----------|
| VCC | 5V |
| GND | GND |
| DO/AO | Digital/Analog Pin |

### Motor Driver (L298N)

| L298N | Arduino |
|--------|----------|
| IN1 | D8 |
| IN2 | D9 |
| IN3 | D10 |
| IN4 | D11 |

### Relay Module

| Relay | Arduino |
|--------|----------|
| IN | D7 |
| VCC | 5V |
| GND | GND |

---

## 💻 Software Requirements

- Arduino IDE
- Arduino AVR Board Package
- Required Arduino Libraries (if applicable)

---

## 📂 Project Structure

```text
Fire-Extinguisher-Robot/
│
├── code/
│   └── fire_robot.ino
│
├── circuit_diagram/
│   └── circuit.png
│
├── images/
│   ├── robot.jpg
│   └── working.jpg
│
├── README.md
└── LICENSE
```

---

## 📸 Project Images

Add project photos inside the `images/` folder and update this section.

```markdown
![Robot](images/robot.jpg)
```

---

## 🔮 Future Enhancements

- Multiple flame sensors for accurate flame localization
- Ultrasonic obstacle avoidance
- Wi-Fi or Bluetooth control
- Smoke and gas sensor integration
- IoT-based fire alerts
- Camera-assisted fire detection

---

## ⚠️ Important Notes

### Safety

- Test only with small controlled flames such as candles.
- Keep flammable materials away from the testing area.
- Never leave the robot unattended during testing.
- Keep a real fire extinguisher nearby.

### Hardware

- Use a stable battery supply.
- Secure all wiring connections.
- Keep the flame sensor away from direct heat exposure.
- Verify motor driver connections before powering the robot.

### Sensor Calibration

- Adjust the flame sensor sensitivity using the onboard potentiometer.
- Test detection range before final deployment.
- Avoid direct sunlight during testing as it may cause false detections.

### Limitations

- Suitable only for small-scale fire demonstrations.
- Not intended for real-world fire-fighting applications.
- Detection accuracy decreases with increasing distance.

---

## 🎯 Applications

- Robotics projects
- Engineering mini-projects
- Fire safety demonstrations
- Educational learning
- Embedded systems research

---

## 👨‍💻 Author

**Moniesh E.**

Electronics Engineering Student

---

## 📜 License

This project is licensed under the MIT License.

Feel free to use, modify, and distribute this project for educational and research purposes.
