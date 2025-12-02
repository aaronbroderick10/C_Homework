#include <stdio.h>

int main() {
    int arr[5] = {1, 20, -3, 44, -50};
    int *ptr = arr;   
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));   
    }
    return 0;
}

