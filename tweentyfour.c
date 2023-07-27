#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t, ci; // p for principal, r for rate, t for time, ci for compound interest

    // Input values
    printf("Enter the principal amount: ");
    scanf("%lf", &p);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &r);

    printf("Enter the time period (in years): ");
    scanf("%lf", &t);

    // Calculate compound interest
    ci = p * (pow((1 + r / 100), t) - 1);

    // Display the result
    printf("Compound Interest: %.2lf\n", ci);

    return 0;
}

