//linear Search: Find an element in an array.

#include <stdio.h>
int main() {
  int n;
    printf("enter your number of elements: ");
    scanf("%d",&n);
    int ar[n] ;
    printf("enter your array: ");
    for(int i = 0 ; i < n ; i++)
    scanf("%d",&ar[i]);
    int target ;
    printf("enter your target : ");
    scanf("%d",&target);  
    int index = -1;
     for (int i = 0; i < n; i++) {
        if (ar[i] == target) {
            index = i;     
            break;         
        }
      }
    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found.\n");
     }
  
    return 0;
}