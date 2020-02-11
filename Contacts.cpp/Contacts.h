#ifndef CONTACTS_H
#define CONTACTS_H

using namespace std;

class ContactNode{
  public:
    ContactNode();
    ContactNode(string initName,string intiphoneNumber, ContactNode* nextLoc =0);
    void InsertAfter(ContactNode* nodePtr);
    string GetName() const;
    string GetPhoneNumber() const;
    ContactNode* GetNext();
    void PrintContactNode();

  private:
    string contactName;
    string phoneNumber;
    ContactNode* nextNodePtr;

};
#endif
