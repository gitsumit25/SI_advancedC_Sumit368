//area and circumference of circle
#include <stdio.h>
int main () {
float rad , area , circumference;
printf("enter your radius");
scanf("%f",&rad);
area = 3.14 * rad * rad;
circumference = 2 * 3.14 * rad;
printf("you area is %f \n your circumference is %f",area , circumference);
return 0;
}
