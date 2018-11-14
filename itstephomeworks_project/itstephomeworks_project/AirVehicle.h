#pragma once
#include <iostream>
#include "Vehicle.h"
using namespace std;

class AirVehicle: Vehicle{

	int maxAltitude;

public:
	AirVehicle();
	AirVehicle(int maxAltitude);

	void setMaxAltitude(int maxAltitude);
	int getMaxAltitude() const;
};