//
//  ch05_01.c
//
#include <stdio.h>

int main() {
    int var = 168;
    
    printf("var value = %d\nAddress of var = %p\n", var, &var);
    return 0;
}

RUN
var value = 168
Address of var = 0x7ffe65c49444