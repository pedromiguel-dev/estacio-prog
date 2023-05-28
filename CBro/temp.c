#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char unit;
    float temp;

    printf("\nIs the temperature in Cealsius or Fahrenheit? (C/F): ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &temp);
        printf("\n%.2f Celsius is %.2f Fahrenheit\n", temp, (temp * 9 / 5) + 32);
    }
    else if (unit == 'F')
    {
        printf("\nEnter the temperature in Fahrenheit: ");
        scanf("%f", &temp);
        printf("\n%.2f Fahrenheit is %.2f Celsius\n", temp, (temp - 32) * 5 / 9);
    }
    else
    {
        printf("\nInvalid input\n");
    }
    

    return 0;
}
