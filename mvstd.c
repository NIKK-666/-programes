#include <stdio.h>
#include <math.h>

// Function to calculate mean
double calculate_mean(int *array, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

// Function to calculate variance
double calculate_variance(int *array, int size, double mean) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += pow(array[i] - mean, 2);
    }
    return sum / size;
}

// Function to calculate standard deviation
double calculate_std_deviation(double variance) {
    return sqrt(variance);
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    double mean = calculate_mean(array, size);
    double variance = calculate_variance(array, size, mean);
    double std_deviation = calculate_std_deviation(variance);

    printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", std_deviation);

    return 0;
}
