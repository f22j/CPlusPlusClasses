#pragma once
#include "Vehicle.h"
#include <iostream>
using namespace std;

enum wheelsTypes{
	UNKNOWN, SUMMER, WINTER
};

class GroundVehicle :public Vehicle{

	wheelsTypes wheelsType;

public:
	GroundVehicle(string color = "", string model = "", Date produce_date = Date(), 
		int maxSpeed = 0, wheelsTypes wheelsType = wheelsTypes(0));

	void setWheels(wheelsTypes whtype);
	wheelsTypes getWheelType() const;

};