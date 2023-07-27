#include <stdio.h>

int main() {
    int a , b ;
    printf("enter two values");
    scanf("%d",&a);
    scanf("%d",&b);


    // Division
    int rd = a / b;

    // Modulo Division
    int rm = a % b;

    printf("division-%d\n", rd);
    printf("Modulo- %d\n", rm);

    return 0;
}

