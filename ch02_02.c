//
//  ch02_02.c
//
#include <stdio.h>

int main() {
    int intScore;
		char charGrade = ' ';

    printf("Enter an score: ");
    scanf("%d", &intScore);

    if( intScore >= 90 ) {
			charGrade = 'A';
    }
		else
		{
			charGrade = 'B';
		}
    printf("Grade is '%c'\n", charScore);

    return 0;
}