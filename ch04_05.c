//
//  ch04_05.c
//
#include <stdio.h>

float calcAverage(int array[4]) {
    // printf("%d %d\n", sizeof(array), sizeof(array[0]));
    
    int sum = 0;
    
    for(int i=0; i < 4; i++) {
        sum += array[i];    
    }
    return (float) sum / 4;
}

int main() {
    int array[] = {74, 72, 80, 67};  // Chinese, English, Math, Physics

	  printf("Average = %.1f\n", calcAverage(array));
    return 0;
}