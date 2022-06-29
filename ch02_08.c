//
//  ch02_08.c
//
#include <stdio.h>

int main() {
  float floatNumber, floatSum = 0;

  do {
    printf("Enter a floating number: ");
    scanf("%f", &floatNumber);
    floatSum += floatNumber;
  }
  while( floatNumber != 0.0);

  printf("Sum = %.2f", floatSum);

  return 0;
}