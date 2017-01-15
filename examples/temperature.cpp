#include "Arduino.h"
// include the LM35 library
#include "LM35.h"

// the analog pin that will read the data from the LM35
const byte LM35_ADDRESS = A0;
// create an instance of the LM35 class
LM35 tempSensor = LM35(LM35_ADDRESS);

void setup()
{
  // Setup the serial port for debugging
  Serial.begin(9600);

}

void loop()
{
  // print the raw reading
  Serial.print(tempSensor.read());
  Serial.println("RAW");
  // print the temperature in celsius
  Serial.print(tempSensor.celsius());
  Serial.println("C");
  // print the temperature in fahrenhiet
  Serial.print(tempSensor.fahrenhiet());
  Serial.println("F");
  // print the temperature in kelvin
  Serial.print(tempSensor.kelvin());
  Serial.println("K");
  // wait for 2 seconds (for ease of reading the Serial Monitor)
  delay(2000);
}
