//Copy one array to another using pointers. 


#include <stdio.h>
int main() {
    int sourceArr[5] = {10, 20, 30, 40, 50};
    int destArr[5];
    int *srcPtr = sourceArr; 
    int *destPtr = destArr;

    for (int i = 0; i < 5; i++) {
        *(destPtr + i) = *(srcPtr + i);
    }
    printf("Destination array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(destPtr + i));
    }
    printf("\n");

    return 0;
}