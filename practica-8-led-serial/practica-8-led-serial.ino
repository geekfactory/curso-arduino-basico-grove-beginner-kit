/**
   -->  CURSO BASICO DE ARDUINO CON GROVE BEGINNER KIT <--
   -->                MATERIAL DE APOYO                <--

   Potenciado por:

   Geek Factory - "Dale vuelo a tus proyectos"
   www.geekfactory.mx

   CONSULTA EL ARCHIVO LICENCIA.TXT PARA CONOCER MÁS SOBRE LOS DERECHOS DE DISTRIBUCIÓN DE ESTE
   MATERIAL. PUBLICADO BAJO LICENCIA ATTRIBUTION-NONCOMMERCIAL-SHAREALIKE 4.0 INTERNATIONAL
   (CC BY-NC-SA 4.0).

   PRÁCTICA 8: LED Serial

   Este programa permite controlar el encendido de un LED desde la computadora usando "comandos"
   enviados a través del puerto serial del Arduino. En este caso utilizaremos la letra 'A'
   (mayúscula) para encender un LED en el puerto 4 y la letra 'a' (minuscula) para apagar el LED
*/

// declaramos una variable para guardar el numero de pin al que esta conectado el LED
const int ledpin = 4;

char comando = 0;

/**
   Función setup: se ejecuta una vez cuando encendemos el arduino
*/
void setup() {
  // Preparar la comunicación a través del puerto serie
  Serial.begin(9600);

  // Enviar un mensaje inicial
  Serial.println(F("-->  CURSO BASICO DE ARDUINO CON GROVE BEGINNER KIT <--"));
  Serial.println(F("-->              PROGRAMA LED SERIAL                <--"));
  Serial.println();
}

/**
   Función loop: se ejecuta continuamente mientras el arduino permanece encendido
*/
void loop() {

  // Revisamos si hay datos desde la PC listos para ser procesados
  if (Serial.available())
  {
    // Si hay datos, procesamos el caracter que nos indica lo que debemos hacer con el LEDw

    // leemos el ultimo byte recibido por el puerto serie
    comando = Serial.read();

    // procesamos el comando, si es la letra A mayuscula encendemos el LED
    if (comando == 'A')
    {
      // Escribimos al puerto un estado alto
      digitalWrite(HIGH, ledpin);
    }
    // si es la letra a minuscula, apagamos el LED
    else if (comando == 'a')
    {
      // Escribimos al puerto un estado bajo
      digitalWrite(LOW, ledpin);
    }
  }

}
