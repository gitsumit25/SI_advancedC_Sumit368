//find the size of diff types of datatypes ( int , char , float, double ) usinf sizeof.
#include <stdio.h>
int main () {
int n =1;
float i = 1.00;
char ch = 1;
double d = 1;
printf("the size of int datatype is %zu\n",sizeof(n));
printf("the size of float datatype is %zu\n",sizeof(i));
printf("the size of char datatype is %zu\n",sizeof(ch));
printf("the size of double datatype is %zu",sizeof(d));
return 0;
}
