#include <stdio.h>
int main () {
  int i,num1=0,num2=1,num3;
  printf("%d",&num1);
  printf("%d",&num2);
  for(i=0;i<61;i++)
  {
    num3=num1+num2;
    num1=num2;
    num2=num3;
    printf("%d\n",&num3);
  }

  return 0;
}