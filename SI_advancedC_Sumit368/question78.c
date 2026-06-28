//Swap two arrays using pointers. 


#include <stdio.h>
int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {10, 20, 30, 40, 50};
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    int temp;

    printf("Before Swapping:\n");
    printf("Array 1: ");
    for (int i = 0; i < 5; i++) printf("%d ", *(ptr1 + i));
    printf("\nArray 2: ");
    for (int i = 0; i < 5; i++) printf("%d ", *(ptr2 + i));
    printf("\n\n");

    for (int i = 0; i < 5; i++) {
        temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = temp;
    }

    printf("After Swapping:\n");
    printf("Array 1: ");
    for (int i = 0; i < 5; i++) printf("%d ", *(ptr1 + i));
    printf("\nArray 2: ");
    for (int i = 0; i < 5; i++) printf("%d ", *(ptr2 + i));
    printf("\n");

    return 0;
}