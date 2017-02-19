/*
  Rover.h - Library for HKN KD Rover - 
  This library will create an object that
  reads IR sensor input and converts it to 
  a distance value.
  Copyright (c) 2017 Kevin Baza-Gonzalez.  All right reserved.
*/

#ifndef Rover_h
#define Rover_h

#include "Arduino.h"

class Rover 
{
    public:
        Rover(int);
        int irDistance();

    private:
        int sensorPin;
        int boardPins;
};

#endif
