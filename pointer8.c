#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s1 = {"Aaron Broderick", 19};
    struct Student *ptr = &s1;
    printf("Student Name: %s\n", ptr->name);
    printf("Student Age: %d\n", ptr->age);

    return 0;
}

