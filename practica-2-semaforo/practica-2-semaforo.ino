/**
   -->  CURSO BASICO DE ARDUINO CON GROVE BEGINNER KIT <--
   -->                MATERIAL DE APOYO                <--

   Potenciado por:

   Geek Factory - "Dale vuelo a tus proyectos"
   www.geekfactory.mx

   CONSULTA EL ARCHIVO LICENCIA.TXT PARA CONOCER MÁS SOBRE LOS DERECHOS DE DISTRIBUCIÓN DE ESTE
   MATERIAL. PUBLICADO BAJO LICENCIA ATTRIBUTION-NONCOMMERCIAL-SHAREALIKE 4.0 INTERNATIONAL
   (CC BY-NC-SA 4.0).

   PRACTICA 2: Semaforo

   Simulación de un semáforo. Se encienden 3 leds en secuencia tal cual ocurre en un semáforo en la
   calle. Se utilizan las instrucciones básicas de configuración de puertos y control de salidas así
   como las instrucciones de retardos (delay).
*/


// declaramos una variable para guardar el numero de pin en donde tenemos conectado cada LED
const int ledverde = 11;
const int ledamarillo = 12;
const int ledrojo = 13;


/**
   Función setup: se ejecuta una vez cuando encendemos el arduino
*/
void setup() {
  // configurar pines donde se conectan los LED como salidas
  pinMode(ledverde, OUTPUT);
  pinMode(ledamarillo, OUTPUT);
  pinMode(ledrojo, OUTPUT);

  // deseamos que al iniciar el programa esten apagados todos los LED
  digitalWrite(ledverde, LOW);
  digitalWrite(ledamarillo, LOW);
  digitalWrite(ledrojo, LOW);
}

/**
   Función loop: se ejecuta continuamente mientras el arduino permanece encendido
*/
void loop() {
  // Encender LED verde 5 segundos
  digitalWrite(ledverde, HIGH);
  delay(5000);

  // Parpadea 3 veces el LED verde
  digitalWrite(ledverde, LOW);
  delay(500);
  digitalWrite(ledverde, HIGH);
  delay(500);
  digitalWrite(ledverde, LOW);
  delay(500);
  digitalWrite(ledverde, HIGH);
  delay(500);
  digitalWrite(ledverde, LOW);
  delay(500);
  digitalWrite(ledverde, HIGH);
  delay(500);
  digitalWrite(ledverde, LOW);

  // Encender LED amarillo 2 segundos y luego apagarlo
  digitalWrite(ledamarillo, HIGH);
  delay(2000);
  digitalWrite(ledamarillo, LOW);

  // Encender LED rojo 5 segundos y luego apagarlo
  digitalWrite(ledrojo, HIGH);
  delay(5000);
  digitalWrite(ledrojo, LOW);
}
