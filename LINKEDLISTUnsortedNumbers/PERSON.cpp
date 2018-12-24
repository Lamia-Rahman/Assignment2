#include "PERSON.h"
#include<iostream>
using namespace std;

PERSON::PERSON()
{
	 name = "";
	 fathersName = "";
	 mothersName = "";
	 NID = "";
	 presentAddress = "";
	 permanentAddress = "";
	 height = 0.0;
	 weight = 0.0;
	 eyeColor = "";
	 hairColor = "";

}

PERSON::PERSON(string name, string fathersName, string mothersName, string NID,string presentAddress, string permanentAddress, double height, double weight, string eyeColor, string hairColor)
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
		this->hairColor = name;

}

PERSON::~PERSON()
{
	name = "";
	fathersName = "";
	mothersName = "";
	NID = "";
	presentAddress = "";
	permanentAddress = "";
	height = 0.00;
	weight = 0.00;
	eyeColor = "";
	hairColor = "";
}
void PERSON::set_name(string name)
{
	this->name = name;
}
void PERSON::set_fathers_name(string fathersName)
{
	this->fathersName = fathersName;
}
void PERSON::set_mothers_name(string mothersName)
{
	this->mothersName = mothersName;
}

void PERSON::set_NID(string NID)
{
		this->NID = NID;
}
void PERSON::set_present_address(string presentAddress)
{
	this->presentAddress = presentAddress;

}
void PERSON::set_permanent_address(string permanentAddress)
{
	this->permanentAddress = permanentAddress;

}
void PERSON::set_height(double height)
{
	this->height = height;
}
void PERSON::set_weight(double weight)
{
	this->weight = weight;
}
void PERSON::set_eye_color(string eyeColor)
{
	this->eyeColor = eyeColor;
}
void PERSON::set_hair_color(string hairColor)
{
	this->hairColor = hairColor;
}
string PERSON::get_name()
{
	return name;
}
string PERSON::get_fathers_name()
{
	return fathersName;
}
string PERSON::get_mothers_name()
{
	return mothersName;
}
string PERSON::get_NID()
{
	return NID;
}
string PERSON::get_present_address()
{
	return presentAddress;
}
string PERSON::get_permanent_address()
{
	return permanentAddress;
}
double PERSON::get_height()
{
	return height;
}
double PERSON::get_weight()
{
	return weight;
}
string PERSON::get_eye_color()
{
	return eyeColor;
}
string PERSON::get_hair_color()
{
	return hairColor;
}
/*void PERSON::print()
{
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
}
*/
