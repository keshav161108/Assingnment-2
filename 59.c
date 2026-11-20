#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 2, 3, 4, 3, 5};
    int n, k = 0;
    
    printf("Enter a number to search: ");
    scanf("%d", &n);
    
    for(int i = 0; i < 8; i++) {
        if(a[i] == n) { // Exact match check
            k++;
        }
    }
    
    printf("The occurrence of that element: %d\n", k);
    return 0;
}
