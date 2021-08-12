/**
   -->  CURSO BASICO DE ARDUINO CON GROVE BEGINNER KIT <--
   -->                MATERIAL DE APOYO                <--

   Potenciado por:

   Geek Factory - "Dale vuelo a tus proyectos"
   www.geekfactory.mx

   Didaktikos - "Super Creativos"
   www.didaktikos.com.mx

   CONSULTA EL ARCHIVO LICENCIA.TXT PARA CONOCER MÁS SOBRE LOS DERECHOS DE DISTRIBUCIÓN DE ESTE
   MATERIAL. PUBLICADO BAJO LICENCIA ATTRIBUTION-NONCOMMERCIAL-SHAREALIKE 4.0 INTERNATIONAL
   (CC BY-NC-SA 4.0).

   LECCIÓN 3: secuencia

   Realización de una secuencia de LEDs al gusto de cada estudiante. Se utilizan las funciones
   digitalWrite() y delay() para conseguir vistosos efectos de luces con LED. Este programa
   enciende los LED conectados en los pines en forma ascendente.
*/


// declaramos una variable para guardar el numero de pin en donde tenemos conectado cada LED
const int led1 = 4;
const int led2 = 5;
const int led3 = 6;
const int led4 = 7;
const int led5 = 8;
const int led6 = 9;
const int led7 = 10;
const int led8 = 11;


/**
   Función setup: se ejecuta una vez cuando encendemos el arduino
*/
void setup() {
  // configurar pines como salida
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);

  // deseamos que al iniciar el programa esten apagados todos los LED
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
}

/**
   Función loop: se ejecuta continuamente mientras el arduino permanece encendido
*/
void loop() {

  // encender led 1, esperar 500 milisegundos y luego apagarlo
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);

  // encender led 2, esperar 500 milisegundos y luego apagarlo
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);

  // encender led 3, esperar 500 milisegundos y luego apagarlo
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led3, LOW);

  // encender led 4, esperar 500 milisegundos y luego apagarlo
  digitalWrite(led4, HIGH);
  delay(500);
  digitalWrite(led4, LOW);

  // encender led 5, esperar 500 milisegundos y luego apagarlo
  digitalWrite(led5, HIGH);
  delay(500);
  digitalWrite(led5, LOW);

  // encender led 6, esperar 500 milisegundos y luego apagarlo
  digitalWrite(led6, HIGH);
  delay(500);
  digitalWrite(led6, LOW);

  // encender led 7, esperar 500 milisegundos y luego apagarlo
  digitalWrite(led7, HIGH);
  delay(500);
  digitalWrite(led7, LOW);

  // encender led 8, esperar 500 milisegundos y luego apagarlo
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);

}
