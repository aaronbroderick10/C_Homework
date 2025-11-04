#include <stdio.h>
#include <string.h>

int main(){
    char password[] = "correct_password";
    char input[100];
    do{
        printf("Enter password: ");
	scanf("%s", input);
	if(strcmp(password, input)){
	    printf("Incorrect password.\n");
	}
    }
    while(strcmp(password, input));
    printf("Access granted!\n");
    return 0;
}
