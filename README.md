# Healthcare Automation System using Node-RED and MQTT

This project presents a **Smart Healthcare Automation System** designed to improve patient safety through continuous monitoring and real-time alerting using **MQTT** and **Node-RED**.  
The system focuses on detecting critical changes in a patient’s condition or hospital room environment and notifying medical staff instantly, reducing response time during emergencies.

---

## 📌 Project Scenario

Imagine a post-surgery patient resting alone in a hospital room.  
If the **air quality deteriorates** or the patient’s **heart rate drops suddenly**, and no one is there to notice immediately — the delay can put the patient’s life at risk.

Hospitals face this challenge every day:

- Vital signs require constant attention  
- Room conditions (air quality, temperature, humidity) influence recovery  
- Medical staff can’t manually observe every patient continuously  

This project offers an automated solution to close that critical monitoring gap.

---

## 🎯 Objective

To develop an **automated patient monitoring system** for hospital rooms that:

- Continuously tracks vital signs (e.g., heart rate)  
- Monitors room conditions (e.g., air quality)  
- Detects abnormal or dangerous changes  
- Generates **real-time alerts** to the nursing station or reception  
- Ensures rapid medical intervention and improves patient safety  

---

## 🚀 Solution Overview

The system integrates multiple technologies:

- **MQTT protocol** for lightweight sensor data communication  
- **Node-RED** for real-time logic, processing, and decision-making  
- **A live dashboard** for monitoring patient conditions  
- **Alerting mechanisms** that trigger when thresholds are exceeded  

Together, these create a smart hospital room capable of automated supervision.

---

## 🧩 System Architecture

### 1. Sensors / Virtual Devices (Publisher)
Simulated medical sensors publish essential metrics:

- Heart rate  
- Air quality index (AQI)  
- Optional: Temperature, humidity, SpO₂  

Example MQTT topics:

hospital/patient1/heartrate
hospital/patient1/airquality


### 2. MQTT Broker
Acts as the central communication hub.  
Common brokers include **Mosquitto**, **HiveMQ**, and **EMQX**.

### 3. Node-RED (Processing Engine)
Node-RED handles:

- Subscription to MQTT topics  
- Threshold checking (e.g., heart rate < safe limit)  
- Publishing emergency alerts  
- Sending data to the dashboard  
- Automation logic for the entire system  

### 4. Real-Time Dashboard
Displays essential patient data:

- Live heart rate display  
- Air quality status  
- Alerts and critical messages  

Useful for nurses’ stations or remote monitoring.

---

## ⚠️ Alerting Logic

The system raises alerts when:

- Heart rate drops below the safe threshold  
- Air quality enters a hazardous level  
- Rapid fluctuations in vital signs occur  

Alerts can be sent to:

- Nursing station  
- Reception  
- MQTT alert topic  
- Additional notification systems (expandable)

---

## 🛠️ Technologies Used

| Technology | Purpose |
|-----------|---------|
| Node-RED | Workflow automation and dashboard |
| MQTT | Lightweight communication protocol |
| Mosquitto / HiveMQ | MQTT Broker |
| IoT Sensors (Simulated) | Heart rate, AQI values |
| JavaScript (Node-RED functions) | Threshold logic |

---

## 📁 MQTT Topics Used

hospital/patient1/heartrate
hospital/patient1/airquality
hospital/patient1/alert
hospital/notifications

## 💡 Real-World Applications

- Post-surgery patient monitoring  
- Elderly care monitoring  
- ICU automated systems  
- Smart hospital automation  
- Remote patient surveillance  

---

## 📝 License

This project is open-source under the **MIT License**.
