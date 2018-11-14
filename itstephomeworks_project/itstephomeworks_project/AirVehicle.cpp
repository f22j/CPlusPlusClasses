#include "AirVehicle.h"

AirVehicle::AirVehicle(){
	this->maxAltitude = 0;
}

AirVehicle::AirVehicle(int maxAltitude){
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