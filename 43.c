#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;

    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }

    printf("Sum of the numbers = %d\n", sum);

    return 0;
}
