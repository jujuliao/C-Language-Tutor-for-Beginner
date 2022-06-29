//
//  ch08_02.c
//
#include <stdio.h>

enum eColor {
    COLORLESS = 0, 
    RED = 100, 
    YELLOW = 200, 
    BLUE= 300
};

int main()
{
    enum eColor color;
    
    color = BLUE;
    printf("color = %d\n", color);
    return 0;
}