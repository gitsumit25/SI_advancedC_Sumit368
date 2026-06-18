#include <stdio.h>
int main ( ) {
  int i , j, max , n;
  printf("enter your number of element: ");
  scanf("%d",&n); 
  int ar[n];
  printf("enter your array : ");
  for( i = 0 ; i < n ; i++) scanf("%d", &ar[i]);
  max = ar[n - 1];
  for(i = n - 1 ; i> 0 ; i--)
  {
    if(ar[i] >= max)
    {
      max = ar[i];
    }
  
  }
    printf("%d is the leader element",max);
  return 0 ; 
}