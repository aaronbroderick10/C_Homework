#include <stdio.h>

void copy(char *dest, char *src) {
    while (*src != '\0') {   
        *dest = *src;        
        dest++;              
        src++;               
    }
    *dest = '\0';            
}

int main() {
    char src[] = "Example string";
    char dest[50];  //max length of 50
    copy(dest, src);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    return 0;
}

