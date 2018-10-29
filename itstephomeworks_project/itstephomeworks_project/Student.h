#pragma once
#include <iostream>
#include "String.h"
#include "Date.h"
#include "vector.h"
using namespace std;

class Student {

	String name, group;
	Date birth_date;
	vector marks;

public:
	Student(String &name, String &group, Date &birth_date, vector &marks);

	void set_name(String &name);
	void set_group(String &group);
	void set_birth(Date &birth_date);
	void set_marks(vector &marks);
	void add_mark(int mark);

	const char *get_name() const;
	const char *get_group() const;
	vector get_marks() const;
	Date get_birth() const;

	void print() const;

};

ostream & operator<<(ostream & os, const Student & st);
istream & operator>>(istream & is, Student & st);