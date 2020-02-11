#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include "ItemToPurchase.h"


typedef struct ShoppingCart_struct{
char CustomerName[50];
int currentDate[50];
ItemToPurchase cartItems[10];
int cartSize;
} ShoppingCart;

ShoppingCart AddItem(ItemToPurchase item,ShoppingCart cart);
ShoppingCart RemoveItem(char name[],ShoppingCart cart);
ShoppingCart ModifyItem(ItemToPurchase item,ShoppingCart cart);
int GetNumItemsInCart(ShoppingCart cart);
int GetCostOfCart(ShoppingCart cart);
void PrintTotal(ShoppingCart cart);
void PrintDescription(ShoppingCart cart);

#endif // ShoppingCart_H
