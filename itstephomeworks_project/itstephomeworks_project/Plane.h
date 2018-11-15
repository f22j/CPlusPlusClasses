#pragma once
#include <iostream>
#include "AirVehicle.h"
using namespace std;

class Plane: AirVehicle{

	int takeoffSpeed, wingsCount;
	string is_fast;

public:
	Plane();
	Plane(int takeoffSpeed, int wings, string is_fast);

	void setTakeOffSpeed();

	~Plane();
};