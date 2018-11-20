#include "Organization.h"

Organization::Organization(string name, int salary){

	this->name = name;

}

void Organization::addEmployee(Employee * emp){
	this->emp.push_back(unique_ptr<Employee>(emp));
}

void Organization::info() const{

	for (int i = 0; i < this->emp.size(); i++) {

		cout << this->emp[i]->human_info();
		cout << "Salary:" << this->emp[i]->getRate() * salary << endl;

	}

}

float Organization::getAllRate() const{

	float rate = 1;

	for (int i = 0; i < this->emp.size(); i++)
		rate += this->emp[i]->getRate();

	return rate;
}