//
//  ch05_08.c
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, *intPointer;

    intPointer = (int *) calloc(5, sizeof(int));
    if( intPointer == NULL ) {
        perror("malloc");
        return -1;
    }

    for(i=0; i < 5; i++)
        intPointer[i] = i * 2;   
    
    for(i=0; i < 5; i++)
        printf("intPointer[%d] = %d\t*(intPointer+%d) = %d\n",
            i, intPointer[i], i, *(intPointer+i));
    
    free(intPointer);
    return 0;
}