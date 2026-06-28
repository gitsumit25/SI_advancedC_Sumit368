//Add two numbers using pointers. 


#include <stdio.h>
int main() {
    int num1 = 20;
    int num2 = 30;
    int sum;

    int *ptr1;
    int *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;
    sum = *ptr1 + *ptr2;

    printf("Number 1: %d\n", *ptr1);
    printf("Number 2: %d\n", *ptr2);
    printf("Sum using pointers: %d\n", sum);

    return 0;
}