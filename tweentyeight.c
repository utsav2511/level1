#include <stdio.h>

// Call by Value (cbv)
void cbv(int x) {
    printf("Inside cbv function - before modification: %d\n", x);
    x = 10;
    printf("Inside cbv function - after modification: %d\n", x);
}

// Call by Reference (cbr)
void cbr(int *ptr) {
    printf("Inside cbr function - before modification: %d\n", *ptr);
    *ptr = 10;
    printf("Inside cbr function - after modification: %d\n", *ptr);
}

int main() {
    // Call by Value (cbv)
    int value;
    scanf("%d",&value);
    printf("Before calling cbv function: %d\n", value);
    cbv(value);
    printf("After calling cbv function: %d\n", value); // 'value' remains unchanged

    printf("\n");

    // Call by Reference (cbr)
    int reference_value;
    scanf("%d" ,&reference_value);
     printf("Before calling cbr function: %d\n", reference_value);
    cbr(&reference_value);
    printf("After calling cbr function: %d\n", reference_value); // The value is modified

    return 0;
}

