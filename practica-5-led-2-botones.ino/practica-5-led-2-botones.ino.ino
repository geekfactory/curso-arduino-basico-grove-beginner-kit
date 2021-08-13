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

   LECCIÓN 5: led-2-botones

   Este programa permite encender / apagar un LED usando dos botones. El LED se enciende con un
   boton y se apaga con otro botón. El LED permanecera en el estado correspondiente al ultimo
   boton presionado.
*/

// pin donde esta conectado el boton que enciende el LED
const int btnon = 6;
// pin donde esta conectado el botón que apaga el LED
const int btnoff = 7;
// pin donde se conecta el LED
const int pinled = 4;

// variables para almacenar el estado de los botones
int estaon = LOW;
int estaoff = LOW;

/**
   Función setup: se ejecuta una vez cuando encendemos el arduino
*/
void setup() {
  // configurar los pines de los botones como entradas
  pinMode(btnon, INPUT);
  pinMode(btnoff, INPUT);
  // configurar el pin del LED como salida
  pinMode(pinled, OUTPUT);
}


/**
   Función loop: se ejecuta continuamente mientras el arduino permanece encendido
*/
void loop() {
  // leer el estado de los pines de los botones a variables
  estaon = digitalRead(btnon);
  estaoff = digitalRead(btnoff);

  // se oprimió el botón de encendido?
  if (estaon == HIGH) {
    // entonces encendemos el LED
    digitalWrite(pinled, HIGH);
  }

  // se oprimió el botón de apagado?
  if (estaoff == HIGH) {
    // entonces apagamos el LED
    digitalWrite(pinled, LOW);
  }
}
