#include <stdio.h>

int* larger(int *a, int *b) {
    if (*a > *b)
        return a;   
    else
        return b;   
}

int main() {
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter another number: ");
    scanf("%d", &y);
    int *largestPtr = larger(&x, &y);
    printf("The larger number is: %d\n", *largestPtr);

    return 0;
}

