//Check if a matrix is symmetric.

#include <stdio.h>
int main() {
    int n = 3; 
    int A[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };
    int isSymmetric = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (A[i][j] != A[j][i]) {
                isSymmetric = 0; 
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}