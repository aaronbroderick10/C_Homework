#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>

int sumAll(int count, ...) {
    va_list args;
    va_start(args, count);
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum;
}

int main() {
    srand(time(NULL));  
    int a = rand() % 99 + 1;
    int b = rand() % 99 + 1;
    int c = rand() % 99 + 1;
    int d = rand() % 99 + 1;
    printf("Four random numbers: %d, %d, %d, %d\n", a, b, c, d);
    printf("Sum = %d\n\n", sumAll(4, a, b, c, d));
    int e = rand() % 99 + 1;
    int f = rand() % 99 + 1;
    int g = rand() % 99 + 1;
    int h = rand() % 99 + 1;
    int i = rand() % 99 + 1;
    int j = rand() % 99 + 1;
    printf("Six random numbers: %d, %d, %d, %d, %d, %d\n", e, f, g, h, i, j);
    printf("Sum = %d\n", sumAll(6, e, f, g, h, i, j));
    return 0;
}

