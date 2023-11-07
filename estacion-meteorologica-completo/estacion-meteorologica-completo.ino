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

   Este programa configura los sensores de la tarjeta Grove Beginner Kit y toma las lecturas de
   los sensores ambientales. Posteriormente las lecturas se muestran en la pantalla OLED de la
   tarjeta de desarrollo.
*/
#include <DHT.h>
#include <Adafruit_BMP280.h>
#include <U8x8lib.h>

const int pinSensorHumedad = 3;

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
 * Objeto para realizar la interfaz con la pantalla OLED de 128x16
 * este constructor se utiliza para los módulos genéricos conectados
 * por I2C.
 */
U8X8_SSD1306_128X64_NONAME_HW_I2C oled(U8X8_PIN_NONE);

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

  // inicializar la pantalla OLED
  oled.begin();
  oled.setFlipMode(1);
  oled.setFont(u8x8_font_chroma48medium8_r);
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

  // escribir las mediciones a la pantalla OLED

  // mover el cursor al inicio de la pantalla
  oled.setCursor(0, 0);
  // escribir la leyenda "Temperatura"
  oled.print("Temperatura");
  // mover el cursor a la segunda línea de la pantalla
  oled.setCursor(0, 1);
  // escribir el valor de la variable
  oled.print(temperatura);

  // repetimos el procedimiento con la variable de humedad...
  oled.setCursor(0, 3);
  oled.print("Humedad");
  oled.setCursor(0, 4);
  oled.print(humedad);

  // ...finalmente con la presión atmosférica
  oled.setCursor(0, 6);
  oled.print("Presion");
  oled.setCursor(0, 7);
  oled.print(presion);
}
