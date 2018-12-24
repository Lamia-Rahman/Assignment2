#include "UnsortedCustomersList.h"
#include <exception>
#include <iostream>
template <class ItemType>
UnsortedCustomersList<ItemType>::UnsortedCustomersList(){
length = 0;
listData = NULL;
currentPos = NULL;
}
template<class ItemType>
UnsortedCustomersList<ItemType>::~UnsortedCustomersList(){
MakeEmpty();
}
template<class ItemType>
void UnsortedCustomersList<ItemType>::MakeEmpty(){
NodeType* locationToDelete = NULL;
while (listData != NULL){
locationToDelete = listData;
listData = listData->next;
if (currentPos == locationToDelete){
currentPos = currentPos->next;
}
delete locationToDelete;
length--;
}
}
template<class ItemType>
bool UnsortedCustomersList<ItemType>::IsFull(){
try{
NodeType* newNode = new NodeType;
delete newNode;
}
catch (std::bad_alloc exception){
return true;
}
return false;
}
CSE 225 (Data Structure and Algorithms) Lab
North South University
Lab 05: LinkedList based Unsorted List
template<class ItemType>
int UnsortedCustomersList<ItemType>::GetLength(){
return length;
}
template<class ItemType>
bool UnsortedCustomersList<ItemType>::IsEmpty(){
return (length == 0 && listData == NULL);
}
template<class ItemType>
ItemType UnsortedCustomersList<ItemType>::GetItem(ItemType item, bool & found){
NodeType* curr = listData;
found = false;
while (curr != NULL && !found){
if (curr->info != item)
curr = curr->next;
else{
return curr->info;
}
}
return item;
}
template<class ItemType>
bool UnsortedCustomersList<ItemType>::PutItem(ItemType item){
if (IsFull())
return false;
NodeType* newNode = new NodeType;
newNode->info = item;
newNode->next = listData;
listData = newNode;
length++;
return true;
}
template<class ItemType>
void UnsortedCustomersList<ItemType>::ResetList(){
currentPos = NULL;
}
CSE 225 (Data Structure and Algorithms) Lab
North South University
Lab 05: LinkedList based Unsorted List
template<class ItemType>
bool UnsortedCustomersList<ItemType>::DeleteItem(ItemType item){
NodeType* curr = listData;
NodeType* prev = NULL;
bool found = false;
while (curr != NULL && !found){
if (curr->info == item) {
found = true;
if (prev == NULL) {
listData = curr->next;
}
else {
prev->next = curr->next;
}
delete curr;
length--;
}
else {
prev = curr;
curr = curr->next;
}
}
return found;
}
template<class ItemType>
bool UnsortedCustomersList<ItemType>::HasNextItem(){
if (currentPos == NULL)
return (listData != NULL);
return (currentPos->next != NULL);
}
template<class ItemType>
ItemType UnsortedCustomersList<ItemType>::GetNextItem(){
currentPos = ((currentPos == NULL) ? listData : currentPos->next);
return currentPos->info;
}
