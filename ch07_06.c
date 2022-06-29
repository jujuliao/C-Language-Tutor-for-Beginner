//
//  ch07_06.c
//
#include <stdio.h>

struct sIntHex {
    char  byte[4];
    int   int4;
};

union uIntHex {
    char  byte[4];
    int   int4;
};

int main() {
    struct sIntHex intHex1;
    union uIntHex intHex2;
    
    printf("sizeof(intHex1) = %ld\n", sizeof(intHex1));
    printf("intHex1 address = %p\n", &intHex1);
    printf("intHex1.byte address = %p\n", intHex1.byte);
    printf("intHex1.int4 address = %p\n\n", &(intHex1.int4));
    
    printf("sizeof(intHex2) = %ld\n", sizeof(intHex2));
    printf("intHex2 address = %p\n", &intHex2);
    printf("intHex2.byte address = %p\n", intHex2.byte);
    printf("intHex2.int4 address = %p\n", &(intHex2.int4));
    
}