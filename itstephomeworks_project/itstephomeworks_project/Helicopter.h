#pragma once
#include "AirVehicle.h"
#include <iostream>
using namespace std;

class Helicopter :public AirVehicle{

	int helix;

public:
	Helicopter(string color = "", string model = "",
		Date produce_date = Date(), int maxSpeed = 0, int maxAltitude = 0, int helix=2);

	void setHelix(int helix);
	int getHelix() const;

};