# ADC and Temperature Sensor

Program that acquires data from the built-in temperature sensor using interrupts and:
* if the detected temperature exceeds 28° C activates the red LED
* if the temperature drops below 18° C the blue LED lights up
* for intermediate temperatures the green LED stays on

The program also calculates the time taken by the interrupt response routine generated by the ADC circuit.
