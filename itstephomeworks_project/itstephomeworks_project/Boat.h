#pragma once
#include "WaterVehicle.h"
#include <iostream>
using namespace std;

class Boat :public WaterVehicle{

	string material;

public:
	Boat(string model = "", Date produce_date = Date(),
		int maxSpeed = 0, int waterDisplacment = 0, string material = "wood");

	void setMaterial(string material);
	string getMaterial() const;

};