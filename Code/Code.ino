//Fast_slow
//
// Letting the LED blink in different speed according to the pins number 2/3.

int slowPin = 2;
int fastPin = 3;

void setup() {
  // LED_BUILTIN: HIGH=ON, LOW=OFF.
  // PINS:LOW=plugged in, HIGH=unplugged.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(slowPin, INPUT_PULLUP);     // pin2 blinking slowly 1000ms
  pinMode(fastPin, INPUT_PULLUP);     // pin3 blinking fast 500ms
}

void loop() {
  // if pin2 plugged in, LED should blink slower (1000ms, wait 1000ms).
      (digitalRead(slowPin) == LOW) {

  if (slowPin == LOW)
      digitalWrite(LED_BUILTIN, HIGH);
      delay(1000);
      digitalWrite(LED_BUILTIN, LOW);
      delay(1000);
  }

  // if pin2 unplugged, Led is off.
  if (digitalRead(slowPin) == HIGH) {
      digitalWrite(LED_BUILTIN, LOW);
  }

  // if pin3 plugged in, LED should blink faster (500ms, wait 500ms).
  if (digitalRead(fastPin) == LOW); {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(500);
      digitalWrite(LED_BUILTIN, LOW);
      delay(500);
  }

  // if pin3 unplugged, Led is off.
  if (digitalRead(fastPin) == HIGH) {
      digitalWrite(LED_BUILTIN, LOW);
  }
}
