#include"SortedNumbs.h"
#include <exception>
#include <iostream>
#include<string>
#include<sstream>
SortedType::SortedType(){
length = 0;
listData = NULL;
currentPos = NULL;
}
SortedType::~SortedType(){
MakeEmpty();
}
bool SortedType::IsFull(){
try{
NodeType* newNode = new NodeType;
delete newNode;
}
catch (std::bad_alloc exception){

return true;
}
return false;
}
int SortedType::GetLength(){
return length;
}
bool SortedType::IsEmpty(){
return (length == 0 && listData == NULL);
}
void SortedType::MakeEmpty(){
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
int SortedType::GetItem(string item, bool & found){
    int s=0;
   stringstream geek(item);
   geek>>s;
NodeType* curr = listData;
found = false;
while (curr != NULL && !found){
if (curr->info != s)
curr = curr->next;
else{
found = true;
return curr->info;
}
}
return s;
}

bool SortedType::PutItem(string item,string opt){

if (IsFull())
return false;
int s=0;
   stringstream geek(item);
   geek>>s;
NodeType* newNode = new NodeType;
newNode->info = s;
newNode->Opt=opt;
NodeType* curr = listData;
NodeType* prev = NULL;
bool posFound = false;
while (curr != NULL && !posFound){
if (curr->info < s){
prev = curr;
curr = curr->next;
}
else {
posFound = true;
newNode->next = curr;
if (prev == NULL){
listData = newNode;
}
else {
prev->next = newNode;
}
}
}
if (!posFound)
{
posFound = true;
newNode->next = curr;
if (prev == NULL) {
listData = newNode;
}
else {
prev->next = newNode;
}
}
length++;
return posFound;
}

void SortedNumbs::PrintList(){
    if(!IsEmpty()){
    NodeType* curr = listData;
    while(curr!=NULL){
        cout<<curr->info<<" ("<<curr->Opt<<")"<<endl;
        curr=curr->next;
    }
    }
}

