//
//  ch05_07.c
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, *intPointer;

    intPointer = (int *) malloc( sizeof(int) * 5 );
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