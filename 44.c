#include <stdio.h>

int main() {
    int arr[10];
    int odd_count = 0, even_count = 0;

    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        
        if(arr[i] % 2 == 0) {
            even_count++; // Divisible by 2 means even
        } else {
            odd_count++;  // Not divisible by 2 means odd
        }
    }

    printf("Total Even elements = %d\n", even_count);
    printf("Total Odd elements = %d\n", odd_count);

    return 0;
}
