
int led_pinR = 14;
int led_pinB = 12;
void setup() {
  //Declaring LED pin as output
  pinMode(led_pinR, OUTPUT);
  pinMode(led_pinB, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //analogWrite(led_pinR, 1023); //leds constant op vol vermogen
  //analogWrite(led_pinB, 1023);
  
   for(int i=0; i<=1023; i=i+3) {
    analogWrite(led_pinR, i);  // fade in first LED
    analogWrite(led_pinB, 1023-i); // fade out second LED
    delay(1);
  }
  for(int i=1023; i>=0; i=i-3) {
    analogWrite(led_pinR, i);  // fade out first LED
    analogWrite(led_pinB, 1023-i); // fade in second LED
    delay(1);
  }
}
