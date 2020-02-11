#include <iostream>
using namespace std;
#include "Contacts.h"

ContactNode::ContactNode()
{

}

ContactNode::ContactNode(string initName, string initphoneNum, ContactNode* nextLoc)
{
  this->contactName = initName;
  this->phoneNumber = initphoneNum;
  this->nextNodePtr = nextLoc;
  return;
}

void ContactNode::InsertAfter(ContactNode* nodePtr)
{
  ContactNode* tmpNext =0;
  tmpNext = this->nextNodePtr;
  this->nextNodePtr = nodePtr;
  nodePtr-> nextNodePtr = tmpNext;
  return;
}

string ContactNode::GetName()const
{
return this->contactName;
}
string ContactNode::GetPhoneNumber()const
{
  return this->phoneNumber;
}
ContactNode* ContactNode::GetNext()
{
  return this->nextNodePtr;
}
void ContactNode::PrintContactNode()
{
  cout<<"Name: "<<this->contactName<<endl;
  cout<<"Phone number: "<<this->phoneNumber<<endl;
  return;
}
