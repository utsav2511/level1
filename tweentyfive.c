#include <stdio.h>
#include <ctype.h>

int main() {
    char is[100];
    int i;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", is);

    // Convert the string to uppercase
    for (i = 0; is[i] != '\0'; i++) {
        is[i] = toupper(is[i]);
    }

    // Display the uppercase string
    printf("Uppercase string: %s\n", is);

    return 0;
}

