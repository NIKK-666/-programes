#include <stdio.h>

// Function to calculate the sum of the series
int calculateSum(int n) {
   int sum = 0;
   for (int i = 1; i <= n; i++) {
       sum += i;
   }
   return sum;
}

int main() {
   int n;
   printf("Enter the value of n: ");
   scanf("%d", &n);

   printf("The series is: ");
   for (int i = 1; i <= n; i++) {
       printf("%d", i);
   }

   int sum = calculateSum(n);
   printf("\nThe sum of the series is: %d", sum);

   return 0;
}
