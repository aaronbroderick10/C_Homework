#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = 3;
    if(index>=0 && index<size){
	arr[index] = -1; //represents null
	printf("Deletion complete!\n");
    }
    else{
	printf("Invalid index.\n");
    }
    return 0;
}
