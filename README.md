# LED Dimmer with Button Modes

An Arduino project where a button cycles an LED through three modes, with two potentiometers independently controlling brightness and blink speed.

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
- 220R resistor
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

## Notes
- Pot outer legs connect to 5V and GND rails
- 10K resistor from pin 2 to GND as pull-down
- If breadboard is 830 holes, bridge the power rail gap with a jumper