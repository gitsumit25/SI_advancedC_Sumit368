#include <stdio.h>
int main () 
{
  int i , j , ar1[10] , ar2[10] , ar3[10] , n1 , n2 , n3;
  printf("enter your numbers of elements in array 1:  ");
  scanf(" %d",&n1);
  printf("enter your number of elements in array 2 : ");
  scanf(" %d",&n2);
  printf("enter your numbers in array1: \n");
  for(i = 0 ; i < n1 ; i++)
  scanf("%d",&ar1[i]);
  printf("enter you elements in your array 2: ");
  for(i = 0 ; i < n2 ; i++)
  scanf("%d",&ar2[i]);
  n3 = n1 + n2 ; 
  for(i = 0 ; i < n3 ; i ++)
  {
    for(j = i + n1  ; j < n3 ; j++)
  {
    ar3[i] = ar1[i];
    ar3[j] = ar2[i];
    break;
  }  
  }
  printf("your modified array is: \n ");
  for( i = 0 ; i < n3 ;i++ )
  printf("%d ",ar3[i]);

  return 0;
}