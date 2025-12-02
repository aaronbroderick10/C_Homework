#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter a  number: ");
    scanf("%d", &num1);
    printf("Enter another number: ");
    scanf("%d", &num2);

    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int sum = *ptr1 + *ptr2;
    printf("The sum is %d\n", sum);

    return 0;
}

