#include <stdio.h>

int main() {
    int i, j, k;

    printf("Enter the decimal value for i, octal value for j, and hexadecimal value for k: ");
    scanf("%d %o %x", &i, &j, &k);

    printf("You entered: i = %d, j = %d, k = %d\n", i, j, k);

    return 0;
}

