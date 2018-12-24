#include "CUSTOMERS.h"
#include "PERSON.h"
#include <list>
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
	Numbers.push_back(number);
	Oparetor.push_back(opt);
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
    list<int>::iterator it1=Numbers.begin();
	list<int>::iterator it2=Numbers.begin();
	while(it1!=Numbers.end() && it12=Oparetor.end()){
        cout<<*it1<<" "<<*it2<<endl;
        it1++;
        it2++;
	}
	}
}
void CUSTOMERS::addNumber(string number,string opt){
Numbers.push_back(number);
Oparetor.push_back(opt);
}
