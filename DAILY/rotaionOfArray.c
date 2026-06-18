#include <stdio.h>
int main ( ) {
 int i , j , n , count = 0 , temp ;
 printf("enter your numebr of elements : ");
 scanf("%d",&n); 
 int ar[n];

 printf("enter you array : \n");
 for(i = 0 ; i < n ; i++)
 scanf("%d",&ar[i]);
 for(i = 0 ; i < n ; i++){
  for(j = n- 1 ; j >= 0 ; j--)
  {
    if ( i != j )
    { 
      temp = ar[i];
      ar[i] = ar[j];
      ar[j] = temp;
    }
    else 
    break;
      }
 }
  for(i = 0 ; i < n ; i++)
 printf("%d ",ar[i]);
return 0;
}