## What is UART?
Universal Asynchronous Receiver Transmitter (UART) protocal is used for serial communication between two devices. Serial communication is the process of sending one bit at a time over wires. In UART, both devices have  transmitter pin and a receiver pin they use to communicate.

## What is baud rate?
Baud rate is the rate at which the number of signal elements or changes to the signal occurs per second (number of signal elements/total time (in second)). With UART, both devices need to be configured for the same baud rate in order to communicate.

## Data format
UART data is transmitted as packets. Each packet contains a start bit, 5-9 data bits, an optional parity bit, and 1-2 stop bits.