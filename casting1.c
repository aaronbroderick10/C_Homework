#include <stdio.h>

int main() {
    int num;
    float converted;
    printf("Enter an integer: ");
    scanf("%d", &num);
    converted = (float)num;
    printf("\nInteger value: %d\n", num);
    printf("Float value after casting: %.2f\n", converted);

    return 0;
}

