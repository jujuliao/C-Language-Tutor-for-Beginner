//
//  ch06_01.c
//
#include <stdio.h>

int main() {
    char *str1 = "This is a book.";
    char str2[] = "I am two!";
    char str3[80] = "I am three!";
    char str4[] = {'H', 'E', 'L', 'L', 'O', '\0'};
    char strBad[5] = "This is a bad string";
    
    printf("sizeof(str1) = %ld\n", sizeof(str1));
    printf("sizeof(str2) = %ld\n", sizeof(str2));
    printf("sizeof(str3) = %ld\n", sizeof(str3));
    printf("sizeof(str4) = %ld\n", sizeof(str4));
    printf("sizeof(strBad) = %ld\n\n", sizeof(strBad));
    
    printf("str1 = \"%s\"\n", str1);
    printf("str2 = \"%s\"\n", str2);
    printf("str3 = \"%s\"\n", str3);
    printf("str4 = \"%s\"\n", str4);
    printf("strBad = \"%s\"\n", strBad);
    return 0;
}