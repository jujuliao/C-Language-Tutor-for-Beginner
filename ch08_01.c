//
//  ch08_01.c
//
#include <stdio.h>

enum eColor {COLORLESS, RED, YELLOW, BLUE};

int main()
{
    enum eColor color;
    
    color = BLUE;
    switch( color ) {
        case COLORLESS:
            printf("color = COLORLESS\n");
            break;
        case RED:
            printf("color = RED\n");
            break;
        case YELLOW:
            printf("color = YELLOW\n");
            break;
        case BLUE:
            printf("color = BLUE\n");
            break;
        default:
            printf("color impossible\n");
    }
    return 0;
}