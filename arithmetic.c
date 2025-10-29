#include <stdio.h>

int main() {
    /* 
    //2
    int x = 0;
    printf("x: %d\n", x);   
    printf("x++: %d\n", x++);   
    x = 0;
    printf("x: %d\n", x);   
    printf("++x: %d\n", ++x);   
    x = 0;
    printf("x: %d\n", x);   
    printf("x--: %d\n", x--);   
    x = 0;
    printf("x: %d\n", x);   
    printf("--x: %d\n", --x);   
    */
    //3
    int a = 9, b = 5;
    a -= b;
    printf("-= %d\n", a);
    a = 9;
    a += b;
    printf("+= %d\n", a);
    a = 9;
    a *= b;
    printf("*= %d\n", a);
    a = 9;
    a /= b;
    printf("/= %d\n", a);
    a = 9;
    a %= b;
    printf("%= %d\n", a);
    a = 9;
    a &= b;
    printf("&= %d\n", a);
    a = 9;
    a |= b;
    printf("|= %d\n", a);
    a = 9;
    a ^= b;
    printf("^= %d\n", a);
    a = 9;
    a >>= b;
    printf(">>= %d\n", a);
    a = 9;
    a <<= b;
    printf("<<= %d\n", a);
    a = 9;

    return 0;
}
