//
//  ch06_04.c
//
#include <stdio.h>

void printStringArray(char str[]) {
    puts(str);
}

void printStringPointer(char *str) {
    puts(str);
}

int main()
{
    char str[50];
    
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);             
    printStringArray(str);
    printStringPointer(str);
    return 0;
}