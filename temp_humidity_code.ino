/* Example code for AM2320 I2C temperature and humidity sensor with Arduino. More info: www.makerguides.com */

//  Include the required libraries:
#include <Adafruit_Sensor.h>
#include <Adafruit_AM2320.h>

// Create a new instance of the Adafruit_AM2320 class:
Adafruit_AM2320 AM2320 = Adafruit_AM2320();

void setup() {
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);

  // Setup the sensor;
  AM2320.begin();
}

void loop() {
  // Read the temperature and the humidity:
  float tempC = AM2320.readTemperature();
  float humidity = AM2320.readHumidity();

  // Print the temperature and humidity in the Serial Monitor:
  Serial.print("Temperature: ");
  Serial.println(tempC);
  Serial.print("Humidity: ");
  Serial.println(humidity);

  // Wait 2 seconds between readings:
  delay(2000);
}
