#pragma once
#include "Employee.h"
#include <iostream>
using namespace std;

class Developer :public Employee{

	int languages;

public:
	Developer(string name = "VasyaPupkin", unsigned short new_age = 0, bool new_sex = true,
		int experience = 0, EducationType education = EducationType::HIGHEST, int languages = 0);

	void set_languages(int languages);
	int get_languages() const;
	float getRate() const override;

};