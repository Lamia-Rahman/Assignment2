#ifndef SORTEDNUMBS_H_INCLUDED
#define SORTEDNUMBS_H_INCLUDED
#include<string>
#include<sstream>
using namespace std;
class SortedNumbs
{
struct NodeType {
int info = int();
string Opt;
NodeType* next = NULL;
};
public:
SortedNumbs();
~SortedNumbs();
bool IsFull();
int GetLength();
void MakeEmpty();
void PrintList();
bool IsEmpty();
int GetItem(string item, bool& found);
bool PutItem(string item,string opt);
protected:
NodeType* listData = NULL;
int length = 0;
NodeType* currentPos = NULL;
};


#endif // SORTEDNUMBS_H_INCLUDED
