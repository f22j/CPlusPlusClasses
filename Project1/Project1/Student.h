#pragma once
#include <iostream>
using namespace std;

class Student {

	char *name, *group;
	unsigned short age;
	int *marks, marks_size;
	bool sex;

public:
	Student(const char *new_name, unsigned short new_age, const char *new_group, bool new_sex, int marks_number, ...) {

		name = new char[strlen(new_name) + 1];
		strcpy_s(name, strlen(new_name) + 1, new_name);
		sex = new_sex;

		group = new char[strlen(new_group) + 1];
		strcpy_s(group, strlen(new_group) + 1, new_group);

		marks = new int[marks_number];
		int *temp_marks = &marks_number, marks_size = marks_number;

		for (int i = 0; i < marks_size; i++)marks[i] = *temp_marks;

	};

	void student_info(const char *delimeter = "\n") {

		cout << name << delimeter << age << delimeter << sex << delimeter << group << delimeter;
		for (int i = 0; i < marks_size; i++)cout << marks[i] << " ";

	}

	void set_name(const char *setted_name) {

		if (strlen(setted_name) != strlen(name)) {

			delete[] name;
			name = new char[strlen(setted_name) + 1];

		};

		strcpy_s(name, strlen(setted_name) + 1, setted_name);

	}

	void set_group(const char *setted_group) {
		if (strlen(setted_group) != strlen(group)) {

			delete[] group;
			group = new char[strlen(setted_group) + 1];

		};

		strcpy_s(group, strlen(setted_group) + 1, setted_group);
	}

	void add_mark(int added_mark) {

		if (!marks[marks_size]) {

			delete[] marks;
			marks_size++;

			marks = new int[marks_size];
			marks[marks_size - 1] = added_mark;

		};

	}

	void set_gender(bool setted_sex) {
		sex = setted_sex;
	}

	void set_age(int setted_age) {

		if (setted_age >= 0)age = setted_age;
		else age = 1;

	}

	unsigned short get_age() { return age; }
	bool get_sex() { return sex; }

	const char *get_name() { return name; }
	const char *get_group() { return group; }

	~Student() {
		delete[] name; 
		delete[] marks;
	}

};