#include "Bus.h"

Bus::Bus(string color, string model, Date produce_date,
	int maxSpeed, wheelsTypes wheelsType, bool schoolBus)
	:GroundVehicle(color, model, produce_date, maxSpeed, wheelsType){

	this->setBusType(schoolBus);
}

void Bus::setBusType(bool busType){
	this->schoolBus = busType;
}

bool Bus::getBusType(){
	return this->schoolBus;
}
