//Binary Search: Find an element in a sorted array.

#include <stdio.h>
int main() {
    int arr[] = {10, 23, 45, 70, 85, 99}; 
    int n = 6;
    int target = 70;
    int low = 0;
    int high = n - 1;
    int index = -1;
   while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            index = mid;
            break;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1; 
        }
    }
    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found.\n");
    }
    return 0;
}