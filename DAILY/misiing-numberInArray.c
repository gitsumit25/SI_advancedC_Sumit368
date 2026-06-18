#include <stdio.h>
int main () {
  int i , count = 0 , n , sum1 = 0  , sum2 = 0 , flag = 0 , missing  ;
  //  ar[9] = { 1 , 4, 2, 5, 6 ,7 ,8 ,9 };
  int ar[9];
   for( i = 1 ; i <= 9  ; i++) 
  sum1 = sum1 + i ;
  printf("enter you array: ");
  ar[0] = 0;
  for( i = 1 ; i < 9 ; i++) 
  scanf("%d",&ar[i]);
  for(i = 0 ; i < 9 ; i++)
  {
    sum2 = sum2 + ar[i];
  }
  missing = sum1 - sum2;
  printf(" missing number is %d",missing);
  return 0;
}