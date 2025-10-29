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
    
    //4
    int isLoggedIn = 1;
    int isAdmin = 0;
    printf("Regular user: %s\n", (isLoggedIn && !isAdmin) ? "true" : "false");
    printf("Has access: %s\n", (isLoggedIn || isAdmin) ? "true" : "false");
    printf("Not logged in: %s\n", (!isLoggedIn) ? "true" : "false");
    */
    //5
    int a = 1, b = 0, c = 1;
    printf("%d\n", a && b || c);
    printf("%d\n", (a && b) || c);
    printf("%d\n", a || b && c);
    printf("%d\n", (a || b) && c);
    printf("%d\n", !a && b);

    return 0;
}
