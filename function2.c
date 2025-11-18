#include <stdio.h>

int sumArray(int arr[], int k) {
    if (k == 0) {
        return 0;               
    } else {
        return arr[k - 1] + sumArray(arr, k - 1);
    }
}

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = sumArray(arr, n);
    printf("Sum of array elements = %d\n", result);

    return 0;
}

