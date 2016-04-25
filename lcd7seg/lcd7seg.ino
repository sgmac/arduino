const int pinC = 2;
const int pinE = 3;
const int pinD = 4;
const int pinB = 5;
const int pinA = 6;
const int pinF = 7;
const int pinG = 8;


void setup() {
	// Configure outputs
	pinMode(pinC, OUTPUT);
	pinMode(pinD, OUTPUT);
	pinMode(pinE, OUTPUT);
	pinMode(pinB, OUTPUT);
	pinMode(pinA, OUTPUT);
	pinMode(pinG, OUTPUT);
	pinMode(pinF, OUTPUT);
}

void turnOff() {
	digitalWrite(pinA, LOW);
	digitalWrite(pinB, LOW);
	digitalWrite(pinC, LOW);
	digitalWrite(pinD, LOW);
	digitalWrite(pinE, LOW);
	digitalWrite(pinF, LOW);
	digitalWrite(pinG, LOW);
}

// senNumber prints out the number in the LCD 7 seg
void sendNumber(int number) {
	switch(number){
		case 0:
			digitalWrite(pinA, HIGH);
			digitalWrite(pinB, HIGH);
			digitalWrite(pinC, HIGH);
			digitalWrite(pinD, HIGH);
			digitalWrite(pinE, HIGH);
			digitalWrite(pinF, HIGH);
			digitalWrite(pinG, LOW); 
			break;
		case 1:
			digitalWrite(pinA, LOW);
			digitalWrite(pinB, HIGH);
			digitalWrite(pinC, HIGH);
			digitalWrite(pinD, LOW);
			digitalWrite(pinE, LOW);
			digitalWrite(pinF, LOW);
			digitalWrite(pinG, LOW); 
			break;
		case 2:
			digitalWrite(pinA, HIGH);
			digitalWrite(pinB, HIGH);
			digitalWrite(pinC, LOW);
			digitalWrite(pinD, HIGH);
			digitalWrite(pinE, HIGH);
			digitalWrite(pinF, LOW);
			digitalWrite(pinG, HIGH);
			break;
		case 3:

			digitalWrite(pinA, HIGH);
			digitalWrite(pinB, HIGH);
			digitalWrite(pinC, HIGH);
			digitalWrite(pinD, HIGH);
			digitalWrite(pinE, LOW);
			digitalWrite(pinF, LOW);
			digitalWrite(pinG, HIGH);   
			break;
		case 4:
			digitalWrite(pinA, LOW);
			digitalWrite(pinB, HIGH);
			digitalWrite(pinC, HIGH);
			digitalWrite(pinD, LOW);
			digitalWrite(pinE, LOW);
			digitalWrite(pinF, HIGH);
			digitalWrite(pinG, HIGH); 
			break;
		case 5:
			digitalWrite(pinA, HIGH);
			digitalWrite(pinB, LOW);
			digitalWrite(pinC, HIGH);
			digitalWrite(pinD, HIGH);
			digitalWrite(pinE, LOW);
			digitalWrite(pinF, HIGH);
			digitalWrite(pinG, HIGH);     
			break;
		case 6:
			digitalWrite(pinA, HIGH);
			digitalWrite(pinB, LOW);
			digitalWrite(pinC, HIGH);
			digitalWrite(pinD, HIGH);
			digitalWrite(pinE, HIGH);
			digitalWrite(pinF, HIGH);
			digitalWrite(pinG, HIGH);     
			break;
		case 7:
			digitalWrite(pinA, HIGH);
			digitalWrite(pinB, HIGH);
			digitalWrite(pinC, HIGH);
			digitalWrite(pinD, LOW);
			digitalWrite(pinE, LOW);
			digitalWrite(pinF, LOW);
			digitalWrite(pinG, LOW);     
			break;
		case 8:
			digitalWrite(pinA, HIGH);
			digitalWrite(pinB, HIGH);
			digitalWrite(pinC, HIGH);
			digitalWrite(pinD, HIGH);
			digitalWrite(pinE, HIGH);
			digitalWrite(pinF, HIGH);
			digitalWrite(pinG, HIGH); 
			break;
		case 9:
			digitalWrite(pinA, HIGH);
			digitalWrite(pinB, HIGH);
			digitalWrite(pinC, HIGH);
			digitalWrite(pinD, LOW);
			digitalWrite(pinE, LOW);
			digitalWrite(pinF, HIGH);
			digitalWrite(pinG, HIGH);
			break;
		case 10:
			digitalWrite(pinA, HIGH);
			digitalWrite(pinB, HIGH);
			digitalWrite(pinC, HIGH);
			digitalWrite(pinD, LOW);
			digitalWrite(pinE, HIGH);
			digitalWrite(pinF, HIGH);
			digitalWrite(pinG, HIGH);     
			break;
		case 11:
			digitalWrite(pinA, HIGH);
			digitalWrite(pinB, HIGH);
			digitalWrite(pinC, HIGH);
			digitalWrite(pinD, HIGH);
			digitalWrite(pinE, HIGH);
			digitalWrite(pinF, HIGH);
			digitalWrite(pinG, HIGH); 
			break;
		case 12:
			digitalWrite(pinA, HIGH);
			digitalWrite(pinB, LOW);
			digitalWrite(pinC, LOW);
			digitalWrite(pinD, HIGH);
			digitalWrite(pinE, HIGH);
			digitalWrite(pinF, HIGH);
			digitalWrite(pinG, LOW); 
			break;
		case 13:
			digitalWrite(pinA, HIGH);
			digitalWrite(pinB, HIGH);
			digitalWrite(pinC, HIGH);
			digitalWrite(pinD, HIGH);
			digitalWrite(pinE, HIGH);
			digitalWrite(pinF, HIGH);
			digitalWrite(pinG, LOW); 
			break;
		case 14:
			digitalWrite(pinA, HIGH);
			digitalWrite(pinB, LOW);
			digitalWrite(pinC, LOW);
			digitalWrite(pinD, HIGH);
			digitalWrite(pinE, HIGH);
			digitalWrite(pinF, HIGH);
			digitalWrite(pinG, HIGH); 
			break;
		case 15:
			digitalWrite(pinA, HIGH);
			digitalWrite(pinB, LOW);
			digitalWrite(pinC, LOW);
			digitalWrite(pinD, LOW);
			digitalWrite(pinE, HIGH);
			digitalWrite(pinF, HIGH);
			digitalWrite(pinG, HIGH); 
			break;
	}
}

void loop() {
	for( int n=0; n <= 15; n++){ 
		sendNumber(n);
		delay(1000);
	}
}
