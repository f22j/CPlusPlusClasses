#include "Plane.h"

Plane::Plane(string color, string model, Date produce_date, 
	int maxSpeed, int maxAltitude, int wings):
	AirVehicle(color, model, produce_date, maxSpeed, maxAltitude){

	this->set_wings(wings);

}

void Plane::set_wings(int wings){

	if (this->wings > 0)
		this->wings = wings;
	else
		this->wings = 1;

}

int Plane::get_wings() const{
	return this->wings;
}