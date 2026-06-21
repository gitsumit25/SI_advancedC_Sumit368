#include <stdio.h>
int main () 
{

  int n = 0, m , l , t , d, arsize[1] ,arqnt[1];   
  printf("\t\t\t\t\tTRENDS\n\n");
  while(n!=3)
  {
     
    printf("\t\t\t================ MENU ================\n\n"); 
    printf("\t\t\t\t  1.view Inventory Stock\n");
    printf("\t\t\t\t  2.Purchase Items\n");
    printf("\t\t\t\t  3.checkout & Exit\n\n");

    printf("\t\t\t[enter your choice from 1 , 2 , 3]: ");
    scanf("%d",&n);
    
    switch( n )
    {
      case 1 : printf("\t\t\tbrands\n");
                printf("\t\t\t1.PE\n");
                printf("\t\t\t2.Arrow\n");
                printf("\t\t\t3.LP\n");
                printf("\t\t\t4.US Polo\n");
                printf("\t\t\t5.Colors\n");
                printf("\t\t\t6.gucci\n");
                printf("\t\t\t7.Zara\n");
                printf("\t\t\t8.H & M\n");
                printf("\t\t\t9.C & K\n");
                printf("\t\t\t10.Peter England\n");
                break; 
      case 2 : printf("\t\t\tenter your brand (from 1 to 10): ");
               scanf("%d",&m);
               if(m>=1 && m <=10){
                 printf("\t\t\t\tOptions\t\tPrice\t\tsize available\t\tquantity available\n");
                 printf("\t\t\t\t1.shirt\t\t900rs\t\tS,M,L\t\t\t3\n\t\t\t\t2.T-shirt\t800rs\t\tS,M,L\t\t\t5\n\t\t\t\t3.pant\t\t1200rs\t\tS,M,L\t\t\t2\n\t\t\t\t4.jacket\t1230\t\tS,M,L\t\t\t1\n");
                }
                 printf("\t\t\tenter your choice (from 1 to 4): ");
                 scanf("%d",&l);
                  printf("\t\t\t\tenter you size: ");
                  scanf(" %c",&arsize[0]);
                  printf("\t\t\t\tenter your quantity: ");
                  scanf("%d",&arqnt[0]);
                  break;

      case 3 :  if(l == 1)
               {
                if(arsize[0] == 's' || arsize[0] == 'M' || arsize[0] == 'L' && arqnt[0] <= 3){
               printf("\t\t\t==== total bill = %drs ====\n",arqnt[0]*900);
                printf("\t\t\t========THANKYOU FOR PURCHASING AT TRENDS========");   
                }
               else 
               printf("\t\t\t\tout of stock\n");
               }
               else if(l == 2)
               {
                if(arsize[0] == 's' || arsize[0] == 'M' || arsize[0] == 'L' && arqnt[0] <= 5){
                 printf("\t\t\t==== total bill = %drs ====\n",arqnt[0]*800);
                printf("\t\t\t========THANKYOU FOR PURCHASING AT TRENDS========");   
                }
               else 
               printf("\t\t\t\tout of stock\n"); 
              } 
              else if(l == 3)
               {
                if(arsize[0] == 's' || arsize[0] == 'M' || arsize[0] == 'L' && arqnt[0] <= 2){
                printf("\t\t\t==== total bill = %drs ====\n",arqnt[0]*1200);
                printf("\t\t\t========THANKYOU FOR PURCHASING AT TRENDS========");   }
               else 
               printf("\t\t\t\tout of stock\n"); 
              } 
              else if(l == 4)
               {
                if(arsize[0] == 's' || arsize[0] == 'M' || arsize[0] == 'L' && arqnt[0] <= 1){
               printf("\t\t\t==== total bill = %drs ====\n",arqnt[0]*1230);
                printf("\t\t\t========THANKYOU FOR PURCHASING AT TRENDS========");   }
               else 
               printf("\t\t\t\tout of stock\n"); 
              } 
                break;
      default : printf("\n\n\t\t\tinvalid input, PLEASE CHOOSE FROM 1 , 2 , 3"); 
      break;
    } 
  }    
  return 0;
}