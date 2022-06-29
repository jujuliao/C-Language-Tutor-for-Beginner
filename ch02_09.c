//
//  ch02_09.c
//
#include <stdio.h>

// 加法器
// 把輸入的數字累加起來

int main() {
   float floatInput;
   float floatSum = 0.0;

   for (i = 1; i <= 10; ++i) {
      printf("Enter a number : ");
      scanf("%f", &floatInput);

      // if the user enters a negative number, break the loop
      if( floatInput <= 0.0)
         break;
      floatSum += floatInput;
   }
   printf("Sum = %.2f", floatSum);
   return 0;
}