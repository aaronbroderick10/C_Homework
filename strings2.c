#include <stdio.h>

void mystrlen(char* str){
    int count = 0;
    int i;
    for(i=0; str[i]!='\0'; i++){
	count++;
    }
    printf("Size: %d\n", count);
}

int main(){
    char str[] = "Hello World!";
    mystrlen(str);
    return 0;
}
