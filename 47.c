#include <stdio.h>

int main() {
    int arr1[10], arr2[10], sum[10];

    printf("Enter 10 elements for First Array:\n");
    for(int i = 0; i < 10; i++) scanf("%d", &arr1[i]);

    printf("Enter 10 elements for Second Array:\n");
    for(int i = 0; i < 10; i++) scanf("%d", &arr2[i]);

    for(int i = 0; i < 10; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    printf("Resultant Array after addition:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");
    return 0;
}
