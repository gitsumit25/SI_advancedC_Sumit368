//Find the largest and smallest element in an array.
#include <stdio.h>
int main () 
{
  int i , ar[5] = { 4 , 5 , 3 , 1 , 2 };
  int min = ar[0];
  int max = ar[0];
  for( i = 0 ; i < 5 ; i++)
  {
    if( ar[i] < min )
      min = ar[i];
      else if ( ar[i] > max)
      max = ar[i];

  }
  printf("your smallest number is %d\nyour largest number is %d",min, max);
  return 0;
}