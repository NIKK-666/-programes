#include <stdio.h>
#include <math.h>

// Function to check if the number is Armstrong
int isArmstrong(int num) {
    int temp, total = 0;

    // Take the length of the number
    temp = num;

    // Find the total sum of the cubes of the digits
    while (temp > 0) {
        total += pow(temp % 10, 3);
        temp /= 10;
    }

    // Return 1 if the number is Armstrong, else return 0
    if (total == num)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is Armstrong and print the result
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}