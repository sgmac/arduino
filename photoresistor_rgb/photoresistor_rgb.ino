

const int Led_R = 11;
const int Led_G = 10;
const int Led_B = 9;


const int TMP = A3;
const int LDR = A1;
const int Pot = A2;

void setup() {
	pinMode(Led_R, OUTPUT);
	pinMode(Led_G, OUTPUT);
	pinMode(Led_B, OUTPUT);

	// Serial
	Serial.begin(9600);

}

void loop() {
	int ValorTMP = analogRead(TMP);
	int ValorLDR = analogRead(LDR);
	int ValorPot = analogRead(Pot);


	Serial.print("ValorTMP: ");
	Serial.print(ValorTMP);
	Serial.println();
	Serial.print("ValorLDR: ");
	Serial.print(ValorLDR);
	Serial.println();
	Serial.print("ValorPot: ");
	Serial.print(ValorPot);
	Serial.println();


	/* As we can read 1024 (10bits) values from analog
 	* inputs but write implies 256 values (8bits) 
        * the map funtion avoids to see the information sent
 	* four times. 
	*/
	int BrilloLed_R = map(ValorTMP, 0, 1023, 0, 255);
	int BrilloLed_G = map(ValorPot, 0, 1023, 0, 255);
	int BrilloLed_B = map(ValorLDR, 0, 1023, 0, 255);

	analogWrite(Led_R, BrilloLed_R);
	analogWrite(Led_G, BrilloLed_G);
	analogWrite(Led_B, BrilloLed_B);


}
