#ifndef LM35_h
#define LM35_h

#include <Arduino.h>

class LM35 {
  public:
    LM35(byte lm35Address);
    float celsius();
    float fahrenhiet();
    float kelvin();
    int read();

  private:
    byte _address;

};
#endif
