//Remove duplicate elements from an array.
#include <stdio.h>
int main () {
  int i , j , k , size;
  printf("enter your array size: ");
  scanf("%d",&size);
 
  int ar[size] ;
  printf("enter you elements: ");
  for( i = 0 ; i < size ; i++)
  scanf("%d",&ar[i]);
  for( i = 0 ; i< size ; i++)
  {
    for(j = i + 1 ; j< size ; j++)
    {
      if(ar[i] == ar[j])
      {
        for( k = j ; k < size - 1 ; k++)
        ar[k] = ar[k+1];
           size--;
      j--;
      }
    }
  }
  for( i = 0 ; i < size ; i++)
  printf("%d",ar[i]);
  return 0;
}
