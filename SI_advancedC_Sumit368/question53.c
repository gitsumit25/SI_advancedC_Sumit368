//Check if two matrices are equal.

#include <stdio.h>
int main() {
    int rows = 2, cols = 3;
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[2][3] = {{1, 2, 3}, {4, 5, 0}};
    int isEqual = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (A[i][j] != B[i][j]) {
                isEqual = 0;
                break; }
        }
        if (!isEqual) break;
    }
    if (isEqual) {
        printf("The matrices are equal.\n");
    } else {
        printf("The matrices are not equal.\n");
    }
    return 0;
}