#include "Train.h"

Train::Train(string color, string model, Date produce_date, int maxSpeed, wheelsTypes wheelsType, 
	bool onCoal):GroundVehicle(color, model, produce_date, maxSpeed, wheelsType){

	this->setCoal(onCoal);
}

void Train::setCoal(bool onCoal){
	this->onCoal = onCoal;
}

bool Train::getCoal() const{
	return this->onCoal;
}