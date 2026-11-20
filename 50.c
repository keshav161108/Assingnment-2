#include <stdio.h> // Only header needed for printf

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7; // Number of elements
    int temp;

    // The core Bubble Sort logic
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
