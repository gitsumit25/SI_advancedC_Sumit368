//Delete an element from a specific position.
#include <stdio.h>
int main () 
{
  int i  ,n , temp , ins , ar[10] = { 1,2 , 3, 4, 5 ,6 ,7 };
  printf("enter your index : ");
  scanf("%d",&ins);
  for( i = ins - 1; i < 9; i++)
  {
    ar[i] = ar[i + 1 ];
  }
  printf("your modified array is : \n");
  for(i = 0 ; i< 10 ; i++)
  printf("%d ",ar[i]);
  return 0;
}