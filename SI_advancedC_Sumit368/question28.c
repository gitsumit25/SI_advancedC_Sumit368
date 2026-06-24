//Find the GCD (HCF) and LCM of two numbers.
#include <stdio.h>
int main () {
  int hcf , lcm , a , b , n1 , n2 , temp;
  printf("enter your two numbers: ");
  scanf("%d %d",&n1 , &n2);
  a = n1 ;
  b = n2;
  while(b != 0)
{
  temp = b;
  b = b % a;
  a = temp;
  }
  hcf = a ;
  lcm = ( n1 * n2 ) / hcf;
  printf("hcf of %d and %d is %d",n1 , n2 , hcf);
  printf("lcm of %d and %d is %d",n1 , n2 , lcm);
  return 0;
}