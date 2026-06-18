//read an integer / float / char
#include <stdio.h>
int main () {
int a;
float b;
char ch;
printf("enter your integer ");
scanf("%d",&a);
printf("enter your float number");
scanf("%f",&b);
printf("enter your character ");
scanf(" %c",&ch);
printf(" your integer is %d \n your float number is %f \n you character is %c ",a , b, ch);
return 0;
}

