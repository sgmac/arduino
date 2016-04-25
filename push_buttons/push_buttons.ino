
const int Boton = 3;
const int Led = 2;

int EstadoAnterior = 0;

void setup() {
	pinMode(Boton, INPUT);
	pinMode(Led, OUTPUT);
	Serial.begin(9600);
}

void loop() {
	int EstadoDelBoton = digitalRead(Boton);
	digitalWrite(Led, !EstadoDelBoton);  

	if (EstadoAnterior != EstadoDelBoton) {
		if (EstadoDelBoton) {
			Serial.print("Estado del boton:");
			Serial.println(EstadoDelBoton);
		} else {
			Serial.println("No presionado");
		}
		EstadoAnterior = EstadoDelBoton;
		delay(1);
	}

}
