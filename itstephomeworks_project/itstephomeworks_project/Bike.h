#pragma once
#include "GroundVehicle.h"
#include <iostream>
using namespace std;


class Bike :public GroundVehicle{

	string neonHighlighter;

public:
	Bike(string color = "", string model = "", Date produce_date = Date(), 
		int maxSpeed = 0, wheelsTypes wheelsType = wheelsTypes(0), string neon = "");

	void setNeon(string neon);
	string getNeon() const;
};