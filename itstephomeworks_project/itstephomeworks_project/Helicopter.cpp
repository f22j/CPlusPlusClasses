#include "Helicopter.h"

Helicopter::Helicopter(int helix){
	this->setHelix(helix);
}

void Helicopter::setHelix(int helix){
	if (helix > 0)
		this->helix = helix;
	else
		this->helix = 2;
}

int Helicopter::getHelix() const{
	return this->helix;
}