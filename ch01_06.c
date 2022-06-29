//
//  ch01_06.c
//
#include <stdio.h>

int main() {
    int intValue;
    float floatValue;

    printf("Enter integer and then a float: ");
  
    scanf("%d %f", &intValue, &floatValue);

    printf("You entered %d and %f", intValue, floatValue);  
    return 0;
}