# Timer in Input Capture Mode

Application which:

* set up a  GP timer and configure CHx to be input captured on every rising edge of the RCC External Clock Source
* read (via DMA) the CCRx register and save it to variable T1 on the first edge, on second edge read CCR1 and save it to T2. And now, the input signal's period is T2 – T1, and therefore, the frequency is easily calculated from 1/period
* configure USART in Async mode and print the calculated frequency to the serial port terminal
