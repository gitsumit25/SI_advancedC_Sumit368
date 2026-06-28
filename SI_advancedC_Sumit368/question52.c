//Calculate the sum of diagonal elements.

#include <stdio.h>
int main() {
    int n = 3;
    int A[3][3] = {
        {10, 2, 3},
        {4, 15, 6},
        {7, 8, 20}
    };
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += A[i][i];
    }
    printf("Sum of main diagonal elements: %d\n", sum);
    return 0;
}