//
//  ch04_01.c
//
#include <stdio.h>

int main() {
    int index, size;
    float average;
    float weight[] = {39.2, 40.1, 38.4, 45.7, 38.9}; // 設定陣列初始值 initialize an array

    size = sizeof(weight) / sizeof(weight[0]);
    printf("size = %d\n", size);
    for(index=0; index < size; index++)
        printf("weight[%d] = %.1f\n", index, weight[index]);

    printf("===============\nInput weight : ");    
    scanf("%f", &weight[2]);        
    weight[3] = 50.1;
    for(index=0; index < size; index++)
        printf("weight[%d] = %.1f\n", index, weight[index]);

    printf("===== Average =====\n");    
    for(index=0, average=0; index < size; index++)
        average += weight[index];
    printf("Average = %.1f\n", average / size);
    return 0;
}