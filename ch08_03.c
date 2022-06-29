//
//  ch08_03.c
//
#include <stdio.h>

enum eTurnSignal{
	  NORMAL = 0,
    RIGHT_ON = 1,
    LEFT_ON = 2,
    FLASH_MODE = 4
};

int main() {
    enum eTurnSignal signal = RIGNT_ON | FLASH_MODE; 

    //    00000001
    //  | 00000100
    //  ___________
    //    00000101

    printf("%d\n", signal);
    if(signal & FLASH_MODE)
        printf("LED is Flashing\n");
	  return 0;
}