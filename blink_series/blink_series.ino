/*
 * blink_series.ino
 * 
 * ATtiny85 Project
 * Blinks all outputs in a series from pin 0 to 4
 * 
 * 12.28.2016
 * Mckenna Cisler
 * White Mountain Science, Inc.
 */

const int NUM_PINS = 5;
const long BLINK_TIME = 400; // ms; duration light is on for
const long RESET_TIME = 0; // ms; duration to wait before looping again

void setup() {
  for (int i = 0; i < NUM_PINS; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < NUM_PINS; i++) {    
    digitalWrite(i, HIGH);
    delay(BLINK_TIME);
    digitalWrite(i, LOW);
  }   

  // shut off all pins to reset
//  for (int i = 0; i < NUM_PINS; i++) {    
//    digitalWrite(i, LOW);
//  }

  delay(RESET_TIME);
}
