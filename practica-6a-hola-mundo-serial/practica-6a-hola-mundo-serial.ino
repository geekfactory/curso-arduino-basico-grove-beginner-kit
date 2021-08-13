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

// declaramos algunas variables para imprimir sus valores
int varint = 33;
float varfloat = 3.1416;
char varchar = 'X';
char varstr[] = "Hola Mundo";

/**
   Función setup: se ejecuta una vez cuando encendemos el arduino
*/
void setup() {
  // iniciamos el puerto serie e indicamos la velocidad de la comunicación
  Serial.begin(9600);

  // mostrar el mensaje en el puerto serie
  Serial.println("-->  CURSO BASICO DE ARDUINO CON GROVE BEGINNER KIT <--");
  Serial.println("-->              PROGRAMA HOLA MUNDO                <--");
  Serial.println();

  // probamos a mandar mas texto con print y println
  Serial.print("Esto comienza una linea de texto... ");
  Serial.print("segimos en la misma... ");
  Serial.println("terminamos la linea de texto");
  Serial.println("Ahora estamos en una nueva linea");
  Serial.println();

  // prueba de impresión de variables
  Serial.println("Ahora probemos a imprimir el valor de algunas variables:");
  Serial.println(varint);
  Serial.println(varfloat);
  Serial.println(varchar);
  Serial.println(varstr);
}


/**
   Función loop: se ejecuta continuamente mientras el arduino permanece encendido
*/
void loop() {

  // en este caso la función loop permanece vacía, solo se transmite el
  // mensaje al inicio y luego el Arduino permanece inactivo
}
