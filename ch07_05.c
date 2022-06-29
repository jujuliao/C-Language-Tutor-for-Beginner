//
//  ch07_05.c
//
#include <stdio.h>

union uIntHex {
    char  byte[4];
    int   int4;
};

int main() {
    union uIntHex intHex;
    
    intHex.int4 = 0x12345678;
    printf("0x12345678 byte order = %x %x %x %x\n", 
        intHex.byte[0], intHex.byte[1], intHex.byte[2], intHex.byte[3]);
}