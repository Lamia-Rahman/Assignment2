#ifndef CUSTOMERS_H_INCLUDED
#define CUSTOMERS_H_INCLUDED
#include "PERSON.h"
#include <forward_list>
#include <string>
using namespace std;

class CUSTOMERS: public PERSON
{
public:
	CUSTOMERS();
	CUSTOMERS(string, string, string, string, string, string, double, double, string, string, string, string);
	~CUSTOMERS();
	void print_CUSTOMERS();
	void addNumber(string,string);
	protected:
	forward_list<string>Numbers;
	forward_list<string>Oparetor;
};



#endif // CUSTOMERS_H_INCLUDED
