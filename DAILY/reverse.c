#include <stdio.h>
int main () { 
  int n  , rem , temp , rev = 0 ;
  printf("enter your number : ");
  scanf("%d",&n);
  temp = n;
  while ( temp > 0) 
  {
    rem = temp % 10;
    rev = rev * 10 + rem ;
    temp = temp / 10;
  }
  printf("your reverse number  is : %d" , rev);
  return 0;
} 






