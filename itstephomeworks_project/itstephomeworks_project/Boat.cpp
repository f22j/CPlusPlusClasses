#include "Boat.h"

Boat::Boat(string model, Date produce_date,
	int maxSpeed, int waterDisplacment, string material)
	:WaterVehicle(model, produce_date, maxSpeed, waterDisplacment){

	this->setMaterial(material);
}

void Boat::setMaterial(string material){
	this->material = material;
}

string Boat::getMaterial() const{
	return this->material;
}