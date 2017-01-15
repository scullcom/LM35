#include "LM35.h"

// constructor
LM35::LM35(byte lm35Address){
  analogReference(INTERNAL);
  _address = lm35Address;
}

int LM35::read(){
  return analogRead(_address);
}

float LM35::celsius(){
  return read() / 9.31;
}

float LM35::fahrenhiet(){
  return celsius() * 1.8 + 32;
}

float LM35::kelvin(){
  return celsius() + 273.15;
}
