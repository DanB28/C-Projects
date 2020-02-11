#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "ItemToPurchase.h"


void MakeItemBlank(ItemToPurchase* item){
    strcpy((*item).itemName, "none");
    (*item).itemPrice = 0;
    (*item).itemQuantity = 0;
    strcpy((*item).itemDescription,"none");
}
void PrintItemCost(ItemToPurchase item){
printf("%s %d @ $%d = $%d\n",item.itemName,item.itemQuantity,item.itemPrice,(item.itemPrice *item.itemQuantity));
}

void PrintItemDescription(ItemToPurchase item){
    printf("%s: %s",item.itemName,item.itemDescription);
}

