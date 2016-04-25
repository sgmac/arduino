/* 
 * Turns lights one from left to right and then
 * comes back.
 */

void setup() {
	pinMode(13, OUTPUT);
	pinMode(12, OUTPUT);
	pinMode(11, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(8, OUTPUT);
	pinMode(7, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(5, OUTPUT);
}


void loop() {  
	// From left-> right
	for (int i= 13; i>4 ; i--) {
		digitalWrite(i, HIGH);
		delay(100);
		digitalWrite(i, LOW);
	}

	// From right -> left
	for (int i= 5; i<14 ; i++) {
		digitalWrite(i, HIGH);
		delay(100);
		digitalWrite(i, LOW);
	}
}
