#include <stdio.h>

int main(){
    printf("Input: ");
    int r;
    scanf("%d", &r);
    int c = 2*(r-1) + 1;
    int i;
    for(i=0; i<r; i++){
	int j;
	for(j=0; j<c; j++){
	    if(i+j >= r-1 && j-i <= r-1){
		printf("*");
	    }
	    else{
		printf(" ");
	    }
	}
	printf("\n");
    }
    return 0;
}
