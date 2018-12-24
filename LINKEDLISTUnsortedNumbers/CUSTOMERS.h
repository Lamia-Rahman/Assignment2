#ifndef CUSTOMERSS_H_INCLUDED
#define CUSTOMERSS_H_INCLUDED
#include "PERSON.h"
#include "UnsortedNumbs.h"
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
};



#endif // CUSTOMERSS_H_INCLUDED
