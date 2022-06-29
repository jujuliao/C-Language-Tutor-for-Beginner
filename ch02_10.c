//
//  ch02_10.c
//
#include <stdio.h>

int main() {
    char choice;
    
    printf("Which action?\n\ta - add\n\tu - update\n\t" 
        "d - delete\n\ti - insert\nYour choice : ");
    scanf("%c", &choice);
    switch( choice ) {
        case 'a':
        case 'A':
            printf("You select add function\n");
            break;
        case 'u':
        case 'U':
            printf("You select update function\n");
            break;
        case 'd':
        case 'D':
            printf("You select delete function\n");
            break;
        case 'i':
        case 'I':
            printf("You select insert function\n");
            break;
        default:
            printf("Unknow choice.\n");
    }
}