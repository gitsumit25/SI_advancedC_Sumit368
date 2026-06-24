#include <stdio.h>
int main () 
{

  int haspicked = 0, n = 0, m , l , t , d, arsize[1] ,arqnt[1];  
  char brand[10][15] = { "Pe" , "Arrow" , "LP" , "US Polo" , "COlors" , "Gucci" , "Zara" , "H & M " , "C & K" , "Peter England"}; 
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
                        for(int k = 0 ; k < 10;k++)
                   {
                    printf("\t\t\t%d.%s\n", k + 1, brand[k]);
                   }
                   break;
      case 2 : printf("\t\t\tenter your brand (from 1 to 10): ");
               scanf("%d",&m);
               if(m>=1 && m <=10){
                 printf("\n\t\t\t\tOptions\t\tPrice\t\tsize available\t\tquantity available\n");
                 printf("\t\t\t\t1.shirt\t\t900rs\t\tS,M,L\t\t\t3\n\t\t\t\t2.T-shirt\t800rs\t\tS,M,L\t\t\t5\n\t\t\t\t3.pant\t\t1200rs\t\tS,M,L\t\t\t2\n\t\t\t\t4.jacket\t1230\t\tS,M,L\t\t\t1\n");
                }
                 printf("\t\t\tenter your choice (from 1 to 4): ");
                 scanf("%d",&l);
                 if (l != 0) {
                printf("\t\t\tEnter your size: ");
                scanf(" %c", &arsize[0]);
                printf("\t\t\tEnter your quantity: ");
                scanf("%d", &arqnt[0]);
                haspicked = 1;
                } 
                else
                 {
                    printf("\t\t\tPurchase cancelled. Returning to menu...\n");
                 }
                  break;

case 3: 
    if(haspicked == 0) {
        printf("\t\t\t[!] No item selected!\n");
    } else {
        int success = 0; 
        
        if(l == 1) {
            if((arsize[0] == 's' || arsize[0] == 'S' || arsize[0] == 'M' || arsize[0] == 'L') && arqnt[0] <= 3) {
                printf("\t\t\t==== total bill = %drs ====\n", arqnt[0] * 900);
                success = 1;
            }
        } else if(l == 2) {
            if((arsize[0] == 's' || arsize[0] == 'S' || arsize[0] == 'M' || arsize[0] == 'L') && arqnt[0] <= 5) {
                printf("\t\t\t==== total bill = %drs ====\n", arqnt[0] * 800);
                success = 1;
            }
        } else if(l == 3) {
            if((arsize[0] == 's' || arsize[0] == 'S' || arsize[0] == 'M' || arsize[0] == 'L') && arqnt[0] <= 2) {
                printf("\t\t\t==== total bill = %drs ====\n", arqnt[0] * 1200);
                success = 1;
            }
        } else if(l == 4) {
            if((arsize[0] == 's' || arsize[0] == 'S' || arsize[0] == 'M' || arsize[0] == 'L') && arqnt[0] <= 1) {
                printf("\t\t\t==== total bill = %drs ====\n", arqnt[0] * 1230);
                success = 1;
            }
        }

        if(success) {
            printf("\t\t\t========THANKYOU FOR PURCHASING AT TRENDS========\n");
            n = 3; 
        } else {
            printf("\t\t\t[!] Invalid size or out of stock.\n");
        }
    }
    break;
      default : printf("\n\n\t\t\tinvalid input, PLEASE CHOOSE FROM 1 , 2 , 3"); 
      break;
    } 
  }    
  return 0;
}