#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    const double PI = 3.14159265358979323846;
    double radius;
    double area;
    double circumference;


    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    
    printf("Circle with radius %lf\n", radius);
    printf("Circumference: %lf\n", circumference);
    printf("Area: %lf\n", area);

    return 0;
}
