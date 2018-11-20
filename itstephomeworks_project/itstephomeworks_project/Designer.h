#pragma once
#include <iostream>
#include "Employee.h"
using namespace std;

class Designer : public Employee {

	unsigned int works;

public:
	Designer(string name = "DominicoAbylayhan", unsigned short new_age = 0, bool new_sex = true,
		int experience = 0, EducationType education = EducationType::WITHOUT, unsigned int works=0);

	void setWorks(unsigned int works);
	int getWorks() const;
	float getRate() const override;

};