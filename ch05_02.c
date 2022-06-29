//
//  ch05_02.c
//
#include <stdio.h>

int main() {
    int var = 168;
    int *pointer;
    
    pointer = &var;
    printf("var value = %d\nvar Address = %p\n", var, &var);
    printf("pointer value = %p\npointer address = %p\n*pointer = %d", 
        pointer, &pointer, *pointer);
    return 0;
}