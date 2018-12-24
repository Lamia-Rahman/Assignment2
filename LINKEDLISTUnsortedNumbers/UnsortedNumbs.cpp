#include "UnsortedNumbs.h"
#include "PERSON.h"
#include <string>
#include<iostream>
#include <exception>
using namespace std;
UnsortedType::UnsortedType(){
length = 0;
listData = NULL;
currentPos = NULL;
}
UnsortedType ::~UnsortedType(){
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
bool UnsortedType::IsFull(){
try{
NodeType* newNode = new NodeType;
delete newNode;
}
catch (std::bad_alloc exception){
return true;
}
return false;
}
int UnsortedType ::GetLength(){
return length;
}
bool UnsortedType::IsEmpty(){
return (length == 0 && listData == NULL);
}
string UnsortedType ::GetItem(string item, bool & found){
NodeType* curr = listData;
found = false;
while (curr != NULL && !found){
if (curr->info != item)
curr = curr->next;
else{
found = true;
return curr->info;
}
}
return item;
}

void UnsortedType ::ChangeOparetor(string item,string opt){
NodeType* curr = listData;
bool found = false;
while (curr != NULL && !found){
if (curr->info != item)
curr = curr->next;
else{
found = true;
curr->OPT=opt;
}
}
}

bool UnsortedType::PutItem(string item,string opt){
if (IsFull())
return false;
NodeType* newNode = new NodeType;
newNode->info = item;
newNode->OPT=opt;
newNode->next = listData;
listData = newNode;
length++;
return true;
}

void UnsortedType ::PrintList(){
    if(!IsEmpty()){
    NodeType* curr = listData;
    while(curr!=NULL){
        cout<<curr->info<<" ("<<curr->OPT<<")"<<endl;
        curr=curr->next;
    }
    }
}
