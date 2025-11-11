#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element = 21;
    int index = 4;
    if(index>=0 && index<size){
        arr[index] = element;
	printf("Insertion complete!\n");
    }
    else{
	printf("Invalid index.\n");
    }
    return 0;
}
