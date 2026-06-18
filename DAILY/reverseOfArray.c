#include <stdio.h>
int main () {
  int i , temp , j , ar[5] = {1 , 2, 3, 4 , 5 };
  for(i = 0 ; i < 5 ; i++)
  {
   for(j = 4 ; j >= 0; j--)
   {
    temp = ar[i];
    ar[i] = ar[j];
    ar[j] = temp ;
   }
  }
  for(i = 0 ; i< 5 ; i++)
  printf("%d ",ar[i]);
    return 0;
}