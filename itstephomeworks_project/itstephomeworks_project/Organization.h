#pragma once
#include <iostream>
#include <vector>
#include "Employee.h"
using namespace std;

class Organization {

	string name;
	int salary;
	vector<unique_ptr<Employee>> emp;

public:
	Organization(string name, int salary);
	void addEmployee(Employee *emp);

	void EmployeeInfo(int id) const;
	void Info() const;
	float getAllRate() const;

	void setSalary(int salary);
	void setName(string name);

	string getName() const;
	int getSalary() const;

	int getEmployeersCount() const;
	bool removeEmployeeById(int id);

	Employee & operator[](int index);
};