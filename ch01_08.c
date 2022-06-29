//
//  ch01_08.c
//
#include <stdio.h>

int main() {
    int a = 9,b = 4, c;
    
    c = a + b;
    printf("a+b = %d \n",c);
    c = a - b;
    printf("a-b = %d \n",c);
    c = a * b;
    printf("a*b = %d \n",c);
    c = a / b;
    printf("a/b = %d \n",c);      // 9 / 4 = 2.25
    c = a % b;
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}