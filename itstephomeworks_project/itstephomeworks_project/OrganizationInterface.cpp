#include "OrganizationInterface.h"

OrganizationInterface::OrganizationInterface():org("", 0){}

void OrganizationInterface::start(){

	string name;
	int salary;

	cout << "--------------Company creator--------------" << endl
		<< "Write company:";

	getline(cin, name);

	cout << "Write salary:";
	cin >> salary;

	this->org.setName(name);
	this->org.setSalary(salary);
	
	std::system("cls");
	this->org.Info();

	std::system("pause & cls");
	this->mainMenu();
}

void OrganizationInterface::mainMenu(){

	while (true) {

		cout << "-----------------" << endl
			<< "Organization controller" << endl
			<< "1) Add new employee" << endl
			<< "2) Delete employee" << endl
			<< "3) Employees info" << endl
			<< "4) Exit" << endl << endl << endl << "-----------------" << endl;

		int choice;
		cout << "Write your choice:";
		cin >> choice;
		std::system("cls");

		switch (choice) {

			case 1:
				this->addEmployee();
				break;

			case 2:
				this->removeEmployee();
				break;

			case 3:
				this->EmployeesInfo();
				break;

			case 4:
				exit(0);

			default:
				cout << "Wrong number";
				break;

		}

		std::system("cls");
	}

}

void OrganizationInterface::addEmployee() {

	cout << "Choose position" << endl
		<< "1) Programmer" << endl
		<< "2) Janitor" << endl
		<< "3) Designer" << endl;

	int position;
	cin >> position;

	string name;
	unsigned int age;
	int experience, education;
	bool sex;

	cout << "Write name:";
	cin >> name;

	cout << "Write age:";
	cin >> age;

	cout << "Write sex:";
	cin >> sex;

	cout << "Write experience:";
	cin >> experience;

	cout << "0)HIGHEST" << endl
		<< "1)MIDDLE" << endl
		<< "2)WITHOUT" << endl
		<< "Write education:";

	cin >> education;

	if (0 > education > 2){
		cout << "Wrong position!" << endl << "Try again" << endl;
		return;
	}

	switch (position) {

		case 1:
			int languages;

			cout << "Write number of languages:";
			cin >> languages;

			this->org.addEmployee(new Developer(name, age, sex, experience, 
				EducationType(education), languages));
			break;

		case 2:
			this->org.addEmployee(new Janitor(name, age, sex, experience, 
				EducationType(education)));
			break;

		case 3:
			int goodWorks;
			cout << "Write good works number:";
			cin >> goodWorks;

			this->org.addEmployee(new Designer(name, age, sex, experience,
				EducationType(education), goodWorks));
			break;
	}

}								                 

void OrganizationInterface::removeEmployee(){

	for (int i = 0; i < this->org.getEmployeersCount(); i++) {

		cout << "Id:" << this->org[i].getId()
			<< string(typeid(this->org[i]).name()).substr(6)
			<< " " << this->org.getName() << endl;

	}

	int id;
	cout << "Choose id:";
	cin >> id;

	if (!this->org.removeEmployeeById(id)) {
		cout << "Incorrect id!";
		system("pause");
	}

}

void OrganizationInterface::EmployeesInfo() const{

	try {
		this->org.Info();

	}catch(exception &exc){
		cout << "You dont have employees\n";
	}

	int id;
	cout << "Write id:";
	cin >> id;

	system("cls");

	try {
		this->org.EmployeeInfo(id - 1);

	}catch (exception &exc) {
		cout << "Wrond id!";
	}
}