#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

enum mood {
	HAPPY, SAD, ANGRY, DEFAULT
};

class Animal{

	string name;
	Date birth_age;

public:

	Animal(string name, Date &dt);
	virtual void voice() = 0;
	virtual void setName(string name);
	virtual void setAge(Date age);

	virtual string getName() const;
	virtual string getBirthDate() const;
	virtual string getInfo() const;

};