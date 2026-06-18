

#include <stdio.h>
int main () {
  int i , indi1, ln , rn , indi , lm , sqr , sum = 0 , sumI = 0 , sumO=0 , rem ,number, temp ; 
  for( number = 0; number < 500 ; number++)
  {
    sum = 0 ; temp = number ;
    sqr = number * number ;
    sumI =0 ;
    sumI - 0 ;
    for( temp = number / 10; temp > 9 ; temp /=10)
    {
      rem = temp % 10 ;
      sumI = sumI + rem ;
    } 
     ln = temp % 10 ;
     rn = number % 10 ;
     sumO = ln + rn;
     if( sumI == sumO )
     {
      indi = 1;}
      else 
      indi = 0;
     for(i = sqr ; sqr > 0 ; sqr /= 10 )
    {
      rem = sqr % 10 ;
      sum = sum + rem ;
    }
    if( sum == number )    
    indi1 = 1 ;
    else
    indi1 = 0 ; 
    if( indi == 1 && indi1 == 1 )
    {
      printf("%d is a xylem number as well as a neon number \n" , number );
    }
    else
    printf("%d is not a xylem number as well as a neon number \n" , number );
  }    
 return 0;  
}


