#include <stdio.h>

int main(){
    int arr[] = {1, 4, 65, 9, 22};
    int size = sizeof(arr)/sizeof(arr[0]);
    int even[size];
    int odd[size];
    int i, j, k;
    for(i=0; i<size; i++){
        if(arr[i]%2 == 0){
            even[j] = arr[i];
	    j++;
	}
	else{
	    odd[k] = arr[i];
	    k++;
	}
    }
    printf("Array separated!\n");
    return 0;
}
