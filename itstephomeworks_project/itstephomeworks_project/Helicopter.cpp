#include "Helicopter.h"

Helicopter::Helicopter(string color, string model, Date produce_date, 
	int maxSpeed, int maxAltitude, int helix)
	:AirVehicle(color, model, produce_date, maxSpeed, maxAltitude) {

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