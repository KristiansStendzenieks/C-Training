#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){

    struct Student student1;
    student1.age = 69;
    student1.gpa = 4.2;
    strcpy( student1.name, "Gregg");
    strcpy( student1.major, "Film");

    struct Student student2;
    student2.age = 42;
    student2.gpa = 6.9;
    strcpy( student2.name, "Tim");
    strcpy( student2.major, "Music");

    printf("%s", student2.name);

    return 0;
}
