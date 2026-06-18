#include <stdio.h>
int main () {
   int n, k,i ,j , z = 4  ;
   for(i = 0 ; i  <=  3 ; i ++)
   {
    for( j = 1 ; j <= i + i + 1 ; j++ )
    {
      if(j == 1)
      {
       for(k = z ; k >= 0 ; k--)
       printf(" ");
       z--;
      }
      if(i==0)
      {
       printf("*");
       j++;
       break;
      }
      else
       printf("*");
    }
    printf("\n");
   }

  return 0;
    }