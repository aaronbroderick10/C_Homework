#include <stdio.h>

int length(char *s) {
    char *ptr = s;   
    int count = 0;
    while (*ptr != '\0') {  
        count++;
        ptr++;              
    }
    return count;
}

int main() {
    char str[] = "Hello, world!";
    int len = length(str);
    printf("The length of the string \"%s\" is: %d\n", str, len);
    return 0;
}

