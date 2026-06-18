#include <stdio.h>
int main () {
   int i , j , ar[5] , min , temp ,ads;
   printf("enter your numbers:\n ");
   for(i = 0 ; i < 5 ; i++)
   scanf("%d",&ar[i]);
    
    printf("your sorted numbers are : ");
   for(i = 0 ; i < 5 ; i++)
   { 
    ads= i;
     for( j = i + 1 ; j < 5 ; j++ )
     {
      if(ar[ads] > ar[j])
      ads = j;
    }
    temp = ar[ads];
    ar[ads] = ar[i] ;
    ar[i] = temp;
   }
   for(i = 0 ; i< 5 ; i++)
   printf("%d\n",ar[i]);
return 0;
}