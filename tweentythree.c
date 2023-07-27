#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double d, rp, ip; // d for discriminant, rp for realPart, ip for imaginaryPart
    double r1, r2; // r1 and r2 for the two roots

    printf("Enter the coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    d = b * b - 4 * a * c;

    // Check the value of discriminant to find the roots
    if (d > 0) {
        // Two distinct real roots
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1: %lf\n", r1);
        printf("Root 2: %lf\n", r2);
    } else if (d == 0) {
        // One real root (repeated root)
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and repeated:\n");
        printf("Root: %lf\n", r1);
    } else {
        // Complex roots (no real roots)
        rp = -b / (2 * a);
        ip = sqrt(-d) / (2 * a);
        printf("Roots are complex and conjugate:\n");
        printf("Root 1: %lf + %lfi\n", rp, ip);
        printf("Root 2: %lf - %lf i\n", rp, ip);
    }

    return 0;
}

