#include <stdio.h>
#include <string.h>

// Define a structure
struct Person {
    char name[50];
    int age;
    float height;
};

// Define a union
union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    // Structure demonstration
    struct Person xyz;
    strcpy(xyz.name, "utsav");
    xyz.age = 21;
    xyz.height = 5.9;

    printf("Structure - Person Details:\n");
    printf("Name: %s\n", xyz.name);
    printf("Age: %d\n", xyz.age);
    printf("Height: %.2f\n\n", xyz.height);

    // Union demonstration
    union Data data;
    data.intValue = 42;
    printf("Union - Integer Value: %d\n", data.intValue);

    data.floatValue = 3.14;
    printf("Union - Float Value: %.2f\n", data.floatValue);

    strcpy(data.stringValue, "Hello");
    printf("Union - String Value: %s\n", data.stringValue);

    printf("\n");

    // Observe that the union's members share the same memory space.
    printf("Union - After assigning different values:\n");
    printf("Integer Value: %d\n", data.intValue);
    printf("Float Value: %.2f\n", data.floatValue);
    printf("String Value: %s\n", data.stringValue);

    return 0;
}

