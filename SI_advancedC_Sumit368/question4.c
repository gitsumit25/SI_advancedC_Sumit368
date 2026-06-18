//swaping without using third variable
#include <stdio.h>
int main () {
int x , y ;
printf("your first number: ");
scanf("%d",&x);
printf("your second number: ");
scanf("%d",&y);
x = x + y ;
y = x - y ;
x = x - y ;
printf("x = %d  y = %d",x,y);
return 0;
}
