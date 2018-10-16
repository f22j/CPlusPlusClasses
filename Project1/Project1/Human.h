#pragma once
#include <iostream>
using namespace std;

class Human {

	char *name;
	unsigned short age;
	bool sex;

public:

	Human(const char *new_name, unsigned short new_age, bool new_sex) {

		name = new char[strlen(new_name) + 1];
		strcpy_s(name, strlen(new_name) + 1, new_name);
		sex = new_sex;

	};

	void human_info(const char *delimeter = "\n") {

		cout << name << delimeter << age << delimeter << sex << delimeter;

	}

	void set_name(const char *setted_name){

		if (strlen(setted_name) != strlen(name)){

			delete[] name;
			name = new char[strlen(setted_name) + 1];

		};

		strcpy_s(name, strlen(setted_name) + 1, setted_name);

	}

	void set_gender(bool setted_sex){
		sex = setted_sex;
	}

	void set_age(int setted_age){

		if (setted_age >= 0)age = setted_age;
		else age = 1;

	}

	unsigned short get_age(){ return age; }

	bool get_sex(){ return sex; }

	const char *get_name(){ return name; }

	~Human(){delete[] name;}

};