#include <stdio.h>

typedef int Integer;

int main() {
    Integer a, b, sum, difference, product, quotient;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    difference = a - b;
    product = a * b;
    printf("\nResults using typedef alias 'Integer':\n");
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    if (b != 0) {
        quotient = a / b;
        printf("Quotient = %d\n", quotient);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}

