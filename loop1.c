#include <stdio.h>

int main(){

    int input;
    printf("Input: \n");
    scanf("%d", &input);
    int sum = 0;
    while(input>0){
        sum += input;
        scanf("%d", &input);
    }
    printf("Output: %d\n", sum);
    return 0;
}
