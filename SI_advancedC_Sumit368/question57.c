//Compare two strings without strcmp.

#include <stdio.h>
int main() {
    char str1[] = "Apple";
    char str2[] = "Apply";
    int i = 0;
    int Equal = 1;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            Equal = 0;
            break;
        }
       i++;
    }
    if (Equal) {
        printf("The strings are identical.\n");
    } else {
        printf("The strings are different.\n");
    }
   return 0;
}