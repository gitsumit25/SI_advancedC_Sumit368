//Find the length of a string without using strlen.

#include <stdio.h>

int main() {
    char str[] = "sumit chahar";
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    printf("The length of the string \"%s\" is: %d\n", str, length);

    return 0;
}