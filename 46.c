#include <stdio.h>

int main() {
    int n, i;
    
    // Read the number of elements
    printf("Enter the number of elements (N): ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Please enter at least 2 numbers.\n");
        return 0;
    }
    
    int arr[n];
    
    // Read N numbers
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize max1 and max2 with the first element
    int max1 = arr[0];
    int max2 = arr[0];
    int has_second_max = 0; // Flag to check if a valid second max is found
    
    // Find a distinct second element to initialize max2 properly
    for (i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
            has_second_max = 1;
        } else if (arr[i] < max1) {
            if (!has_second_max || arr[i] > max2) {
                max2 = arr[i];
                has_second_max = 1;
            }
        }
    }
    
    // Output results
    printf("Maximum: %d\n", max1);
    if (!has_second_max) {
        printf("Second Maximum: Does not exist (all numbers are identical)\n");
    } else {
        printf("Second Maximum: %d\n", max2);
    }
    
    return 0;
}

