//
//  ch02_01.c
//
#include <stdio.h>

int main() {
    int intScore;
		char charGrade;

    printf("Enter an score: ");
    scanf("%d", &intScore);

		charGrade = 'A';
    if( intScore < 90 ) {
			charGrade = 'B';
    }
    printf("Grade is '%c'\n", charScore);

    return 0;
}