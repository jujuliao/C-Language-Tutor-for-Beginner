//
//  ch03_08.c
//
#include <stdio.h>

int function() {
    int intFunction = 168;
    
    printf("intFunction = %d\n", intFunction);
}

int main(void) {
    int intMain = 100;
    
    for(int intFor = 0; intFor < 3; intFor++) {
        printf("Loop %d\n", intFor);
    }

    printf("intMain = %d\n", intMain);
    function();
    
    // Error: intFor is not declared at this point
    // printf("intFor = %d\n", intFunction);  
    return 0;
}