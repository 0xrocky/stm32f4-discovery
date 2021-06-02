# Interrupt

## Three exercises for managing an interrupt on EXTI0 (blue button)

The following examples show how to use interrupts to toggle a LED every time we press the user-programmable blue button, which is connected to the PA0 pin:
1. bare-metal programming
2. using the ST HAL
3. using CubeMX

## Exercise on nested interrupts (EXTI0 & EXTI1)

## Prepare a platform with three interrupt sources (I1, I2, I3) each connected to a LED. Write the corresponding interrupt response handlers such that:
* upon detection of an interrupt signal Ix, 1<= x <= 3, a timer is started
* if within a predetermined time period T no other interrupt signal is received the LDx is switched on
* if other interrupts are detected within the predetermined term, all the LEDs corresponding to the interrupts detected will be switched on simultaneously at the end of T
