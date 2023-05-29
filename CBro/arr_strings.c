#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char cars[4][10] = {"Volvo", "BMW", "Ford", "Mazda"};

    strcpy(cars[0], "Opel");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
    return 0;
}
