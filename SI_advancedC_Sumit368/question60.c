//Count the number of vowels, consonants, digits, and spaces in a string.

#include <stdio.h>

int main() {
    char str[] = "sumit chahar 123!";
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
       if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            char lower = ch;
            if (lower >= 'A' && lower <= 'Z') {
                lower = lower + 32;
            }
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
              consonants++;
            }
        } 
        else if (ch >= '0' && ch <= '9') {
            digits++;
        } 
       else if (ch == ' ') {
            spaces++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    return 0;
}