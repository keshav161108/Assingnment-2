#include <stdio.h>

int main() {
    int arr1[10], arr2[10], temp;

    printf("Enter 10 elements for First Array:\n");
    for(int i = 0; i < 10; i++) scanf("%d", &arr1[i]);

    printf("Enter 10 elements for Second Array:\n");
    for(int i = 0; i < 10; i++) scanf("%d", &arr2[i]);

    // Swapping
    for(int i = 0; i < 10; i++) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    printf("\nAfter swapping:\nFirst Array: ");
    for(int i = 0; i < 10; i++) printf("%d ", arr1[i]);
    
    printf("\nSecond Array: ");
    for(int i = 0; i < 10; i++) printf("%d ", arr2[i]);
    printf("\n");
    return 0;
}
