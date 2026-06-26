#include <stdio.h>
#include <string.h>

struct brands {
    char brand[10][15]; 
};

struct Item {
    char name[20];
    int price;
    int qty_available;
    char sizes[10];
};

int main () 
{
    int haspicked = 0, n = 0, m, l;
    int arqnt[1] = {0};  
    char arsize[1] = {0};
    
    struct Item inventory[4] = {
        {"Shirt", 900, 3, "S,M,L"},
        {"T-Shirt", 800, 5, "S,M,L"},
        {"Pant", 1200, 2, "S,M,L"},
        {"Jacket", 1230, 1, "S,M,L"}
    };

    struct brands clothes = {
        {"Pe", "Arrow", "LP", "US Polo", "Colors", "Gucci", "Zara", "H & M", "C & K", "Peter England"}
    };

    printf("\t\t\t\t\tTRENDS\n\n");
    
    while(n != 3)
    {
        printf("\t\t\t================ MENU ================\n\n"); 
        printf("\t\t\t\t  1. View Inventory Stock\n");
        printf("\t\t\t\t  2. Purchase Items\n");
        printf("\t\t\t\t  3. Checkout & Exit\n");
        printf("\t\t\t\t  4. Admin / Seller Mode [Restock]\n\n"); 

        printf("\t\t\t[enter your choice]: ");
        scanf("%d", &n);

        switch(n)
        {
            case 1: 
                printf("\t\t\tbrands\n");
                for(int i = 0 ; i < 10 ; i++) {
                    printf("\t\t\t%d.%s\n", i + 1, clothes.brand[i]);
                }
                break;
                
            case 2: 
                printf("\t\t\tenter your brand (from 1 to 10): ");
                scanf("%d", &m);
                if(m >= 1 && m <= 10) {
                    printf("\n\t\t\t\tOptions\t\tPrice\t\tsize available\t\tquantity available\n");
                    for(int i = 0; i < 4; i++) {
                        printf("\t\t\t\t%d.%s\t\t%drsp\t\t%s\t\t\t%d\n", 
                                i + 1, inventory[i].name, inventory[i].price, inventory[i].sizes, inventory[i].qty_available);
                    }
                }
                printf("\t\t\tenter your choice (from 1 to 4): ");
                scanf("%d", &l);
                
                if (l >= 1 && l <= 4) {
                    printf("\t\t\tEnter your size: ");
                    scanf(" %c", &arsize[0]);
                    printf("\t\t\tEnter your quantity: ");
                    scanf("%d", &arqnt[0]);
                    haspicked = 1;
                } else {
                    printf("\t\t\tPurchase cancelled or invalid choice. Returning to menu...\n");
                }
                break;

            case 3: 
                if(haspicked == 0) {
                    printf("\t\t\t[!] No item selected!\n");
                } else {
                    int idx = l - 1; 
                    
                    if((arsize[0] == 's' || arsize[0] == 'S' || arsize[0] == 'm' || arsize[0] == 'M' || arsize[0] == 'l' || arsize[0] == 'L') 
                       && arqnt[0] <= inventory[idx].qty_available && arqnt[0] > 0) {
                        
                        printf("\t\t\t\t==== total bill = %drs ====\n", arqnt[0] * inventory[idx].price);
                        
                        inventory[idx].qty_available -= arqnt[0]; 
                        
                        printf("\t\t\t========THANKYOU FOR PURCHASING AT TRENDS========\n");
                        n = 3; 
                    } else {
                        printf("\t\t\t[!] Invalid size, quantity, or item out of stock.\n");
                    }
                }
                break;

            case 9: { 
                int admin_choice, item_idx, additional_qty;
                printf("\n\t\t\t================ SELLER MODE ================\n");
                printf("\t\t\t\t1. Add/Modify Item Quantity\n");
                printf("\t\t\t\t2. Back to Main Menu\n");
                printf("\t\t\t\tEnter choice: ");
                scanf("%d", &admin_choice);

                if(admin_choice == 1) {
                    printf("\n\t\t\tSelect item to update stock (1-4):\n");
                    for(int i = 0; i < 4; i++) {
                        printf("\t\t\t%d. %s (Current Stock: %d)\n", i + 1, inventory[i].name, inventory[i].qty_available);
                    }
                    printf("\t\t\tChoice: ");
                    scanf("%d", &item_idx);

                    if(item_idx >= 1 && item_idx <= 4) {
                        printf("\t\t\tEnter new quantity to add (or negative to reduce): ");
                        scanf("%d", &additional_qty);
                        
                        inventory[item_idx - 1].qty_available += additional_qty;
                        
                        if(inventory[item_idx - 1].qty_available < 0) {
                            inventory[item_idx - 1].qty_available = 0;
                        }
                        printf("\t\t\t[Success] Stock updated successfully!\n");
                    } else {
                        printf("\t\t\tInvalid item selection.\n");
                    }
                }
                break;
            }

            default: 
                printf("\n\n\t\t\tinvalid input, PLEASE CHOOSE A VALID OPTION"); 
                break;
        } 
    }    
    return 0;
}