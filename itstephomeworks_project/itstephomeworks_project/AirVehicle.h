#pragma once
#include <iostream>
#include "Vehicle.h"
using namespace std;

class AirVehicle: Vehicle{

	int maxAltitude;

public:
	AirVehicle(string color = "", string model = "", 
		Date produce_date = Date(), int maxSpeed = 0, int maxAltitude = 0);

	void setMaxAltitude(int maxAltitude);
	int getMaxAltitude() const;
};