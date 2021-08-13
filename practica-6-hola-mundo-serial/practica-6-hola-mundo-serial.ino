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

   LECCIÓN 6: hola-mundo-serial

   Este programa configura la interfaz serial del Arduino y envía un mensaje a través de esta
   para visualizarlo en el monitor serial. Este programa nos muestra las operaciones básicas en
   el puerto serie.
*/

/**
   Función setup: se ejecuta una vez cuando encendemos el arduino
*/
void setup() {
  // iniciamos el puerto serie e indicamos la velocidad de la comunicación
  Serial.begin(9600);

  // mostrar el mensaje en el puerto serie
  Serial.println("-->  CURSO BASICO DE ARDUINO CON GROVE BEGINNER KIT <--");
  Serial.println("-->              PROGRAMA HOLA MUNDO                <--");
}


/**
   Función loop: se ejecuta continuamente mientras el arduino permanece encendido
*/
void loop() {

  // en este caso la función loop permanece vacía, solo se transmite el
  // mensaje al inicio y luego el Arduino permanece inactivo
}
