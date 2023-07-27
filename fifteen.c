#include <stdio.h>

int main() {
    // Declare variables of different data types
    int iv;         // 'iv' stands for integerVariable
    char cv;        // 'cv' stands for charVariable
    float fv;       // 'fv' stands for floatVariable
    double dv;      // 'dv' stands for doubleVariable

    // Use sizeof() operator to find the size of each variable and print the results
    printf("Size of int variable: %zu bytes\n", sizeof(iv));
    printf("Size of char variable: %zu byte\n", sizeof(cv));
    printf("Size of float variable: %zu bytes\n", sizeof(fv));
    printf("Size of double variable: %zu bytes\n", sizeof(dv));

    return 0;
}

