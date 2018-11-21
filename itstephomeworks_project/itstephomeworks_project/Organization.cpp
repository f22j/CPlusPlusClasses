#include "Organization.h"

Organization::Organization(string name, int salary){

	this->name = name;
	this->setSalary(salary);

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

void Organization::setSalary(int salary){

	if (salary > 0)
		this->salary = salary;
	else
		this->salary = 1;

}

void Organization::setName(string name){
	this->name = name;
}

string Organization::getName() const{
	return this->name;
}

int Organization::getSalary() const{
	return this->salary;
}

int Organization::getEmployeersCount() const{
	return this->emp.size();
}

bool Organization::removeEmployeeById(int id){

	for (int i = 0; i < this->emp.size(); i++) {

		if (this->emp[i]->getId() == id) {

			this->emp.erase(this->emp.begin() + i);
			return true;

		}

	}

	return false;
}

Employee & Organization::operator[](int index){
	return *this->emp[index];
}
