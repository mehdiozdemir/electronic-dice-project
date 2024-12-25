# Electronic Dice Project

A dual-display electronic dice using Arduino Uno, featuring LED pattern display and 7-segment display for showing dice values.

## 🛠️ Components Used

- 1x Arduino Uno
- 7x LEDs (for dice pattern)
- 1x 7-segment display
- 1x Push Button
- Resistors (220Ω)
- Jumper Wires
- 1x Breadboard
- 1x CD4511 BCD to 7-segment decoder

## 📋 Features

- Dual dice display system
- Random number generation (1-6)
- LED pattern display for first dice
- 7-segment display for second dice
- Rolling animation effect
- Single button control

## 🎮 Pin Configuration

### LED Pattern Display
- 7 LEDs connected to pins: 2, 3, 8, 4, 7, 6, 5
- Pattern display for first dice value

### 7-Segment Display
- BCD inputs connected to: A5, A4, A3, A2
- Shows second dice value

### Button
- Connected to pin 9
- Controls dice rolling

## 📺 Circuit Diagram

![Ekran görüntüsü 2024-12-26 014034](https://github.com/user-attachments/assets/afc7697d-e849-4fb1-a3c4-ac77d0e48927)


## 💡 Usage

1. Power up the Arduino board
2. Press the button to roll both dice
3. Watch the rolling animation
4. First dice shows result using LED pattern
5. Second dice shows result on 7-segment display
6. Press button again for new roll

## ⚡ How It Works

1. **Button Press**
   - Triggers the rolling sequence
   - Initiates random number generation

2. **Rolling Animation**
   - Random duration (5-10 rolls)
   - Increasing delay between rolls
   - Both displays update simultaneously

3. **Display System**
   - LED Pattern: Shows traditional dice dot pattern
   - 7-Segment: Shows numerical value

## ⚠️ Important Notes

- Ensure correct BCD to 7-segment connections
- Check LED polarity
- Use appropriate current-limiting resistors
- Button requires pull-down resistor
- Power supply should be stable

## 🔧 Assembly Instructions

1. **LED Pattern Setup**
   - Connect LEDs with 220Ω resistors
   - Follow the pin configuration diagram
   - Ensure correct LED orientation

2. **7-Segment Display**
   - Connect BCD decoder inputs
   - Wire display segments correctly
   - Add current-limiting resistors

3. **Button Installation**
   - Add pull-down resistor
   - Connect to pin 9
   - Verify button functionality

## 🔍 Troubleshooting

| Problem | Possible Solution |
|---------|------------------|
| LEDs don't light | Check connections and polarity |
| Display shows wrong number | Verify BCD connections |
| Button not responding | Check pull-down resistor |
| Inconsistent operation | Verify power supply |

## 🔄 Version History

- v1.0 (Initial Release)
  - Basic dual dice functionality
  - LED and 7-segment display implementation
  - Rolling animation

 ## 📝 License

This project is licensed under the MIT License 
