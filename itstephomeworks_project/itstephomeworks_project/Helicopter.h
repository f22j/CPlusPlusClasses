#pragma once
#include "AirVehicle.h"
#include <iostream>
using namespace std;

class Helicopter :public AirVehicle{

	int helix;

public:
	Helicopter(int helix=2);

	void setHelix(int helix);
	int getHelix() const;

};