#include <stdio.h>

int gcd(int x, int y) {
    if (x%y == 0) {
        return y;   
    } else {
        return gcd(y, x%y);  
    }
}

int main() {
    int x, y;
    printf("Enter two positive integers: ");
    scanf("%d %d", &x, &y);
    printf("GCD of %d and %d is %d\n", x, y, gcd(x, y));

    return 0;
}

