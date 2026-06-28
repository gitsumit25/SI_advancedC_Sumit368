//concatenate two strings without strcat.

#include <stdio.h>
int main() {
    char str1[50] = "sumit, ";
    char str2[] = "chahar";
    int i = 0, j = 0;
   while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("Concatenated string: %s\n", str1);
    return 0;
}