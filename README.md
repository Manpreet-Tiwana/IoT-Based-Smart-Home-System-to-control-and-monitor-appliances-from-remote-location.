### Project Title: IoT-Based Smart Energy Saver for Rooms

### 🔸 Description
This project is an IoT-based automation system designed to reduce electricity wastage by automatically controlling electrical appliances like lights and fans based on human presence. The system uses a PIR motion sensor to detect movement and operates appliances through a relay module connected to a NodeMCU (ESP8266). When motion is detected, the light and fan automatically turn ON, and when no motion is detected for a specific time, both turn OFF automatically. This ensures efficient energy use and helps in home or office automation setups.
### 🔸 Objectives
* To automatically control electrical appliances based on room occupancy.
* To minimize electricity wastage by turning off unused devices.
* To design a low-cost and energy-efficient IoT system using NodeMCU.
### 🔸 Components Used

* NodeMCU ESP8266 microcontroller
* PIR motion sensor (HC-SR501)
* 2-channel relay module (5V)
* LED (represents room light)
* 12V DC fan
* 620-ohm resistor
* Breadboard and jumper wires
* 12V adapter and USB power supply

### 🔸 Circuit Description

* The PIR sensor detects motion and sends a signal to the NodeMCU through the D2 pin.
* The NodeMCU controls two relays — one for the LED light and one for the fan.
* IN1 and IN2 of the relay module are connected to D5 and D6 of the NodeMCU respectively.
* The relay module receives power from the 5V (Vin) pin of NodeMCU and is grounded properly.
* The LED is connected to the first relay’s normally open (NO1) and common (COM1) terminals.
* The fan is connected to the second relay’s normally open (NO2) and common (COM2) terminals, powered through a 12V adapter.
* When motion is detected, the NodeMCU activates the relays to switch ON the LED and fan. When no motion is detected for a set time (e.g., 10 seconds), both are turned OFF automatically.

### 🔸 Working Principle

1. The PIR sensor continuously monitors the area for motion.
2. When a person enters the room, the PIR sensor output goes HIGH.
3. The NodeMCU receives this signal and energizes the relay module.
4. The relay closes the circuit to power ON the LED and fan.
5. If no motion is detected for a predefined period, the NodeMCU turns OFF both appliances by deactivating the relays.

### 🔸 Learning Outcomes

* Understand working of IoT components like NodeMCU and PIR sensor.
* Learn how to control electrical appliances using a relay module.
* Understand automation logic for smart energy saving.
* Gain practical knowledge in circuit designing and hardware interfacing.
* Implement basic coding for home automation and energy optimization.

### 🔸 Future Enhancements

* Add temperature and humidity sensors (like DHT11) for fan speed control.
* Integrate the system with IoT cloud platforms like Blynk or ThingSpeak.
* Include manual control through a smartphone app or web interface.
* Expand the setup for multiple rooms or smart buildings.


