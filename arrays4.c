#include <stdio.h>

int main(){
    int arr[] = {1, 1, 2, 3, 4, 3, 5, 3, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0; i<size; i++){
	int count = 0;
        int j;
	for(j=0; j<size; j++){
	    if(arr[j]==arr[i]){
	        count++;
	    }
	}
	if(count==1){
	    printf("%d ", arr[i]);
	}
    }
    printf("\n");
    return 0;
}
