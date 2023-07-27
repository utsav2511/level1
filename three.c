#include <stdio.h>
#include <math.h>

int main() 
{
    float length, breadth, radius,rectangle_area,rectangle_perimeter,circle_area,circle_circumference;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth (width) of the rectangle: ");
    scanf("%f", &breadth);

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
 
    rectangle_area=length*breadth;
    rectangle_perimeter=2*(length+breadth);
    circle_area=M_PI*radius*radius;
    circle_circumference=2*M_PI*radius;
    printf("\nRectangle Area: %f square units\n", rectangle_area);
    printf("Rectangle Perimeter: %.f units\n", rectangle_perimeter);
    printf("Circle Area: %f square units\n", circle_area);
    printf("Circle Circumference: %f units\n", circle_circumference);

    return 0;
}

