# Arduino Course - Day 1

Componente principal es un micro-controlador, dispositivo que reprogramamos, maneja lecturas/salidas.

- 14 pines que pueden configurarse como E/S.
- 6 entradas analogicas. (Tambien puede usarse como digitales, haciendo un total 20, aunque no se suele hacer porque es util contar con los canales analogicos)
- 16Mhz oscilador
- Boton reset (provoca que se vuelva a ejecutar las funciones **setup()/loop()**  )

```
void setup() {
  pinMode(13, OUTPUT);
}
  
void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
```

## Funciones digitales

Tenemos dos estados diferentes, 0/1 (encendido/apagado). En digital no sabemos nada en las mediciones entre 0 y 1.(Rango entre GND y 5V.)

```
int estado;
pinMode(10, INPUT);
estado = digitalRead(10); // Devuelve el estado de ese pin.
```

Anotodo (Positivo)
Catodo (Negativo)


L (es un Led que tienen el Arduino conectado al pin13 digital)
TX
RX

## Circuitos

Los push-button es mejor colocarlos en el centro de la proto-board por comodidad.

Lado Izquierdo esta conectado entre si y el lado derecho con el suyo. Cuando pulsamos conecta el IZQ y DER.

Activa/Alta (Apreto 5V/ Release 0v) 

- Circuito Divisor de Voltaje (Con dos resistencias)
- Resistencia 1k o mas para los push button

Hay que definir el serial para leer
```
// setup
Serial.begin(9600);

// loop 
int pinRead;
int button = digitalRead(pinRead)
Serial.println(button);
```

## Funciones Analog I/O


La funcion "analogRead(pin)" leara voltajes de las entradas analogicas. Son entradas de 10bits (1024 valores diferentes)
PWM: Modulacion por ancho de pulso. Tecnica digital para tener comportamiento similiar a los anologicos.

```
analogWrite(pin, valor); // Solo podemos escribir 8 bits (256 valores)
map(value, from Low, fromHigh, toLow, toHigh)
```


