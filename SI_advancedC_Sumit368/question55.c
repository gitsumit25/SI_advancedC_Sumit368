//Copy one string to another without strcpy.

#include <stdio.h>
int main() {
    char source[] = "sumit chahar";
    char destination[20];
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    printf("Original: %s\n", source);
    printf("Copied: %s\n", destination);
    return 0;
}