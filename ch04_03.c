//
//  ch04_03.c
//
#include <stdio.h>

int main() {
    int i, j, k;
    int xyz[2][3][4];

    // set values
    for(i=0; i < 2; i++) {
        for(j=0; j < 3; j++)
            for(k=0; k < 4; k++)
                xyz[i][j][k] = (i+1) * (j+1) * (k+1);
    }
    // display values
    for(i=0; i < 2; i++) {
        for(j=0; j < 3; j++) {
            for(k=0; k < 4; k++)
                printf("xyz[%d][%d][%d] = %d\t", i, j, k, xyz[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}