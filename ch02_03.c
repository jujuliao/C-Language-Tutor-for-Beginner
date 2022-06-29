//
//  ch02_03.c
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
		else if( intScore >= 80 ) {
		{
			charGrade = 'B';
		}
		else if( intScore >= 70 ) {
		{
			charGrade = 'C';
		}
		else if( intScore >= 60 ) {
		{
			charGrade = 'D';
		}
		else {
		{
			charGrade = 'E';
		}
    printf("Grade is '%c'\n", charScore);

    return 0;
}