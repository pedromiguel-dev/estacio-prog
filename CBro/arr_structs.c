#include <stdio.h>
#include <string.h>

#define calc_size(array) sizeof(array)/sizeof(array[0])

typedef struct {
    char name[20];
    float gpa;
} Student;

int main(int argc, char const *argv[])
{
    Student student1 = {"Pedro Miguel", 5};
    Student student2 = {"Maria", 5};

    Student students[] = {student1, student2};

    for (int i = 0; i < calc_size(students); i++)
    {
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }
    

    return 0;
}
