//Check if a string is a Palindrome.

#include <stdio.h>
int main() {
    char str[] = "radar";
    int len = 0;
    int isPalindrome = 1;
    while (str[len] != '\0') {
        len++;
    }
    int start = 0;
    int end = len - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0; 
            break;
        }
        start++;
        end--;
    }
    if (isPalindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }
    return 0;
}