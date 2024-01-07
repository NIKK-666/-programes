#include <stdio.h>

// Function to convert binary to decimal
int binaryToDecimal(int binary) {
    if (binary == 0)
        return 0;
    else
        return ((binary % 10) + 2 * binaryToDecimal(binary / 10));
}

int main() {
    int binary;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    printf("Decimal = %d", binaryToDecimal(binary));

    return 0;
}
// #include <stdio.h>

// // Function to convert binary to decimal
// int binaryToDecimal(int binary) {
//     int decimal = 0;
//     int remainder;

//     // Converting binary number to decimal
//     while (binary != 0) {
//         remainder = binary % 10;
//         binary /= 10;
//         decimal = decimal * 2 + remainder;
//     }

//     return decimal;
// }

// int main() {
//     int binary;

//     printf("Enter a binary number: ");
//     scanf("%d", &binary);

//     printf("Decimal = %d", binaryToDecimal(binary));

//     return 0;
// }