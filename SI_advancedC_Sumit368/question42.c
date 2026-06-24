//Merge two arrays.
#include <stdio.h>
int main () 
{
  int i , j  , size1 , size2 , size3 ;
  printf("enter size of array 1: ");
  scanf("%d",&size1);
  int ar1[size1];
  printf("enter you array elements: ");
  for(i = 0 ; i < size1 ; i++)
  scanf("%d",&ar1[i]);
   printf("enter size of array 2: ");
  scanf("%d",&size2);
  int ar2[size2];
  printf("enter you array elements: ");
  for(i = 0 ; i < size2 ; i++)
  scanf("%d",&ar2[i]);
  size3 = size1 + size2 ;
  int ar3[size3];
  for( i = 0 ; i < size1 ; i++ )
  {
    ar3[i] = ar1[i];
  }
    for( i = 0 ; i < size2 ; i++ ){
    ar3[i+ size1] = ar2[i];
  }
  printf("your merged array is: ");
  for(i = 0 ; i < size3 ; i++)
  printf("%d ",ar3[i]);
  return 0;
}