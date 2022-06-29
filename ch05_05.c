//
//  ch05_05.c
//
#include <stdio.h>

void printArray(int arr[4]) {
    int i;

    for(i=0; i < 4; i++)
        printf("arr[%d] = %d\n", i, *(arr+i));
}

void printPointer(int *arr, int arrSize) {
    int i;

    for(i=0; i < arrSize; i++)
        printf("*(arr+%d) = %d\n", i, *(arr+i));
}

int main() {
    int i;
    int array[4] = {1, 2, 3, 4};
    
    for(i=0; i < 4; i++)
        array[i] = i * 2;
    printArray(array);
    printf("\n");
    printPointer(array, 4);
    return 0;
}