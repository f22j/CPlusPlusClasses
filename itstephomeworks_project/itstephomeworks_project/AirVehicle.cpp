#include "AirVehicle.h"

AirVehicle::AirVehicle(string color, string model, 
	Date produce_date, int maxSpeed, int maxAltitude):Vehicle(color, model, produce_date, maxSpeed){
	setMaxAltitude(maxAltitude);
}

void AirVehicle::setMaxAltitude(int maxAltitude){
	
	if (maxAltitude > 0)
		this->maxAltitude = maxAltitude;
	else
		this->maxAltitude = 0;

}

int AirVehicle::getMaxAltitude() const{
	return this->maxAltitude;
}