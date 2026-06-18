#include <stdio.h>
int main ( ) {
  int i , temp , sum = 0 , sum1 = 0 , rem , product = 1  , num , count = 0 ;
  for(num = 0 ; num < 1000 ; num++)
  {
    temp = num ;
    for ( i = temp ; temp> 0 ; temp /= 10 ) {
      rem = temp % 10 ;
      count++;
    }
    for ( i = temp ; temp > 0 ; temp /= 10 ) {
      rem = temp % 10 ;
      product = product * rem ;
      sum = sum + rem ;
    if( sum == i && product == i )
    { 
      printf("%d is an Armstrong number as well as SPY number\n",i);
    }
    else
    {
      printf("%d is not an Armstrong number as well as SPY number\n",i);
    }
  }
}
  return 0;
}