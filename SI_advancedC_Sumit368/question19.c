//Calculate the factorial of a number.
#include <stdio.h>
int main() {
  int n , fact = 1 ;
  printf(" enter your number : ");
  scanf("%d",&n);
  for( int i = n ; i >= 1 ; i--)
  {
    fact = fact * i;
  }
  printf("%d is the factorial of %d", fact , n);
  return 0;
}