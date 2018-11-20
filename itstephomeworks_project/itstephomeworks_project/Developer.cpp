#include "Developer.h"

Developer::Developer(string name, unsigned short new_age, 
	bool new_sex, int experience, EducationType education, int languages)
	:Employee(name, new_age, new_sex, experience, education){

	this->set_languages(languages);
}

void Developer::set_languages(int languages){

	if (languages > 0)
		this->languages = languages;
	else
		throw exception("Dulat alert!");

}

int Developer::get_languages() const{
	return this->languages;
}

float Developer::getRate() const{
	return Employee::getRate() + this->languages * 2;
}
