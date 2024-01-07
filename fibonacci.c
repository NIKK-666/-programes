// #include<stdio.h>
// int main(){
//     int a =1,b=1,c=0;
//     printf("%d\t%d\t",a,b);
//     for(int i=0;i<10;i++){
//         c=a+b;
//         if(c<100){
//             printf("%d \t",c);
//         }
//     a=b;
//     b=c;

//     }
//     return 0;
// }
#include <stdio.h>

// Function to generate Fibonacci series
void generate_fibonacci(int n) {
    int a = 0, b = 1, c;

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("Fibonacci series up to %d: %d\n", n, a);
    } else {
        printf("Fibonacci series up to %d: %d, %d", n, a, b);
        c = a + b;

        for (int i = 3; i <= n; i++) {
            printf(", %d", c);
            a = b;
            b = c;
            c = a + b;
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    generate_fibonacci(n);

    return 0;
}