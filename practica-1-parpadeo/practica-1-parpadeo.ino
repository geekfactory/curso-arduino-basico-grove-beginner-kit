/**
   -->  CURSO BASICO DE ARDUINO CON GROVE BEGINNER KIT <--
   -->                MATERIAL DE APOYO                <--

   Potenciado por:

   Geek Factory - "Dale vuelo a tus proyectos"
   www.geekfactory.mx

   CONSULTA EL ARCHIVO LICENCIA.TXT PARA CONOCER MÁS SOBRE LOS DERECHOS DE DISTRIBUCIÓN DE ESTE
   MATERIAL. PUBLICADO BAJO LICENCIA ATTRIBUTION-NONCOMMERCIAL-SHAREALIKE 4.0 INTERNATIONAL
   (CC BY-NC-SA 4.0).

   PRÁCTICA 1: Parpadeo de led

   Este programa hace parpadear el led conectado al pin 4 de la tarjeta grove beginer kit.
   Es el programa más basico que se puede realizar con un microcontrolador.
*/

// declaramos una variable para guardar el numero de pin al que esta conectado el LED
const int ledpin = 4;

// función setup: se ejecuta una vez cuando encendemos el arduino
void setup() {
  // configuramos el pin 4 como salida
  pinMode(ledpin, OUTPUT);
}

// función loop: se ejecuta continuamente mientras el arduino permanece encendido
void loop() {
  // colocamos el pin en estado alto (prendemos LED)
  digitalWrite(ledpin, HIGH);
  // esperamos un segundo
  delay(1000);
  // colocamos el pin en estado bajo (apagamos LED)
  digitalWrite(ledpin, LOW);
  // esperamos un segundo
  delay(1000);
}
