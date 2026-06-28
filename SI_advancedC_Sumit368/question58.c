//Reverse a string

#include <stdio.h>
int main() {
    char str[] = "sumit chahar";
    int start = 0;
    int end = 0;
    char temp;
    while (str[end] != '\0') {
        end++;
    }
    end--; 
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}