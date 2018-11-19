#pragma once
#include <iostream>
#include "Date.h"
#include "Animal.h"
using namespace std;

class Cat : public Animal {

	int lives;
	bool with_fur;

public:
	Cat(string name="cat", Date dt=Date(0, 0, 0), int lives=9, bool with_fur=true);

	void setLives(int lives=9);
	void setFur(bool fur=true);

	bool getFur() const;
	int getLives() const;

	void voice() override;
	string getInfo()const override;

};