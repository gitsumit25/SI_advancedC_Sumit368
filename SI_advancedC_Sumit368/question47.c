//Selection Sort: Sort an array

#include <stdio.h>
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    int i, j, minidx, temp;
    for (i = 0; i < n - 1; i++) {
        minidx = i;
          for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minidx]) {
                minidx = j;
            }
        }
          if (minidx != i) {
            temp = arr[minidx];
            arr[minidx] = arr[i];
            arr[i] = temp;
         }
    }
     printf("Sorted array: ");
     for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}