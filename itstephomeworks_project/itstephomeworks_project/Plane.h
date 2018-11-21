#pragma once
#include <iostream>
#include "AirVehicle.h"
using namespace std;

class Plane :public AirVehicle{

	int wings;

public:
	Plane(string color = "", string model = "",
		Date produce_date = Date(), int maxSpeed = 0, int maxAltitude = 0, int wings = 0);

	void set_wings(int wings);
	int get_wings()const;

};