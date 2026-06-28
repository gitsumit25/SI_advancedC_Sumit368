//Search for an element in an array using pointers. 

#include <stdio.h>

int main() {
    int arr[6] = {12, 45, 78, 23, 56, 89};
    int n = 6;
    int target;
    int *ptr = arr; 
    int found = 0;
    int index = -1;
    printf("Array elements: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\nEnter the element to search for: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        if (*ptr == target) {
            found = 1;
            index = i;
            break;
        }
        ptr++; 
    }

    if (found) {
        printf("Element %d found at index %d (Memory Address: %p)\n", target, index, (void*)(ptr));
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}