#pragma once
#include <iostream>
#include <string>
using namespace std;

class Human{

	string name;
	unsigned short age;
	bool sex;

public:

	Human(string new_name, unsigned short new_age, bool new_sex);
	virtual string human_info() const;

	void set_name(string &setted_name);
	void set_name(string &&setted_name);

	void set_gender(bool setted_sex);
	void set_age(int setted_age);

	unsigned short get_age() const;
	bool get_sex()const;
	string get_name()const;

};