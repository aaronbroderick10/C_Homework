#include <stdio.h>

int main(){
    int arr[] = {6, 7, 4, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int copy[size];
    int i;
    for(i=0; i<size; i++){
        copy[i] = arr[i];
    }
    printf("Array copied!\n");
    return 0;
}
