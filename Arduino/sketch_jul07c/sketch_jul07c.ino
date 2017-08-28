/*
    Prorotype Code for 1-4MHz PWM 50% Duty Cycle
    ICR1as TOP = crystal / (2*Prescale*Fpwm)    in MODE 9
    
    
    at 16000000MHz   64 Prescale PWM Fmax = 62.5KHz 
    at 16000000MHz    8 Prescale PWM Fmax = 500KHz
    at 16000000MHz    1 Prescale PWM Fmax = 4MHz
    
*/

void setup(){

  pinMode(9, OUTPUT);                              // OCR1A Output
  
  pinMode(10, OUTPUT);                             // TEST Pin 10 as General purpose that can use after Enabling only OCR1A
  digitalWrite(10, LOW);
  delay(1000);
  digitalWrite(10, HIGH);
  
//phase/frequency correct mode. SELECT THIS FOR INVERTED OUTPUTS.

TCCR1A = _BV(COM1A1);                                               // Enable OCR1A none inverting mode
//TCCR1A = _BV(COM1A1) | _BV(COM1B1) ;                              // Enable OCR1A and OCAR1B and none inverting mode
// TCCR1A = _BV(COM1A1) | _BV(COM1B1) | _BV(COM1A0) | _BV(COM1B0);
//TCCR1B = _BV(WGM13) | _BV(CS11);                                  // Set Prescale Clock 8 and Mode 9
TCCR1B = _BV(WGM13) | _BV(CS10);                                    // Set Prescale Clock 1 and Mode 9
}

void loop(){
//ICR minimum 2   F = 16000000MHz  No Change if using 14745600MHz

//make this variable as table
//ICR1 = 10,000;                     // 100Hz w/16MHz Prescale 8
//ICR1 = 5,000;                      // 200Hz w/16MHz Prescale 8
//ICR1 = 2;                          // 500KHz w/16MHz Prescale 8

ICR1 = 2;                            // 4MHz w/ 1600000MHz Prescale 1
OCR1A = ICR1 / 2;                    // 50 Duty of ICR1
}﻿



