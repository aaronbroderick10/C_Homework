#include <stdio.h>

int main() {
    double num;
    int converted;
    printf("Enter a double value: ");
    scanf("%lf", &num);
    converted = (int)num;
    printf("\nOriginal double value: %.4f\n", num);
    printf("After casting to int: %d\n", converted);

    return 0;
}

