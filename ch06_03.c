//
//  ch06_03.c
//
#include <stdio.h>

int main() {
    char lineString[10];
    
    printf("What are you doing? ");
    fgets(lineString, sizeof(lineString), stdin);
    puts(lineString);
    return 0;
}
