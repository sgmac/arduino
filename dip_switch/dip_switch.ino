int pos3;
int pos2;
int pos1;
int pos0;


void setup() {
	// put your setup code here, to run once:

	pinMode(pos3, INPUT);
	pinMode(pos2, INPUT);
	pinMode(pos1, INPUT);
	pinMode(pos0, INPUT);

	Serial.begin(9600);
}

void loop() {
	// put your main code here, to run repeatedly:
	int dip3 = digitalRead(pos3);
	int dip2 = digitalRead(pos2);
	int dip1 = digitalRead(pos1);
	int dip0 = digitalRead(pos0);

	Serial.print(dip3);
}
