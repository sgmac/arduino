
int led_R = 11;  
int led_G = 10;
int led_B = 9;
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

void setup() {
  pinMode(led_R, OUTPUT);
  pinMode(led_G, OUTPUT);
  pinMode(led_B, OUTPUT);
}

void loop() {
  analogWrite(led_R,120);
  analogWrite(led_G,120);
  analogWrite(led_B,120);
}

