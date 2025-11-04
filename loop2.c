#include <stdio.h>

int main(){
    printf("Input: ");
    int input;
    scanf("%d", &input);
    int i;
    for(i=1; i<=10; i++){
        printf("7 * %d = %d\n", i, i*input);
    }
    return 0;
}
