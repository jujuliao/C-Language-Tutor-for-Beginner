//
//  ch05_04.c
//
#include <stdio.h>

int main() {
    int intArray[4] = {0, 4, 8, 12};
    
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("intArray = %p\n", intArray);

    for(int i=0; i<4; i++) {
        printf("intArray[%d] = %d\t&intArray[%d] = %p\tintArray+%d = %p\n", 
            i, intArray[i],
            i, &intArray[i],
            i, intArray+i);
    }
    
    printf("\n");
    long longArray[4] = {0, 8, 16, 24};
    printf("sizeof(long) = %ld\n", sizeof(long));
    printf("longArray = %p\n", longArray);
    for(int i=0; i<4; i++) {
      printf("longArray[%d] = %ld\t&longArray[%d] = %p\tlongArray+%d = %p\n", 
      i, longArray[i],
      i, &longArray[i],
      i, longArray+i);
    }
    
    return 0;
}