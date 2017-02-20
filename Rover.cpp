#include "Rover.h"
#include "Arduino.h"


Rover::Rover(int pin){

    for(boardPins = 3; boardPins < 13; boardPins ++){
        digitalWrite(boardPins, LOW);
        pinMode(boardPins, OUTPUT);
    }

    sensorPin = pin;
}


int Rover::irDistance(){                                    //Calculate distance.

    int distance = 0;
    long ADC_result;

    if(sensorPin < 0 || sensorPin > 5){
        Serial.println("Wrong distance pin");
        return -1;
    }

    ADC_result = analogRead(sensorPin);
    ADC_result = ADC_result * 500/1023;     

    if(ADC_result == 0){
        ADC_result = 1;                                     //Prevents division by zero.
    }

    ADC_result = 3200 / ADC_result - 3;                    //Distance formula. Converts V -> Cm.
    distance = (int)ADC_result;

    return distance;
}