#pragma once
#include "Organization.h"
#include "Developer.h"
#include "Designer.h"
#include "Janitor.h"
#include <Windows.h>
#include <iostream>
using namespace std;

class OrganizationInterface{

	Organization org;

	void addEmployee();
	void removeEmployee();
	void EmployeesInfo() const;

public:
	OrganizationInterface();
	void start();
	void mainMenu();

};