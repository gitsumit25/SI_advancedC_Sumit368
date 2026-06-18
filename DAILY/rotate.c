#include<stdio.h>
int main () {

   int arr[5],i,n=5,temp,j;
 for(i=0;i<n;i++){
 for(j=n-1;j>0;i--)
 { if ( i==j)
  break;
 else {
  temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
 }




}

 }  
  for ( i=0;i<=n-1;i++)
  {
printf("%d",arr[i]);

}
 
}