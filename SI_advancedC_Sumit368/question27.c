//calculate the sum of digits of a number.
#include <stdio.h>
int main () {
   int n , i , sum = 0 , rem , temp  ;
   printf("enter you number: ");
   scanf("%d",&n);
   temp = n;
   for(i = n ; n > 0 ; n /= 10)
   {
    rem = n % 10 ;
    sum = sum + rem;
   }
   printf("sum of digits of %d is %d",temp,sum);
  return 0;
}