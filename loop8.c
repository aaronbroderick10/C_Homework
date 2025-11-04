#include <stdio.h>

int main(){
    printf("Input: ");
    int n;
    scanf("%d", &n);
    int sum = 0;
    while(n>0){
	int digit = n%10;
	sum += digit*digit;
	n /= 10;
    }
    printf("The sum of the squares of the digits is %d\n", sum);
    return 0;
}
