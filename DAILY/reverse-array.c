#include <stdio.h>
int main () 
{
  int n , i , j , temp , ar[10];
  printf("enter your number of terms : ");
  scanf("%d",&n);
  printf("enter your aray : \n");
  for( i = 0 ; i < 10 ; i++)
  scanf("%d",&ar[i]);
  for( i = 0 ; i < n ; i++)
  {
    for( j = n - 1 ; j > i ; j--)
    {
      temp = ar[i];
      ar[i] = ar[j];
      ar[j] = temp;
      break;
    }
    n--;
  }
  printf("your modufued array is: \n");
  for( i = 0 ; i < 10 ; i++)
  printf("%d ",ar[i]);
  return 0;
} 