//Print a full pyramid (triangle). 
#include <stdio.h>
int main ()
{
  for( int i  = 1 ; i <= 6 ; i++) 
  {
    for( int j = 1 ; j <= i ; j++)
    {
      for(int k = 6 ; k >= 1 ; k++)
      printf(" ");
      printf("*");
    }
  }
  return 0;
}