#include "Human.h"

Human::Human(string new_name, unsigned short new_age, bool new_sex){

	this->set_name(new_name);
	this->set_age(new_age);
	this->set_gender(new_sex);

}

string Human::human_info() const{
	return "Name:" + this->name + "\nAge:" + to_string(this->age) + "\nSex:" + to_string(this->sex) + "\n";
}

void Human::set_name(string & setted_name){
	this->name = setted_name;
}

void Human::set_name(string && setted_name){
	this->name = setted_name;
}

void Human::set_gender(bool setted_sex){
	this->sex = setted_sex;
}

void Human::set_age(int setted_age){

	if (setted_age > 0)
		this->age = setted_age;
	else
		throw exception("Age cant be less zero!");

}

unsigned short Human::get_age()const {
	return this->age;
}

bool Human::get_sex()const {
	return this->sex;
}

string Human::get_name()const {
	return this->name;
}