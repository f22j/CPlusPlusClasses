#pragma once
#include "Animal.h"
#include <iostream>
using namespace std;

class Dog: public Animal{

	unsigned int love;
	mood dog_mood;

public:
	Dog(string name = "dog", Date age = Date(0, 0, 0), unsigned int love = 100, mood dog_mood = mood::HAPPY);

	void voice() override;
	string getInfo() const override;

	void setLove(unsigned int love);
	void setMood(mood dog_mood);

	int getLove() const;
	int getMood() const;
};