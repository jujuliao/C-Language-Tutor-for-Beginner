//
//  ch04_02.c
//
#include <stdio.h>

int main() {
    float average;
    int i, j, size;
    int rowColumn[][4] = { {74, 72, 80, 67}, {80, 89, 73, 69}, {85, 64, 88, 92} };

    size = sizeof(rowColumn) / sizeof(rowColumn[0]);
    printf("size = %d\n", size);
    for(i=0; i < size; i++) {
        for(j=0; j < 4; j++)
            printf("%d\t", rowColumn[i][j]);
        printf("\n");
    }
    printf("\n");
    
    for(i=0; i < size; i++) {
        average = 0;
        for(j=0; j < 4; j++)
            average += rowColumn[i][j];
        printf("Average = %.1f\n", average / 4);
    }
    return 0;
}