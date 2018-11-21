#include "WaterVehicle.h"

WaterVehicle::WaterVehicle(string model, Date produce_date, 
	int maxSpeed, int waterDisplacment)
	:Vehicle("yellow", model, produce_date, maxSpeed){

	this->setDisplacment(waterDisplacment);
}

void WaterVehicle::setDisplacment(int displacment){

	if (displacment > 0)
		this->waterDisplacment = displacment;
	else
		this->waterDisplacment = 1;

}

int WaterVehicle::getDisplacment() const{
	return this->waterDisplacment;
}