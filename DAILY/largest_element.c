#include<stdio.h>
int main () {

  int i , j , temp , sum , largest ;
  int ar[8] = { -2 , -3, 4 , -1, -2 , 1  , 5 , -3};
  for( i = 0 ; i < 8 ; i++)
  {
    for( j = i + 1 ; j <= 8 ; j++)
    {
      sum = ar[i] + ar [j];
      if(i == 0 )
      largest = sum;
     if(largest < sum )
     largest = sum ;
     break;
      }
    }
        printf("the largest sum is %d" , largest);
  return 0;
}