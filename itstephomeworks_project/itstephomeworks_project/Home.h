#pragma once
#include <iostream>
#include <vector>
#include "Animal.h"

class Home{

	vector<auto_ptr<Animal>> animals;
	string name;

public:
	Home(string name="zoo");

	void add_animal(Animal *animal);
	void getInfo() const;
	void roll_call() const;

};