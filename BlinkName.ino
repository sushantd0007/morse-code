// Name: Sushant Dudeja
// Roll Number: 2110994842
// Task 2.1

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

}

void dot() {   //Method to blink a short burst of light to represent a dot
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}

void dash() {   //Method to blink a long burst of light to represent a dash
  digitalWrite(LED_BUILTIN, HIGH);
  delay(900);
  digitalWrite(LED_BUILTIN, LOW);
  delay(900);
}

void loop() {
  //Writing the word "S U S H A N T " in morse code

//  S
  dot();
  dot();
  dot();
  delay(900);
//  U
    dot();
    dot();
    dash();
  delay(900);    
//  S
  dot();
  dot();
  dot();
  delay(900);
//  H
  dot();
  dot();
  dot();
  dot();
    delay(900);
//  A
  dot();
  dash();
    delay(900);
//  N
  dash();
  dot();

    delay(900);
//  T
  dash();
    delay(900);
}
