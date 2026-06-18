#include <stdio.h>
int main()
{
 int i , temp, rm ,number , lm , rem , sumI =0 , sumO = 0 , count =0;
 number = 173;
 for( temp = number / 10 ; temp > 9 ;  temp /= 10)
 {
  rem = temp % 10 ;
  sumI = sumI + rem ;
}
   
   lm = temp % 10 ; 
   rm = number % 10 ;
   sumO = rm + lm;
   if(sumI == sumO)
   {
    printf("%d is a xylem number\n",number);
   }
   else 
   printf("Not a Xylem number\n");
  
      return 0;
}