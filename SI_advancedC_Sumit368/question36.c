//Find the sum and average of array elements.

#include <stdio.h>
int main () 
{
  float ar[5] , sum = 0 , average;
  printf("enter your array elements: ");
  for(int i = 0 ; i < 5 ; i++)
  scanf("%f",&ar[i]);
  for(int i = 0 ; i < 5 ; i++)
  {
    sum += ar[i];
    average = sum / 2;
  }
  printf("sum is %f\n",sum);
  printf("average is %f",average);
  return 0;
}