
const int Led = 6;
const int Pot = A2;


void setup() {
	pinMode(Led, OUTPUT);

}

void loop() {
	int ValorPot = analogRead(Pot);
	analogWrite(Led, ValorPot);
}
