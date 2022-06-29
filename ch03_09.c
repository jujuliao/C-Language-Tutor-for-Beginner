//
//  ch03_09.c
//
#include <stdio.h>

int intGlobal = 0;

void add5() {
    intGlobal += 5;
}

void reduce2() {
	intGlobal -= 2;
}

int main()
{
    printf("1. Global = %d\n", intGlobal);    // 0
		add5();
    printf("2. Global = %d\n", intGlobal);    // 5
    for(int i=0; i < 3; i++)
    {
        intGlobal += 1;
		    printf("3. Global = %d\n", intGlobal);    // 6
    }
}