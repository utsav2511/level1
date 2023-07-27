#include <stdio.h>

int main() {
    int basic_salary, hra, da, ta;

    printf("Enter the Basic Salary: ");
    scanf("%d", &basic_salary);

    printf("Enter the House Rent Allowance (HRA): ");
    scanf("%d", &hra);

    printf("Enter the Dearness Allowance (DA): ");
    scanf("%d", &da);

    printf("Enter the Travel Allowance (TA): ");
    scanf("%d", &ta);

    int gross_salary = basic_salary+hra+da+ta;

    printf("\nGross Salary: %d\n", gross_salary);

    return 0;
}

