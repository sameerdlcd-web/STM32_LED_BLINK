# STM32 User LED Blink

## 📌 Overview

This is my first STM32 bare-metal project using the **STM32 Nucleo-F401RE** development board.

The objective of this project was to understand how a microcontroller controls a GPIO peripheral at the register level and to make the onboard user LED blink using **Embedded C**.

I implemented the GPIO configuration without using HAL GPIO functions.

## 🎯 Objectives

* Understand the STM32 GPIO peripheral.
* Enable the GPIO peripheral clock using RCC.
* Configure a GPIO pin as an output.
* Control the GPIO output using registers.
* Understand register addresses, offsets, bit masks, and bit shifting.
* Implement a simple software delay.

## ⚙️ Implementation

### 1. Enable GPIO Clock

Before accessing the GPIO peripheral, its peripheral clock must be enabled through the **RCC (Reset and Clock Control)** registers.

### 2. Configure GPIO

The GPIO pin connected to the user LED is configured as a digital output through the GPIO mode register.

The required GPIO registers are accessed directly instead of using high-level HAL functions.

### 3. Control the LED

The GPIO output register is modified to change the state of the LED.

Bit masking and bit shifting are used to modify the required bits without unintentionally changing other bits in the register.

## 🧠 What I Learned

This project helped me understand the basic relationship between the microcontroller's memory-mapped registers and its peripherals.

The main concepts I worked with were:

              LED
               |
               |
              RCC
               |
               |
            GPIOA MODER
               |
               |
            GPIOA ODR
This is the flow of how led blinks.
The microcontroller first enables the RCC engine,then mode is set to output mode and finally the output register is made high to blink the LED.

More importantly, I learned how to approach a peripheral by looking at the **STM32 reference manual and datasheet** instead of treating the microcontroller as a black box.

## 📸 Result

The onboard user LED successfully blinks on the STM32 Nucleo-F401RE.

<img width="1600" height="1200" alt="WhatsApp Image 2026-08-22 at 10 24 40" src="https://github.com/user-attachments/assets/0af55535-9668-4574-88bd-448e299778d9" />




**Status:** ✅ Completed
