#include <stdio.h>

void printArrayRecursive(int arr[], int index, int size) {
    if (index == size)
        return;

    printf("%d ", arr[index]);
    printArrayRecursive(arr, index + 1, size);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are: ");
    printArrayRecursive(arr, 0, n);
    printf("\n");

    return 0;
}
