//check even or odd by the help of bitwise operators
#include <stdio.h>
int main () {
int n ;
printf("enter your number ");
scanf("%d",&n);
if(n & 1 == 1)
printf("the number is odd");
else 
printf("the number is even");
return 0;
}