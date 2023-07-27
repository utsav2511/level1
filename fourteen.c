#include <stdio.h>

int main() {
    int x = 5;
    int y;

    y = x;

    printf("Using assignment operator (=):\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    int a = 10;
    int b = 20;

    printf("\nUsing equal to operator (==):\n");
    if (a == b) {
        printf("a and b are equal.\n");
    } else {
        printf("a and b are not equal.\n");
    }

    return 0;
}

