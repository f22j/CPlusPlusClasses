#pragma once
#include "AirVehicle.h"
#include <iostream>
using namespace std;

class AirShip :public AirVehicle{

	bool onGas;

public:
	AirShip(string color = "", string model = "", Date produce_date = Date(), 
		int maxSpeed = 0, int maxAltitude = 0, bool onGas = true);

	void setGas(bool gas);
	bool getGas() const;

};