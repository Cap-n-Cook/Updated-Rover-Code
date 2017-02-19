#include <RoverClassTest.h>

RoverClassTest distanceSensor(0);                                  //Connect sensor to analog pin.
int distanceToPayload;

void setup() {

  Serial.begin(9600);

}

void loop() {
  //distanceToPayload = distanceSensor.distanceTestOne();
  //distanceToPayload = distanceSensor.distanceTestTwo();
  //distanceToPayload = distanceSensor.distanceTestThree();
  Serial.println(distanceToPayload);

}
