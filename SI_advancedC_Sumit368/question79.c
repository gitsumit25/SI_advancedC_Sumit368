//Reverse an array using pointers. 


#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int *left = arr;         
     int *right = arr + (n - 1); 
    int temp;

    printf("Original array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

        while (left < right) {
              temp = *left;
        *left = *right;
        *right = temp;

        left++;  
        right--; 
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}