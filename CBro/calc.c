#include <stdio.h>

int main(int argc, char const *argv[])
{
    char operator;
    float num1;
    float num2;
    float result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    while (operator!= '+' && operator!= '-' && operator!= '*' && operator!= '/')
    {
        printf("\nInvalid operator. Please try again.\n");
        printf("Enter an operator (+, -, *, /): ");
        scanf("\n%c", &operator);
    }

    printf("\nEnter the first number: ");
    scanf("%f", &num1);

    printf("\nEnter the second number: ");
    scanf("%f", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\n%.2f + %.2f = %.2f\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("\n%.2f - %.2f = %.2f\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("\n%.2f * %.2f = %.2f\n", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("\n%.2f / %.2f = %.2f\n", num1, num2, result);
        break;
    }

    return 0;
}
