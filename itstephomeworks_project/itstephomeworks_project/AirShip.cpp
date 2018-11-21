#include "AirShip.h"

AirShip::AirShip(string color, string model, 
	Date produce_date, int maxSpeed, int maxAltitude, bool onGas)
	:AirVehicle(color, model, produce_date, maxSpeed, maxAltitude){

	this->setGas(onGas);

}

void AirShip::setGas(bool gas){
	this->onGas = gas;
}

bool AirShip::getGas() const{
	return this->onGas;
}
