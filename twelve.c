#include <stdio.h>
#include <math.h>

int main() {
    int n = 5;
    float numbers[n], sum = 0.0, mean, sd = 0.0;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    mean = sum / n;

    for (int i = 0; i < n; i++) {
        sd += pow(numbers[i] - mean, 2);
    }

    sd = sqrt(sd / n);

    printf("Standard Deviation: %f\n", sd);

    return 0;
}

