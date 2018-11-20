#pragma once
#include "Employee.h"
#include <iostream>
using namespace std;

class Janitor :public Employee{

public:
	Janitor(string name = "dulat", unsigned short new_age = 0, bool new_sex = true,
		int experience = 0, EducationType education = EducationType::HIGHEST);

	float getRate() const override;
};