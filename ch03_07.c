//
//  ch03_07.c
//
#include <stdio.h>

int nFactorial(int number) {
    if( number == 1 )
        return 1;
    return number * nFactorial(number - 1);
}

int main() {
    int number = 4, result;

    result = nFactorial(number);
    printf("%d! = %d\n", number, result);
    return 0;
}