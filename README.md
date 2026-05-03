# LED Dimmer with Button Modes

An Arduino project where a button cycles an LED through three modes, with two potentiometers independently controlling brightness and blink speed. Current mode is shown on a 7-segment display.

## Modes
- **Mode 0:** LED off
- **Mode 1:** LED on, brightness controlled by potentiometer
- **Mode 2:** LED blinking, speed and brightness both controlled by potentiometers

## Controls
- **Tap button:** cycle through modes
- **Hold button (500ms+):** jump directly to blink mode
- **Potentiometer 1:** brightness (modes 1 and 2)
- **Potentiometer 2:** blink speed 50ms–1000ms (mode 2)

## Components
- Arduino Uno
- LED
- 7-segment display (5161AS)
- 220R resistor x2
- 10K resistor
- Tactile button
- 2x potentiometer

## Wiring
| Component | Arduino Pin |
|---|---|
| LED | 9 (PWM) |
| Button | 2 |
| Brightness pot (wiper) | A0 |
| Blink speed pot (wiper) | A1 |
| 7-seg a | 3 |
| 7-seg b | 4 |
| 7-seg c | 5 |
| 7-seg d | 6 |
| 7-seg e | 7 |
| 7-seg f | 8 |
| 7-seg g | 10 |
| 7-seg common | 220R → GND |