#include <stdio.h>

int main(){
    printf("Enter number of integers: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter integers:\n");
    int i;
    for(i=0; i<n; i++){
        int num;
	scanf("%d", &num);
	arr[i] = num;
    }
    printf("Array elements: ");
    int j;
    for(j=0; j<n; j++){
        printf("%d ", arr[j]);
    }
    printf("\n");
    printf("Reversed: ");
    int k;
    for(k=n-1; k>=0; k--){
        printf("%d ", arr[k]);
    }
    printf("\n");
    return 0;
}
