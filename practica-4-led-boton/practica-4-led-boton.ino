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

   LECCIÓN 4: led-boton

   Esta programa refleja el estado de una entrada digital (botón) en un pin de salida digital (LED).
   Se lee el pin de entrada digital 6 donde está conectado el botón y si este está oprimido (HIGH) se
   ilumina el LED. Al soltar el botón el LED debe apagarse.

*/
// pin donde esta conectado el boton
int pinboton = 6;
// pin donde esta conectado el LED
int pinled = 4;
// variable para almacenar el estado del botón
int estado = LOW;

/**
   Función setup: se ejecuta una vez cuando encendemos el arduino
*/
void setup() {
  // configurar el pin del botón como entrada
  pinMode(pinboton, INPUT);
  // configurar el pin del LED como salida
  pinMode(pinled, OUTPUT);
}


/**
   Función loop: se ejecuta continuamente mientras el arduino permanece encendido
*/
void loop() {
  // leer el estado del pin de entrada a una variable
  estado = digitalRead(pinboton);

  // evaluamos si el valor de la variable estado es igual a HIGH (alto)
  if (estado == HIGH) {
    // el estado alto significa que se oprimió el botón
    // entonces encendemos el led
    digitalWrite(pinled, HIGH);
  } else {
    // el estado bajo en significa que NO se oprimió el botón
    // entonces apagamos el LED
    digitalWrite(pinled, LOW);
  }
}
