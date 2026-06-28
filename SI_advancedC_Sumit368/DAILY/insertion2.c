#include <Stdio.h>
int main () {
  int  n  ,  i  ,  ins  , ind , index;
  // printf("enter your number of elements: ");
  // scanf("%d",&n);
  printf("enter your insertion position: ");
  scanf("%d",&ind);
  index = ind - 1 ;
  int ar[6] = {1 , 2 , 3 , 4 , 5};
  printf("enter your insertion  number: ");
  scanf("%d",&ins);
  for( i = 4 ; i >= index ; i--)
  {
     ar[i+1] = ar[i];
  }

  ar[index] = ins;

  printf("your modified array is: ");
  for( i = 0 ; i < 6 ; i++)
  printf("%d ",ar[i]);

  return 0;
}