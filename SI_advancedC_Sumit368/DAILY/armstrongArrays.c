#include <stdio.h>
#include <math.h>
int main () {
  int i , num , rem , temp , count1 = 0 , count2 = 0 , sum = 0 , power , ar[10];
  printf(" your first 10 armstrong numbers are: ");
   for( num = 100; num > 0 ; num++)
   {
    count1 = 0;
    sum = 0 ; temp = num ;
    for( i = temp ; temp > 0 ; temp /= 10 )
    {
      rem = temp % 10 ;
      count1++;
    }
    temp = num;
    for( i = temp ; temp > 0 ; temp /= 10)
    {
      rem = temp % 10 ;
      power = pow(rem , count1);
      sum = sum + power;
    }
    if(sum == num )
    {
       ar[count2] = num;
       count2++;
    }
    if(count2 == 10)
    break;
   }
   for(i = 0 ; i < 10 ; i++)
   printf("%d\n",ar[i]);
      return 0;
  }