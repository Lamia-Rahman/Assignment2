#include "CUSTOMERS.h"
#include "PERSON.h"
#include "SortedNumbs.h"
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
	SortedNumbs().PutItem(number,opt);

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
	SortedNumbs().PrintList();
}
void CUSTOMERS::addNumber(string number,string opt){
SortedNumbs().PutItem(number,opt);
}
