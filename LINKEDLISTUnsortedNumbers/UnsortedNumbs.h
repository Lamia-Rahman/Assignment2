#ifndef UNSORTEDNUMBS_H_INCLUDED
#define UNSORTEDNUMBS_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class UnsortedType
{
struct NodeType {
string info ;
string OPT;
NodeType* next = NULL;
};
public:
UnsortedType();
~UnsortedType();
bool IsFull();
int GetLength();
bool IsEmpty();
string GetItem(string item, bool& found);
void ChangeOparetor(string item,string opt);
bool PutItem(string item,string opt);
void PrintList();
protected:
NodeType* listData = NULL;
int length = 0;
NodeType* currentPos = NULL;
};



#endif // UNSORTEDNUMBS_H_INCLUDED
