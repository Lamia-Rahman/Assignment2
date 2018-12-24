#include "CUSTOMERS.h"
#include "PERSON.h"
#include "UnsortedNumbs.h"
#include <string>
#include <iostream>
using namespace std;
CUSTOMERS::CUSTOMERS()
{
}
CUSTOMERS::CUSTOMERS(string name,string fathersName, string mothersName,string NID,string presentAddress, string permanentAddress, double height,
	         double weight, string eyeColor, string hairColor,string number,string opt)
{
	this->name = name;
	this->fathersName = fathersName;
	this->mothersName = mothersName;
	this->NID = NID;
	this->presentAddress = presentAddress;
	this->permanentAddress = permanentAddress;
	this->height = height;
	this->weight = weight;
	this->eyeColor = eyeColor;
	this->hairColor =hairColor;
	UnsortedType().PutItem(number,opt);

}

CUSTOMERS::~CUSTOMERS()
{
}
void CUSTOMERS::print_CUSTOMERS(){
	cout << "Name: " << name << endl;
	cout << "Father's Name: " << fathersName << endl;
	cout << "Mother's Name: " << mothersName << endl;
	cout << "National ID: " << NID << endl;
	cout << "Present Address: " << presentAddress << endl;
	cout << "Permanent Address: " << permanentAddress << endl;
	cout << "Height: " << height << endl;
	cout << "Weight: " << weight << endl;
	cout << "Eye Color: " << eyeColor << endl;
	cout << "Hair Color: " << hairColor << endl;
	UnsortedType().PrintList();
}
void CUSTOMERS::addNumber(string number,string opt){
UnsortedType().PutItem(number,opt);
}
/*
bool CUSTOMERS::check_nid(string nId)
{
	return nId.compare(nId)==0;
}

bool CUSTOMERS::check_mobile(string mobileNumber)
{
	return numberList.search_mobile_number(mobileNumber);
}

void CUSTOMERS::print()
{
	this->print_person();
	numberList.print();
}

bool CUSTOMERS::insert_phone(string nId,string mobileNumber, string numberOperator)
{
	if (nId.compare(NID) == 0)
	{
		numberList.add_phone_number(mobileNumber, numberOperator);
		return true;

	}
	else
	{
		return false;
	}
}

void CUSTOMERS::delete_phone(string mobileNumber)
{
		numberList.remove_phone_number(mobileNumber);
}

bool CUSTOMERS::is_equal(string nId)
{
	return (nId.compare(NID) == 0);
}

bool CUSTOMERS::change_operator(string mobileNumber, string numberOperator)
{
	return numberList.change_operator(mobileNumber, numberOperator);
}

int CUSTOMERS::count_number()
{
	return numberList.get_length();
}
*/
