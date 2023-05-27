#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    double a;
    double b;
    double hypotenuse;

    printf("Enter the length of side a: ");
    scanf("%lf", &a);

    printf("Enter the length of side b: ");
    scanf("%lf", &b);

    hypotenuse = sqrt(pow(a, 2) + pow(b, 2));

    printf("The length of the hypotenuse is %lf\n", hypotenuse);
    
    return 0;
}
