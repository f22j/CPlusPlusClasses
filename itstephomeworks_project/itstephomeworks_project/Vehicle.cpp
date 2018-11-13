#include "Vehicle.h"

Vehicle::Vehicle(){

	this->color = "";
	this->maxSpeed = 0;
	this->model = "";
	this->produce_date = Date();

}

Vehicle::Vehicle(string color, string model, Date produce_date, int maxSpeed){

	

}

string Vehicle::getColor() const{
	return this->color;
}

string Vehicle::getModel() const{
	return this->model;
}

string Vehicle::getDate() const{
	return string();
}

int Vehicle::getMaxSpeed() const{
	return this->maxSpeed;
}

string Vehicle::getInfo() const{
	return string();
}

void Vehicle::setColor(string & color){
}

void Vehicle::setColor(string && color){
}

void Vehicle::setModel(string & model){
}

void Vehicle::setModel(string && model){
}

void Vehicle::setDate(Date & dt){
}

void Vehicle::setDate(Date && dt){
}

Vehicle::~Vehicle(){
}