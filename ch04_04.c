//
//  ch04_04.c
//
#include <stdio.h>

float calcAverage(int chinese, int english, int math, int physics) {
    return (float) (chinese + english + math + physics) / 4;
}

int main() {
    int i;
    float average;
    int rowColumn[][4] = { {74, 72, 80, 67}, {80, 89, 73, 69}, {85, 64, 88, 92} };

    printf("Chinese\tEnglish\tMath\tPhysics\tAverage\n");
    for(i=0; i < sizeof(rowColumn)/sizeof(rowColumn[0]); i++) {
	      average = calcAverage(rowColumn[i][0], rowColumn[i][1], rowColumn[i][2], 
            rowColumn[i][3]);
		    printf("%7d\t%7d\t%4d\t%7d\t%7.1f\n", rowColumn[i][0], rowColumn[i][1], 
            rowColumn[i][2], rowColumn[i][3], average);
    }
    return 0;
}