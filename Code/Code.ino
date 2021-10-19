//Fast_slow
//
// Letting the LED blink faster/slower in speed according to the volume.

  // variables 
// pin numbers
int pin2=2;
int pin3=3;

int volume=100;       // speed increase/decrease
int blinkingT=1000; // blinking Time

void setup() {
  // LED_BUILTIN: HIGH=ON, LOW=OFF.
  // PINS:LOW=plugged in, HIGH=unplugged.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(pin2, INPUT_PULLUP);     // pin2 blinking slowly.
  pinMode(pin3, INPUT_PULLUP);     // pin3 blinking fast.
} 

void loop() {
    // blinking function
    digitalWrite(LED_BUILTIN, HIGH);
    delay(blinkingT);
    digitalWrite(LED_BUILTIN, LOW);
    delay(blinkingT);
    
  // Pin2 slow
  // if pin2 plugged in then the delay/wait time will increase.
    if (digitalRead(pin2) == LOW) {
    blinkingT=blinkingT+volume;
  }
  // Pin3 fast
  // if pin3 plugged in then the delay/wait time will decrease.
    if (digitalRead(pin3) == LOW) {
    blinkingT=blinkingT-volume;
  }
}
