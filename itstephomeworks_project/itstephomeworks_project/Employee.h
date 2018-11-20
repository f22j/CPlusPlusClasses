#pragma once
#include "Human.h"
#include <iostream>
using namespace std;

enum EducationType {
	HIGHEST,
	MIDDLE,
	WITHOUT
};

class Employee abstract:public Human {

	unsigned int experience;
	float rate;
	EducationType education;

public:
	Employee(string name="vasya", unsigned short new_age=0, bool new_sex=true,
		int experience=0, EducationType education=EducationType::WITHOUT);

	void setExperience(unsigned int experience);
	void setEducation(EducationType education);

	EducationType getEducation() const;
	int getExperience() const;
	virtual float getRate() const;
	string human_info() const override;

};