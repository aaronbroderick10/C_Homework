#include <stdio.h>

int main(){
    printf("Enter positive integer: ");
    int n;
    scanf("%d", &n);
    printf("0 1 ");
    int current = 0;
    int next = 1;
    int sum = 0;
    int i = 2;
    while(i<n){
        sum = current + next;
	printf("%d ", sum);
	current = next;
	next = sum;
	i++;
    }
    printf("\n");
    return 0;
}
