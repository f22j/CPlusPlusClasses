#pragma once
#include <iostream>
#include "AirVehicle.h"
using namespace std;

class Plane :public AirVehicle{

	int wings;

public:
	Plane(int wings=1);

	void set_wings(int wings);
	int get_wings()const;

};