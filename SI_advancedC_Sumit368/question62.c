//Sort a set of strings in alphabetical order.

#include <stdio.h>

int main() {
    char arr[5][20] = {"Banana", "Apple", "Orange", "Grape", "Mango"};
    char temp[20];
    int n = 5;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int k = 0;
            int needsSwap = 0;
            while (arr[j][k] != '\0' && arr[j+1][k] != '\0') {
                if (arr[j][k] > arr[j+1][k]) {
                    needsSwap = 1;
                    break;
                } else if (arr[j][k] < arr[j+1][k]) {
                    break;
                }
                k++;
            }
                if (needsSwap) {
                int m = 0;
                while (m < 20) {
                 temp[m] = arr[j][m];
                  arr[j][m] = arr[j+1][m];
                arr[j+1][m] = temp[m];
                 m++;
             }
         }
       }
    }
   printf("Sorted strings:\n");
    for (int i = 0; i < n; i++) printf("%s\n", arr[i]);
    return 0;
}