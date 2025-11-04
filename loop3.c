#include <stdio.h>

int main(){
    int mysteryNum = 7;
    int guess;
    do{
        printf("Guess the number between 1 and 20: ");
	scanf("%d", &guess);
	if(guess<mysteryNum){
	    printf("Higher!\n");
	}
	else if(guess>mysteryNum){
	    printf("Lower!\n");
	}
	else{
	    printf("Correct!\n");
	}
    }
    while(guess != mysteryNum);
    return 0;
}
