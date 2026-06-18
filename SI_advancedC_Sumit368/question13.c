//find the largest of three numbers
#include <stdio.h>
int main () {
int a , b , c;
printf("enter your first number");
scanf("%d",&a);
printf("enter your second number");
scanf("%d",&b);
printf("enter your third number");
scanf("%d",&c);
if(a>b && a>c)
printf("%d4 is greater",a);
else if(b > a && b > c)
printf("%d is greater",b);
else
printf("%d is greatest", c);
return 0;
}
