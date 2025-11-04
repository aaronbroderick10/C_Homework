#include <stdio.h>

int main(){
    printf("Enter start of range: ");
    int start;
    scanf("%d", &start);
    printf("Enter end of range: ");
    int end;
    scanf("%d", &end);
    for(start; start<=end; start++){
	int isPrime = 1;
	int i;
	for(i=2; i<start; i++){
	    if(start%i == 0){
		isPrime = 0;
	    }
	}
	if(isPrime){
	    printf("%d ", start);
	}
    }
    printf("\n");
    return 0;
}
