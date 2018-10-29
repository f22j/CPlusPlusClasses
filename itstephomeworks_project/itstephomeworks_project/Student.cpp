#include "Student.h"

Student::Student(String &name, String &group, Date &birth_date, vector &marks) {

	set_name(name);
	set_group(group);
	set_birth(birth_date);
	set_marks(marks);

}

void Student::set_name(String &name){

	if (name.get_string() != "")
		this->name = name;

}

void Student::set_group(String &group){

	if (group.get_string() != "")
		this->group = group;

}

void Student::set_birth(Date &birth_date){
	this->birth_date = birth_date;
}

void Student::set_marks(vector &marks){
	this->marks = marks;
}

void Student::add_mark(int mark){

	for (int i = 2; i < 5; i++) {

		if(mark == i)
			this->marks.push_back(mark);

	}

}

const char * Student::get_name() const{
	return this->name.get_string();
}

const char * Student::get_group() const{
	return this->group.get_string();
}

vector Student::get_marks() const{
	return this->marks;
}

Date Student::get_birth() const{
	return this->birth_date;
}

void Student::print() const{
	cout << "Name:" << this->name << "\nGroup:" << this->group 
		<< "\nBirth date:" << this->birth_date << "\nMarks:" << this->marks << endl;
}

ostream & operator<<(ostream & os, const Student & st){

	st.print();
	return os;

}

istream & operator>>(istream & is, Student & st){

	String name;
	cout << "Write name:";
	cin >> name;

	st.set_name(name);

	String group;
	cout << "Write group:";
	cin >> group;

	st.set_group(group);

	Date dt;
	cin >> dt;

	st.set_birth(dt);

	int marks_size;
	cout << "Write marks size:";
	cin >> marks_size;

	for (int i = 0; i < marks_size; i++) {

		int mark;
		cin >> mark;
		st.add_mark(mark);

	}

	return is;

}