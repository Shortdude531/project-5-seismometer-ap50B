
#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_CircuitPlayground.h>

//set a sensor value global variable
int sensor_value = 0;

//intiate connection/begin serial connection
void setup() {
  // put your setup code here, to run once:
pinMode(A2,INPUT);
Serial.begin(9600);
}

void loop() {

 //read voltage of output from op-amp
 sensor_value = analogRead(A2);


//get rid of noise by setting low inputs to zero
    if (sensor_value <= 8) {
        sensor_value = 0;
        Serial.println(sensor_value);
      }
    else {
        Serial.println(sensor_value);
      }
 }

 
