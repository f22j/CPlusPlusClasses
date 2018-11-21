#include "Employee.h"

int Employee::sequence = 0;

Employee::Employee(string name, unsigned short new_age, bool new_sex, 
int experience, EducationType education):Human(name, new_age, new_sex){

	this->setExperience(experience);
	this->setEducation(education);
	this->id = this->sequence++;

}

void Employee::setExperience(unsigned int experience){
	this->experience = experience;
}

void Employee::setEducation(EducationType education){
	this->education = education;
}

EducationType Employee::getEducation() const{
	return this->education;
}

int Employee::getExperience() const{
	return this->experience;
}

float Employee::getRate() const{
	
	float rate = 1;
	rate += this->getExperience() * 0.2;

	if (this->getEducation() == EducationType::HIGHEST)
		rate *= 0.5;
	return rate;

}

string Employee::human_info() const{
	return Human::human_info() + "\nExperience:" + to_string(this->experience) 
		+ "\nRate:" + to_string(this->rate) + "\n";
}

int Employee::getId() const{
	return this->id;
}