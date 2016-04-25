void setup() {
	Serial.begin(9600);
}

void loop() {
	int sensorValue = analogRead(A0);
	float value = (sensorValue / 1023.0 ) * 5;
	Serial.println(value);
	delay(1);
}
