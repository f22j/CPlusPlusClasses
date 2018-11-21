#include "GroundVehicle.h"

GroundVehicle::GroundVehicle(string color, string model,
	Date produce_date, int maxSpeed, wheelsTypes wheelsType)
	:Vehicle(color, model, produce_date, maxSpeed){

	this->setWheels(wheelsType);
}

void GroundVehicle::setWheels(wheelsTypes whtype){
	this->wheelsType = whtype;
}

wheelsTypes GroundVehicle::getWheelType() const{
	return this->wheelsType;
}