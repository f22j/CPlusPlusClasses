#include "Animal.h"

Animal::Animal(string name, Date & dt){

	this->name = name;
	this->birth_age = dt;

}

void Animal::setName(string name){
	this->name = name;
}

void Animal::setAge(Date age){
	this->birth_age = age;
}

string Animal::getName() const{
	return this->name;
}

string Animal::getBirthDate() const{
	return this->birth_age.get_date();
}

string Animal::getInfo() const{
	return "Name:" + this->name + "\nAge" + this->getBirthDate();
}