//Reverse a given integer

#include <stdio.h>
int main () {
   int n , i , rev = 0 , rem , temp  ;
   printf("enter you number: ");
   scanf("%d",&n);
   temp = n;
   for(i = n ; n > 0 ; n /= 10)
   {
    rem = n % 10 ;
    rev = rev * 10 + rem;
   }
   printf("reverse of %d is %d",temp,rev);
  return 0;
}