//
//  ch05_06.c
//
#include <stdio.h>

// call by value
void addOne(int var) {
    var += 1;
}

// call by reference
void addOneTo(int* ptr) {
    (*ptr)++;     // adding 1 to *ptr
}

int main()
{
    int var = 10, *pointer;
    
    addOne(var);
    printf("var = %d\n\n", var);

    pointer = &var;
    printf("var = %d\n&var = %p\npointer = %p\n&pointer = %p\n\n", 
        var, &var, pointer, &pointer); 
    addOneTo(pointer);
    printf("var = %d\n", var);
    return 0;
}5.4 配置記憶體 Memory Allocation