//
//  ch02_04.c
//
#include <stdio.h>

int main() {
    int intChinese, intMath;

    printf("Enter Chinese & Math scope: ");
    scanf("%d %d", &intChinese, &intMath);

    if( intChinese >= 90) {
      if( intMath >= 90) {
        printf("Grade is A+\n");
      }
      else {
        printf("Grade is A\n");
      }
    }
    if( intChinese >= 80) {
      if( intMath >= 80) {
        printf("Grade is B+\n");
      }
      else {
        printf("Grade is B\n");
      }
    }

    return 0;
}