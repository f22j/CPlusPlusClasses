#include "Janitor.h"

Janitor::Janitor(string name, unsigned short new_age, bool new_sex, 
	int experience, EducationType education): 
	Employee(name, new_age, new_sex, experience, education){}

float Janitor::getRate() const {
	return 1;
}