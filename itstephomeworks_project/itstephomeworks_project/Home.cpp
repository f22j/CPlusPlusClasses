#include "Home.h"

Home::Home(string name){
	this->name = name;
}

void Home::add_animal(Animal * animal){
	this->animals.push_back(auto_ptr<Animal>(animal));
}

void Home::getInfo() const{

	for (int i = 0; i < this->animals.size(); i++) {

		string type = typeid(*this->animals[i]).name();
		type = type.substr(6);

		cout << type << endl << animals[i]->getInfo();

	}

}

void Home::roll_call() const {

	for (int i = 0; i < this->animals.size(); i++)
		this->animals[i]->voice();

}