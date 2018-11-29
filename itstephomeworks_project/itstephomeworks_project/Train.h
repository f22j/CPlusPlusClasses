#pragma once
#include "GroundVehicle.h"
#include <iostream>
using namespace std;

class Train :public GroundVehicle{

	bool onCoal;

public:
	Train(string color = "", string model = "", Date produce_date = Date(), 
		int maxSpeed = 0, wheelsTypes wheelsType = wheelsTypes(0), bool onCoal = true);

	void setCoal(bool onCoal);
	bool getCoal() const;

};