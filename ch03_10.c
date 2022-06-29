//
//  ch03_10.c
//
#include <stdio.h>

// 0, (0+1), (1+2), (3+3), (6+4), .....

static int intStatic = 0;

void add() {
    static intAdd = 0;

    intAdd++;
    intStatic += intAdd;
}

int main()
{
    printf("0. intStatic = %d\n", intStatic);    // 0
    for(int i=1; i < 10; i++)
    {
        add();
        printf("%d. intStatic = %d\n", i, intStatic);    // 5
    }
}