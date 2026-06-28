//Input and print array elements using pointers. 


#include <stdio.h>
int main() {
    int arr[5];
    int *ptr = arr;

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", (ptr + i)); 
    }

    ptr = arr; 

    // 2. Print array elements using pointer
    printf("\nThe elements of the array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}