#include <stdio.h> 
int main () {
   int i , temp , num, k , sumI = 0 , sumO = 0 , rem , rm , lm , count = 0  , ar[15];
   for( num = 0 ; num >= 0 ; num ++ )
   {
      rem = 0;    
      sumI = 0;
      sumO = 0;
      temp = num;
      for ( i = temp / 10 ; temp > 9 ; temp /= 10 ) {
         rem = temp % 10 ;
         sumI = sumI + rem ;
      }
      lm = temp ; 
      rm = num % 10 ;
      if(num <10 )
      {
        sumO = num ;
      }
      else
      sumO = lm + rm ;
      if ( sumI == sumO ) 
    {
            ar[count] = num;
            count++;
    }
    if(count == 10)
    break ;
  }
   for(k = 0 ; k <=count - 1 ; k++)
      {
        printf("%d\n",ar[k]);
      }
      return 0;
}