//
//  ch06_05.c
//
#include <stdio.h>

int main(void) {
    char str[] = "ABCDEFG";

    printf("str address = %p\n", str);
    printf("%c%c%c%c%c%c\n", *str, *(str+1), str[2], 
        str[3], *(str+4), str[5]);
    return 0;
}