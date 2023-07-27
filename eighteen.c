#include <stdio.h>
#include <math.h> 

int main() {
    double x, y;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of y: ");
    scanf("%lf", &y);

    double r_power = pow(x, y);

    double r_sqrt = sqrt(x);

    printf("x raised to the power of y: %lf\n", r_power);
    printf("Square root of x: %lf\n", r_sqrt);

    return 0;
}

