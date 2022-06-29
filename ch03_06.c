//
//  ch03_06.c
//
#include <stdio.h>

float bmiValue(float height, float weight) {
    height /= 100;
    return weight / (height * height);
}

int main() {
    float myHeight = 170;    // 身高
    float myWeight = 79.3;   // 體重

    printf("my height = %.0f cm, my weight = %.1f kg, my BMI = %.1f\n", 
        myHeight, myWeight, bmiValue(myHeight, myWeight));
}