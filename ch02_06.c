//
//  ch02_06.c
//
#include <stdio.h>

int main()
{
    int intCount, intSum = 0;

    for(intCount=1; intCount <= 100; intCount++)
		    intSum += intCount;

    printf("Sum = %d", intSum);
    return 0;
}