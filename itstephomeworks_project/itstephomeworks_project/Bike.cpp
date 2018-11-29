#include "Bike.h"

Bike::Bike(string color, string model, Date produce_date, 
	int maxSpeed, wheelsTypes wheelsType, string neon){

	this->setNeon(neon);
}

void Bike::setNeon(string neon){
	this->neonHighlighter = neon;
}

string Bike::getNeon() const{
	return this->neonHighlighter;
}