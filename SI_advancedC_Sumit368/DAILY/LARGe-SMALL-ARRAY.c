#include <stdio.h>
int main() {
  int temp , i , j , ar[5];
  printf("enter your 5 numbers:\n ");
  for(i = 0 ; i < 5 ; i++)
  scanf("%d",&ar[i]);
  for(i = 0 ; i < 5 ; i++)
  {
    for(j = 0 ; j < 5 - i  ; j++)
    {
      if(ar[j] > ar[j+1])
      {
        temp = ar[j];
        ar[j] = ar[j+1];
        ar[j+1] = temp;
      }
    }
  }
  printf("%d is the smallest and %d is the largest",ar[0] , ar[4]);
  return 0;
}