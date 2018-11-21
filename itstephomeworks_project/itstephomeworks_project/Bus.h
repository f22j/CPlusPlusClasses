#pragma once
#include "GroundVehicle.h"
#include <iostream>
using namespace std;

class Bus :public GroundVehicle{

	bool schoolBus;

public:
	Bus(string color = "", string model = "", Date produce_date = Date(), 
		int maxSpeed = 0, wheelsTypes wheelsType = wheelsTypes(0), bool schoolBus = true);

	void setBusType(bool busType);
	bool getBusType();

};