#include <Arduino.h>

#define BAUD 9600
#define MYUBBY ((F_CPU / 16 / BAUD) - 1) // UART Baud Rate Register = ((arduino clock frequency / 16 / baud rate) - 1)

void uart_init(unsigned int ubrr);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Hello, world");
  delay(1000);
}

void uart_init(unsigned int ubrr) {
  UBRR0H = (unsigned char)(ubrr >> 8); // Set high bit ubrr register
  UBRR0L = (unsigned char)ubrr; // Set low bit ubrr register

  // Enable transmitter and receiver
  // (1 << RXEN0) shifts the value of 1 into Receiver enable bit
  // (1 << TXEN0) shifts the value of 1 into Transmitter enable bit
  // | combines both features (sets both bits)
  UCSR0B = (1 << RXEN0) | (1 << TXEN0);

  // TODO: set frame format
}