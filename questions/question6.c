//calculate simple intrest and compound intrest 
#include <stdio.h>
int main () {
float t , amount , rate , p , si , ci;
printf(" enter your principal : ");
scanf("%f",&p);
printf(" enter your rate : ");
scanf("%f",&rate);
printf(" enter your time : ");
scanf("%f",&t);
si = ( p * rate * t ) / 100;
amount = p + si;
ci = amount - p ;
printf("your simple intrest is %f \n compound intrest is %f",si , ci);
return 0;
}
