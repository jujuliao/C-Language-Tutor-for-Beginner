//
//  ch05_03.c
//
#include <stdio.h>

int main() {
    int var = 168;
    int *pointer;
    
    pointer = &var;
    var = 100;
    *pointer = 861;
    printf("var = %d\n&var = %p\npointer = %p\n&pointer = %p\n*pointer = %d\n", 
        var, &var, pointer, &pointer, *pointer);
    return 0;
}