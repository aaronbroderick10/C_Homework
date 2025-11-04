#include <stdio.h>

int main(){
    printf("Input: ");
    int num;
    scanf("%d", &num);
    int temp = num;
    int rev = 0;
    while(temp){
        rev = rev*10 + temp%10;
	temp /= 10;
    }
    if(num==rev){
	printf("%d is a palindrome number.\n", num);
    }
    else{
	printf("%d is not a palindrome number.\n", num);
    }	
    return 0;
}
