
onst int Boton1 = 4;
const int Boton2 = 3;

const int EN = 5;
const int MotorA = 7;
const int MotorB = 8;

void setup() {
	// put your setup code here, to run once:
	pinMode(MotorA, OUTPUT);
	pinMode(MotorB, OUTPUT);

	pinMode(EN, OUTPUT);
	pinMode(Boton1, OUTPUT);
	pinMode(Boton2, OUTPUT);
}

void loop() {
	// put your main code here, to run repeatedly:
	int EstadoBoton1 = digitalRead(Boton1);
	int EstadoBoton2 = digitalRead(Boton2);

	analogWrite(EN, 120);
	if(EstadoBoton1 ==  1  && EstadoBoton2 == 0) {
		digitalWrite(MotorA, HIGH);
		digitalWrite(MotorB, LOW);
	}


	if(EstadoBoton2 ==  1 && EstadoBoton1 == 0) {
		digitalWrite(MotorA, HIGH);
		digitalWrite(MotorB, LOW);
	} else {
		digitalWrite(MotorA, LOW);
		digitalWrite(MotorB, LOW);
	}


}
