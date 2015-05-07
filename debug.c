#include <Arduino.h>

void printHex(uint8_t num){
  char tmp[16];
  sprintf(tmp, "0x%02X", num);
  MSGPRINT(tmp);
}

