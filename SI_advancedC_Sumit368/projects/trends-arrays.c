#include <stdio.h>

int main () 
{
    int haspicked = 0, n = 0, m, l;
    int arqnt[1] = {0};  
    char arsize[1] = {0};

    char item_names[4][10] = {"Shirt", "T-Shirt", "Pant", "Jacket"};
    int item_prices[4]     = {900, 800, 1200, 1230};
    int item_stocks[4]     = {3, 5, 2, 1}; 

    char brand[10][15] = {"Pe", "Arrow", "LP", "US Polo", "Colors", "Gucci", "Zara", "H & M", "C & K", "Peter England"}; 
    
    printf("                    TRENDS\n\n");
    
    while(n != 3)
    {
        printf("====================== MENU ======================\n\n"); 
        printf("    1. View Inventory Stock\n");
        printf("    2. Purchase Items\n");
        printf("    3. Checkout & Exit\n\n");

        printf("[Enter your choice from 1, 2, 3]: ");
        scanf("%d", &n);

        switch(n)
        {
            case 1: 
                printf("\nAvailable Brands:\n");
                printf("--------------------------------------------------\n");
                for(int k = 0 ; k < 10; k++) {
                    printf("    %d. %s\n", k + 1, brand[k]);
                }
                printf("--------------------------------------------------\n\n");
                break;
                
            case 2: 
                printf("Enter your brand (from 1 to 10): ");
                scanf("%d", &m);
                if(m >= 1 && m <= 10) {
                    printf("\nS.No  Item        Price     Sizes     In Stock\n");
                    printf("--------------------------------------------------\n");
                    
                    for(int i = 0; i < 4; i++) {
                        printf("%d.    %s\t  %d rs    S,M,L     %d\n", 
                                i + 1, item_names[i], item_prices[i], item_stocks[i]);
                    }
                    printf("--------------------------------------------------\n");
                }
                
                printf("Enter your choice (from 1 to 4): ");
                scanf("%d", &l);
                
                if (l >= 1 && l <= 4) {
                    printf("Enter your size (S/M/L): ");
                    scanf(" %c", &arsize[0]); 
                    printf("Enter your quantity: ");
                    scanf("%d", &arqnt[0]);
                    haspicked = 1;
                    printf("\n Item added to cart. Go to menu and select 3 to checkout!\n\n");
                } else {
                    printf("\n[!] Purchase cancelled or invalid choice.\n\n");
                }
                break;

            case 3: 
                if(haspicked == 0) {
                    printf("\n[!] No item selected yet! Please buy something first.\n\n");
                } else {
                    int item_index = l - 1; 
                    
                    if((arsize[0] == 's' || arsize[0] == 'S' || arsize[0] == 'm' || arsize[0] == 'M' || arsize[0] == 'l' || arsize[0] == 'L') 
                       && arqnt[0] <= item_stocks[item_index] && arqnt[0] > 0) {
                        
                        printf("\n==================================================\n");
                        printf("          ==== TOTAL BILL = %d rs ====\n", arqnt[0] * item_prices[item_index]);
                        
                        item_stocks[item_index] -= arqnt[0];
                        
                        printf("     THANK YOU FOR PURCHASING AT TRENDS!\n");
                        printf("==================================================\n\n");
                        n = 3; 
                    } else {
                        printf("\n[!] Invalid size or quantity exceeds available stock.\n\n");
                    }
                }
                break;
                
            default: 
                printf("\n[!] Invalid input. Please choose 1, 2, or 3.\n\n"); 
                break;
        } 
    }    
    return 0;
}