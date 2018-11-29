#pragma once
#include "Vehicle.h"
#include <iostream>
using namespace std;

class WaterVehicle :public Vehicle{

	int waterDisplacment;

public:
	WaterVehicle(string model = "", Date produce_date = Date(), 
		int maxSpeed = 0, int waterDisplacment = 0);

	void setDisplacment(int displacment);
	int getDisplacment() const;

};