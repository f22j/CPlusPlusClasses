#include "Designer.h"

Designer::Designer(string name, unsigned short new_age, bool new_sex, 
	int experience, EducationType education, unsigned int works)
	:Employee(name, new_age, new_sex, experience, education){

	this->setWorks(works);
}

void Designer::setWorks(unsigned int works){
	this->works = works;
}

int Designer::getWorks() const{
	return this->works;
}

float Designer::getRate() const{
	return Employee::getRate() + this->works * 0.2;
}