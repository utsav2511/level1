#include <stdio.h>

int main() {
    float tsp, tp, cp;
    int noi = 15; // Assuming there are 15 items

    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &tsp);

    printf("Enter the total profit earned on 15 items: ");
    scanf("%f", &tp);

    cp = (tsp - tp) / noi;

    printf("Cost Price of one item: %.2f\n", cp);

    return 0;
}

