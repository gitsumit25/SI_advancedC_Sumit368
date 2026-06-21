#include <stdio.h>
#include <string.h>

int main() {
    char names[3][20]; // A grid for 3 names, each up to 19 characters

    for (int i = 0; i < 3; i++) {
        printf("Enter name for student %d: ", i + 1);
        
        // We pass names[i] because it points to the start of the i-th row
        fgets(names[i], 20, stdin);
        
        // Clean the newline character for that specific row
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    // Now printing them back
    for (int i = 0; i < 3; i++) {
        printf("Student %d is %s\n", i + 1, names[i]);
    }

    return 0;
}