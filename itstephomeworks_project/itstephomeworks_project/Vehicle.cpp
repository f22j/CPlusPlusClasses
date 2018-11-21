#include "Vehicle.h"

Vehicle::Vehicle(string color, string model, Date produce_date, int maxSpeed){

	this->setColor(color);
	this->setModel(model);
	this->setDate(produce_date);
	this->setMaxSpeed(maxSpeed);

}

string Vehicle::getColor() const{
	return this->color;
}

string Vehicle::getModel() const{
	return this->model;
}

string Vehicle::getDate() const{
	return this->produce_date.get_date();
}

int Vehicle::getMaxSpeed() const{
	return this->maxSpeed;
}

string Vehicle::getInfo() const{
	return "Color:" + this->color + "\nModel:" + this->model + "\nMax speed:" + to_string(this->maxSpeed) + "\nProduce date:"
		+ this->produce_date.get_date();
}

void Vehicle::setColor(string & color){
	this->color = color;
}

void Vehicle::setColor(string && color){
	this->color = color;
}

void Vehicle::setMaxSpeed(int maxSpeed){
	if (maxSpeed > 0)
		this->maxSpeed = maxSpeed;
	else
		this->maxSpeed = 0;
}

void Vehicle::setModel(string & model){
	this->model = model;
}

void Vehicle::setModel(string && model){
	this->model = model;
}

void Vehicle::setDate(Date & dt){
	this->produce_date = dt;
}

void Vehicle::setDate(Date && dt){
	this->produce_date = dt;
}