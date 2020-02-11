#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "ItemToPurchase.h"
#include "ShoppingCart.h"

int total=0;
int i =0;


ShoppingCart AddItem(ItemToPurchase item,ShoppingCart cart){


        if(i<10){
                cart.cartItems[i] = item;
        i++;
        }
        else if (i>=10){
            printf("Shopping cart is full");
        }


    return cart;
}// end of add item


ShoppingCart RemoveItem(char name[],ShoppingCart cart){
    int j=0;
    for(int i =0; i < cart.cartSize;i++){
     if(strcmp(name,cart.cartItems[i].itemName)==0){
        cart.cartItems[i] = cart.cartItems[i+1];
        j=i;
     }// end if
     }// end of for
     for(int count =j;count<cart.cartSize;count++){

        cart.cartItems[count] = cart.cartItems[count+1];
     }
 return cart;
}// end for


int GetNumItemsInCart(ShoppingCart cart){
        cart.cartSize = sizeof((cart.cartItems));
return cart.cartSize;
}

void PrintDescription(ShoppingCart cart){
for(int i =0; i<cart.cartSize;i++){
    printf("%s: %s\n",cart.cartItems[i].itemName,cart.cartItems[i].itemDescription);

}//end of for
}//end PrintDescription

int GetCostOfCart(ShoppingCart cart){
for(int i =0; i< (cart.cartSize);i++ ){
    total = total + (cart.cartItems[i].itemPrice);
}
return total;
}

void PrintTotal(ShoppingCart cart){

if(cart.cartSize==0){
        printf("Number of Items: %d\n\n",cart.cartSize);
        printf("SHOPPING CART IS EMPTY\n\n");

}// end of if

else{
    for(int i =0;i<cart.cartSize;i++){
        printf("%s %d @ %d = $%d\n",cart.cartItems[i].itemName,cart.cartItems[i].itemQuantity,
               cart.cartItems[i].itemPrice,((cart.cartItems[i].itemQuantity)*(cart.cartItems[i].itemPrice)));

    }// end of for

}// end of else
}// end of printtotal

ShoppingCart ModifyItem(ItemToPurchase item,ShoppingCart cart){
printf(" ");
return cart;
}
