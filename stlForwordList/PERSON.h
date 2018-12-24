#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include<string>
using namespace std;
class PERSON
{
public:
	PERSON();
	PERSON(string, string, string, string, string, string, double, double, string, string);
	~PERSON();
	void set_name(string);
	void set_fathers_name(string);
	void set_mothers_name(string);
	void set_NID(string);
	void set_present_address(string);
	void set_permanent_address(string);
	void set_height(double);
	void set_weight(double);
	void set_eye_color(string);
	void set_hair_color(string);


	string get_name();
	string get_fathers_name();
	string get_mothers_name();
	string get_NID();
	string get_present_address();
	string get_permanent_address();
	double get_height();
	double get_weight();
	string get_eye_color();
	string get_hair_color();

protected:
	string name;
	string fathersName;
	string mothersName;
	string NID;
	string presentAddress;
	string permanentAddress;
	double height;
	double weight;
	string eyeColor;
	string hairColor;



};


#endif // PERSON_H_INCLUDED
