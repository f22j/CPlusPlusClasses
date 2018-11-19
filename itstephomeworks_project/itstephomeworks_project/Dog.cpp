#include "Dog.h"

Dog::Dog(string name, Date age, unsigned int love, mood dog_mood):Animal(name, age){

	this->setLove(love);
	this->setMood(dog_mood);

}

void Dog::voice(){
	cout << "Bark" << endl;
}

string Dog::getInfo() const{
	return Animal::getInfo() + "\nLove:" + to_string(this->love) + "\n";
}

void Dog::setLove(unsigned int love){
	this->love = love;
}

void Dog::setMood(mood dog_mood){
	this->dog_mood = dog_mood;
}

int Dog::getLove() const{
	return this->love;
}

int Dog::getMood() const{
	return this->dog_mood;
}