#include <stdio.h>
int main() {
    int i,p;
    printf("value of i =");
    scanf("%d",&i);
    p=i;
    int preIR = ++i;
    i = p;
    int postIR = i++;
    printf("Pre-increment result: %d\n", preIR);
    printf("Post-increment result: %d\n", postIR);

    return 0;
}

