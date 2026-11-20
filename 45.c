#include <stdio.h>

int main() {
    int arr[10];
    int positive_count = 0, negative_count = 0, zero_count = 0;

    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] > 0) {
            positive_count++;
        } else if(arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("Total Positive elements = %d\n", positive_count);
    printf("Total Negative elements = %d\n", negative_count);
    printf("Total Zero elements = %d\n", zero_count);

    return 0;
}
