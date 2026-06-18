#include <Stdio.h>
int main () {
  int i , n1 , n2 , n3 , j,temp;
  printf("enter you number of elements in array 1:");
  scanf("%d",&n1);  
  int ar1[n1];
   printf("enter you number of elements in array 2:");
  scanf("%d",&n2);
  int ar2[n2]; 
   n3 = n1;
   int ar3[n3];
 printf(" enter your array 1: \n");
 for(i = 0 ; i < n1 ; i++)
    scanf("%d",&ar1[i]);
  printf("enter your second array");
   for(i = 0 ; i < n2 ; i++)
    scanf("%d",&ar2[i]);
    for(i = 0 ; i < n1 ; i++)
    {
       for(j= 0 ; j < n2 ; j++)
       {
        if( ar1[i] == ar2[j]){
          temp = i;
          for(int k = 0 ; k < n3 ; k++)
          {
             ar3[k] = ar1[i];
          }
        }
       }
    }
    printf("your modified array is :\n " );
    for( i = 0 ; i< n3 ; i++)
    printf("%d ",ar3[i]);
      return 0;
}