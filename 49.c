#include <stdio.h>

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5; // Number of elements in the array
    int i, j, min_idx, temp;

    // Selection Sort Loop
    for (i = 0; i < n - 1; i++) {
        min_idx = i; // Assume the current element is the smallest

        // Find the actual smallest element in the remaining array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the smallest element with the current element
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
