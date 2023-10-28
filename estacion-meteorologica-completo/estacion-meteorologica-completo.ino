/**
   -->  CURSO BASICO DE ARDUINO CON GROVE BEGINNER KIT <--
   -->                MATERIAL DE APOYO                <--

   Potenciado por:

   Geek Factory - "Dale vuelo a tus proyectos"
   www.geekfactory.mx

   CONSULTA EL ARCHIVO LICENCIA.TXT PARA CONOCER MÁS SOBRE LOS DERECHOS DE DISTRIBUCIÓN DE ESTE
   MATERIAL. PUBLICADO BAJO LICENCIA ATTRIBUTION-NONCOMMERCIAL-SHAREALIKE 4.0 INTERNATIONAL
   (CC BY-NC-SA 4.0).

   LECCIÓN 6: Estación metereológica programa completo

   Este programa configura la interfaz serial del Arduino y envía un mensaje a través de esta
   para visualizarlo en el monitor serial. Este programa nos muestra las operaciones básicas en
   el puerto serie.
*/
#include <DHT.h>
#include <Adafruit_BMP280.h>

const int pinSensorHumedad = 4;

/**
 * Objeto para el sensor de presión barométrica y sensor de temperatura
 */
Adafruit_BMP280 barometro;

/**
 * Objeto para sensor de humedad y temperatura DHT11
 * El primer parámetro indica el pin donde se conecta el sensor
 * El segundo parámetro es el tipo de sensor (DHT11, DHT22, etc.)
 */
DHT higrometro(pinSensorHumedad, DHT11);

/**
 * Variables de tipo float para almacenar la lectura de los sensores
 */
float presion = 0, temperatura = 0, humedad = 0;

void setup() {
  Serial.begin(9600);
  Serial.println(F("-->  CURSO BASICO DE ARDUINO CON GROVE BEGINNER KIT <--"));
  Serial.println(F("-->         PROGRAMA ESTACIÓN METEOROLÓGICA         <--"));

  // preparar el sensor DHT11 para su uso
  higrometro.begin();

  // preparar el sensor BMP280 para su uso
  if (!barometro.begin()) {
    Serial.println(F("Error: No se detecta sensor BMP280"));
    while (1)
      ;
  }
}

void loop() {
  // esperar dos segundos para actualizar las mediciones
  delay(2000);

  // leer el sensor de temperatura (BMP280)
  temperatura = barometro.readTemperature();
  // leer la presión atmosferica (BMP280)
  presion = barometro.readPressure();
  // leer la humedad relativa (DHT11)
  humedad = higrometro.readHumidity();
}
