#include <stdio.h>
int main ()
{
  int i , temp , n , ins ,  ar[10] = { 1 , 2 , 3 , 4 , 5 , 6 , 7, 8};
  printf("enter your idex :\n");
  scanf("%d",&ins);
  printf("enter your insertion number");
  scanf("%d",&n);
  for(i = 8 ; i >= ins   ; i--)
  {
    ar[i+1] = ar[i];
  }
  ar[ins ] = n;
  printf("your modified array is: \n");
  for(i = 0 ; i < 10 ; i++)
  {
    printf("%d ",ar[i]);
  }
  return 0 ;
}