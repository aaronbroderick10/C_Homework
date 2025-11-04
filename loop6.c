#include <stdio.h>

int main(){
    printf("Enter positive number: ");
    int n;
    scanf("%d", &n);
    int result = 1;
    int i;
    for(i=n; i>0; i--){
	result *= i;
    }
    printf("The factorical of %d is %d\n", n, result);
    return 0;
}
