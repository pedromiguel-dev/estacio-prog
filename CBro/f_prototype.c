#include <stdio.h>


void hello(char name[], int age);

int main(int argc, char const *argv[])
{
    char name[] = "Pedro Miguel";
    int age = 18;
    
    hello(name, age);
    return 0;
}

void hello(char name[], int age){
    printf("Hello World!\n");
    printf("My name is %s\n", name);
    printf("I am %d years old\n", age);

}