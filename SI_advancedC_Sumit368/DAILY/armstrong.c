#include <stdio.h>
#include <math.h>
int main()  
{
  int i , count ,n , rem , temp  , power , sum;
for(i = 1 ; i <= 1000 ; i++ )
{
  count = 0 ; sum = 0 ;
  for(temp = i ; temp > 0 ; temp /= 10)
  {
    count++;
  } 
   for( temp = i ; temp > 0 ; temp /= 10) 
   {
    rem = temp % 10;
    power = round(pow(rem , count));
    sum += power;  
}
if(sum == i)
{
  printf("%d is an Armstrong number \n",i);
}
}
return 0;
}

