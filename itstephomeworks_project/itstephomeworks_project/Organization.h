#pragma once
#include <iostream>
#include <vector>
#include "Employee.h"
using namespace std;

class Organization{

	string name;
	int salary;
	vector<unique_ptr<Employee>> emp;

public:
	Organization(string name, int salary);
	void addEmployee(Employee *emp);
	void info() const;
	float getAllRate() const;

};