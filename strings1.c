#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "racecar";
    int isPal = 1;
    int i = 0;
    int j = strlen(str)-1;
    while(i<j){
	if(str[i]!=str[j]){
	    isPal = 0;
	}
	i++;
	j--;
    }
    if(isPal){
	printf("The string is a palindrome.\n");
    }
    else{
	printf("The string is not a palindrome.\n");
    }
    return 0;
}
