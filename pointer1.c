#include <stdio.h>

int main() {
    int myInt = 67;
    char myChar = 'P';
    double myDouble = 4.04;

    int *intPtr = &myInt;
    char *charPtr = &myChar;
    double *doublePtr = &myDouble;

    printf("Without pointers:\n");
    printf("myInt value: %d, address: %p\n", myInt, (void*)&myInt);
    printf("myChar value: %c, address: %p\n", myChar, (void*)&myChar);
    printf("myDouble value: %.2f, address: %p\n", myDouble, (void*)&myDouble);

    printf("\nUsing pointers:\n");
    printf("intPtr points to value: %d, stored address: %p\n", *intPtr, (void*)intPtr);
    printf("charPtr points to value: %c, stored address: %p\n", *charPtr, (void*)charPtr);
    printf("doublePtr points to value: %.2f, stored address: %p\n", *doublePtr, (void*)doublePtr);

    return 0;
}

