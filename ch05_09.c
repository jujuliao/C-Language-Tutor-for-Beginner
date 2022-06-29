//
//  ch05_09.c
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, *intPointer;
    
    intPointer = (int *) malloc( sizeof(int) * 3 );
    if( intPointer == NULL ) {
        perror("malloc");
        return -1;
    }

    for(i = 0; i < 3; i++)
        *(intPointer+i) = i * 2;
    for(i = 0; i < 3; i++)
        printf("intPointer+%d = %p\t*(intPointer+%d) = %d\n",
            i, intPointer+i, i, *(intPointer+i));

    printf("\n");
    intPointer = realloc(intPointer, sizeof(int) * 5 );
    for(i = 0; i < 5; i++)
        *(intPointer+i) = i * 10;
    for(i = 0; i < 5; i++)
        printf("intPointer+%d = %p\t*(intPointer+%d) = %d\n",
            i, intPointer+i, i, *(intPointer+i));
    free(intPointer);
    return 0;
}