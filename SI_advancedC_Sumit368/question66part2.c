#include <stdio.h>
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference function: *a = %d, *b = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;
    printf("Before swapByReference: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);   
    printf("After swapByReference:  x = %d, y = %d\n", x, y);
    return 0;
}