#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"

ShoppingCart cart;
ItemToPurchase item;

char custname[100];
char todaysdate[100];

char PrintMenu() {
   char menuOp = ' ';
   char itemname[100];
    char itemdes[100];

   printf("MENU\n");
   printf("a - Add item to cart\n");
   printf("r - Remove item from cart\n");
   printf("c - Change item quantity\n");
   printf("i - Output items' descriptions\n");
   printf("o - Output shopping cart\n");
   printf("q - Quit\n\n");

   while (menuOp != 'a' && menuOp != 'r' && menuOp != 'c' &&
         menuOp != 'i' && menuOp != 'o' &&
         menuOp != 'q') {
      printf("Choose an option:\n");
      scanf(" %c",&menuOp);
   }

   if (menuOp == 'a') {


        printf("ADD ITEM TO CART\n");

        printf("Enter the item name:\n");
        fgets(itemname,100,stdin);
        for(int i=0; i<strlen(itemname);i++){
            if(itemname[i]=='\n'){
                itemname[i]='\0';
            }
        }
        (strcpy(item.itemName, itemname));
        printf("Enter the item description:\n");
        fgets(itemdes,100,stdin);
        for(int i=0;i<strlen(itemdes);i++){
            if(itemdes[i]=='\n'){
            itemdes[i]='\0';
        }
        }
        (strcpy(item.itemDescription, itemdes));
        printf("Enter the item price:\n");
        scanf("%d",&item.itemPrice);
        printf("Enter the item quantity:\n");
        scanf("%d",&item.itemQuantity);
        //item.itemQuantity = itemquant;
        AddItem(item,cart);
      menuOp = ' ';
   }

   else if (menuOp == 'r') {
        char name[100];
        printf("Enter name of item to remove:");
        fgets(name,100,stdin);
        RemoveItem(name,cart);
      menuOp = ' ';
   }

   else if (menuOp == 'c') {
    printf(" ");

      menuOp = ' ';
   }

   else if (menuOp == 'i') {
        PrintDescription(cart);
      menuOp = ' ';
   }

   else if (menuOp == 'o') {
    printf("OUTPUT SHOPPING CART\n");
    printf("%s's Shopping Cart - %s\n",(cart.CustomerName),(cart.currentDate));
    PrintTotal(cart);
    printf("Total: $%d\n",GetCostOfCart(cart));
      menuOp = ' ';
   }

   return menuOp;
}




int main(){
char menuOp =' ';

 printf("Enter Customer's Name:\n");
 fgets(custname,100,stdin);
 for(int i =0;i<strlen(custname);++i){
    if(custname[i]=='\n'){
        custname[i]='\0';
    }

 }
 strcpy(cart.CustomerName,custname);
 printf("Enter Today's Date:\n");
 fgets(todaysdate,100,stdin);
 strcpy(cart.currentDate,todaysdate);
printf("Customer Name: %s\nToday's Date: %s\n",cart.CustomerName,cart.currentDate);

 while (menuOp != 'q') {
      menuOp = PrintMenu(menuOp);
   }

    return 0;
}
