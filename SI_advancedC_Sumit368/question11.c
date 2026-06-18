//convert days into years , month.
#include <stdio.h>
int main () {
  int n;
float  years , month ;
printf(" enter your number of days:");
scanf("%d",&n);
years = n / 365;
month = n / 30;
printf("%f is the number of years \n and %f is the number of monthe",years , month);
return 0;
}
