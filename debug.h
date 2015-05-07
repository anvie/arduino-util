#ifndef __DEBUG_H__
#define __DEBUG_H__

#ifndef IS_DEBUG
    #define IS_DEBUG        1
#endif

#if IS_DEBUG
#define DMSG(msg)       Serial.print(msg)
#define DMSG_STR(msg)   Serial.println(msg)
#define DMSG_HEX(n)     MSGPRINT_HEX(n); Serial.print(' '); Serial.print(n, HEX)
#else
#define DMSG(msg)
#define DMSG_STR(msg)
#define DMSG_HEX(n)
#endif

#define MSGERROR(msg) Serial.print("ERROR: ");Serial.print(msg)
#define MSGPRINT(msg) Serial.print(msg)
#define MSGPRINT_HEX(n) printHex(n)
#define MSGPRINT_DEC(n) Serial.print(n, DEC)
#define NL Serial.print("\n")

void printHex(uint8_t num);

#endif // __DEBUG_H__
