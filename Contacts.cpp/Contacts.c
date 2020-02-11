#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "Contacts.h"

void CreateContactNode(ContactNode* thisNode,char nameInit[],
                       char phoneNumInit[],ContactNode* nextLoc){
    strcpy(thisNode->contactName,nameInit);
    strcpy(thisNode->contactPhoneNum,phoneNumInit);
    thisNode->nextNodePtr=nextLoc;
    return;
    }

void InsertContactAfter(ContactNode* thisNode,ContactNode* newNode){
        ContactNode* tmpNext = NULL;

        tmpNext = thisNode->nextNodePtr;
        thisNode-> nextNodePtr = newNode;
        newNode-> nextNodePtr = tmpNext;

    }

ContactNode* GetNextContact(ContactNode* thisNode){

return thisNode->nextNodePtr;
}

void PrintContactNode(ContactNode* thisNode){
printf("Name: %s\n",thisNode->contactName);
printf("Phone number: %s\n",thisNode->contactPhoneNum);
return;
}

