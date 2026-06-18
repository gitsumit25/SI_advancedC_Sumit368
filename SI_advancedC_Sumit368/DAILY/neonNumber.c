#include <stdio.h>
int main () {
   int i  , sqr , sum = 0 , rem , number ; 
    // printf("enter your number: ");
    // scanf("%d" , &number);
   for( number  = 0 ; number < 100 ; number++)
   {
   sqr = number * number ;
   sum = 0;
   for ( i = sqr ; sqr > 0 ; sqr /= 10 ) {
    rem = sqr % 10 ;
    sum = sum + rem ;
   }
   if( sum == number )
   {
    printf("%d is a neon number \n" , number );
   }
   else 
   printf("%d is not a neon number\n " , number );
  }
  return 0 ;
}