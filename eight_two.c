#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    printf("\nBefore swapping: n1 = %d, n2 = %d\n", n1, n2);

    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;

    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}


