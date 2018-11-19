#include "Cat.h"

Cat::Cat(string name, Date dt, int lives, bool with_fur): Animal(name, dt){

	this->setLives(lives);
	this->setFur(with_fur);

}

void Cat::setLives(int lives){

	if (lives > 0)
		this->lives = lives;
	else
		this->lives = 0;

}

void Cat::setFur(bool fur){
	this->with_fur = fur;
}

bool Cat::getFur() const{
	return this->with_fur;
}

int Cat::getLives() const{
	return this->lives;
}

void Cat::voice(){
	cout << "MEOW" << endl;
}

string Cat::getInfo() const{
	return Animal::getInfo() + "Lives:" + to_string(this->lives) + "\nWith fur:" + to_string(this->with_fur) + "\n";
}
