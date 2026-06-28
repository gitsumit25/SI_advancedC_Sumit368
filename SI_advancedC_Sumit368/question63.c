//Remove all characters in a string except alphabets.


#include <stdio.h>
int main() {
    char str[] = "sumit  $ chahar123!@";
    char result[50];
    int i = 0, j = 0;
    while (str[i] != '\0') {
       if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            result[j] = str[i];
            j++;
        }
        i++;
    }
    result[j] = '\0';
    printf("Original: %s\n", str);
    printf("Result: %s\n", result);
    return 0;
}