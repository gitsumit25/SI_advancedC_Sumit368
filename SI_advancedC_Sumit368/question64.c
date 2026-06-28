//Find the frequency of characters in a string.


#include <stdio.h>

int main() {
    char str[] = "hulalala";
    int n = 0;
    while(str[n] != '\0') n++;
     for (int i = 0; i < n; i++) {
       int count = 0;
         for (int j = 0; j < n; j++) {
            if (str[i] == str[j]) {
            count++;
           }
        }      
     printf("'%c' appears %d times\n", str[i], count);
    }
    return 0;
}