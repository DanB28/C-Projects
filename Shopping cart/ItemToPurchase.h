#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

typedef struct ItemToPurchase_struct{
char itemName[50];
char itemDescription[100];
int itemPrice;
int itemQuantity;
} ItemToPurchase;

void MakeItemBlank(ItemToPurchase* item);
void PrintItemCost(ItemToPurchase item);
void PrintItemDescription(ItemToPurchase item);

#endif // ITEM_TO_PURCHASE_H
