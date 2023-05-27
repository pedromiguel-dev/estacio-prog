#include <stdio.h>
#include <string.h>

int get_length_string(char array[]){
    int length = 0;
    while (array[length] != '\0')
    {
        length++;
    }

    return length;
    
}

int main(int argc, char const *argv[])
{
    int age;
    char name[20];


    printf("Enter your name: ");
    fgets(name, 20, stdin);

    while (name[0] == '\0' || get_length_string(name) > 20 || get_length_string(name) < 3)
    {
        printf("Invalid name. Please enter a valid name: ");
        fgets(name, 20, stdin);
    }
    name[get_length_string(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    while (age < 0 || age > 120)
    {
        while (getchar() != '\n'){
            printf("Invalid age. Please enter a valid age: ");
            scanf("%d", &age);
        }
    }

    
    printf("Hello %s!\n", name);
    printf("You are %d years old.\n", age);
    
    return 0;
}
