#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data data;
    data.i = 10;
    printf("Storing integer:\n");
    printf("data.i = %d\n", data.i);
    data.f = 25.5;
    printf("\nStoring float:\n");
    printf("data.f = %.2f\n", data.f);
    data.c = 'A';
    printf("\nStoring character:\n");
    printf("data.c = %c\n", data.c);
    printf("\nAfter storing character, data.i = %d (garbage value)\n", data.i);
    printf("After storing character, data.f = %f (garbage value)\n", data.f);
    printf("\nSize of union Data = %zu bytes\n", sizeof(data));

    return 0;
}

