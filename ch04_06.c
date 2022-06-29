//
//  ch04_06.c
//
#include <stdio.h>

void printAverage(int rowColumn[3][4]) {
    int chinese=0, english=0, math=0, physics=0;
    
    for(int i=0; i < 3; i++) {
        chinese += rowColumn[i][0];
        english += rowColumn[i][1];
        math += rowColumn[i][2];
        physics += rowColumn[i][3];
    }
    printf("Average:\nChinese=%.1f\tEnglish=%.1f\tMath=%.1f\tPhysics=%.1f\n",
        (float) chinese/3, (float) english/3, (float) math/3, 
        (float) physics/3); 
}

int main() {
    int rowColumn[3][4] = { {74, 72, 80, 67}, {80, 89, 73, 69}, {85, 64, 88, 92} };
    printAverage(rowColumn);
    return 0;
}