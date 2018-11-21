#include "AirBalloon.h"

AirBalloon::AirBalloon(string color, string model, Date produce_date, 
	int maxSpeed, int maxAltitude, int bombs)
	:AirVehicle(color, model, produce_date, maxSpeed, maxAltitude){

	this->setBombs(bombs);
}

void AirBalloon::setBombs(int bombs){

	if (bombs > 0)
		this->bombs = bombs;
	else
		this->bombs = 1;

}

int AirBalloon::getBombs() const{
	return this->bombs;
}