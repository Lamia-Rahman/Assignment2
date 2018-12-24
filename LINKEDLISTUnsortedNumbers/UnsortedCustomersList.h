#ifndef UNSORTEDCUSTOMERSLIST_H_INCLUDED
#define UNSORTEDCUSTOMERSLIST_H_INCLUDED
template <class ItemType>
class UnsortedCustomersList
{
struct NodeType {
ItemType info = ItemType();
NodeType* next = NULL;
};
public:
UnsortedCustomersList();
~UnsortedCustomersList();
bool IsFull();
int GetLength();
void MakeEmpty();
bool IsEmpty();
ItemType GetItem(ItemType item, bool& found);
bool PutItem(ItemType item);
bool DeleteItem(ItemType item);
//Iterator Operations
void ResetList();
bool HasNextItem();
ItemType GetNextItem();
//Printing List Contents
void PrintList();
private:
NodeType* listData = NULL;
int length = 0;
NodeType* currentPos = NULL;
};


#endif // UNSORTEDCUSTOMERSLIST_H_INCLUDED
