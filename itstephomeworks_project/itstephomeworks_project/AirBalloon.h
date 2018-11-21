#pragma once
#include "AirVehicle.h"
#include <iostream>
#include <string>
using namespace std;

class AirBalloon: public AirVehicle{

	int bombs;

public:
	AirBalloon(string color = "", string model = "",
		Date produce_date = Date(), int maxSpeed = 0, int maxAltitude = 0, int bombs = 0);

	void setBombs(int bombs);
	int getBombs() const;

};