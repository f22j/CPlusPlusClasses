#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Vehicle{

	string color, model;
	Date produce_date;
	int maxSpeed;

public:
	Vehicle();
	Vehicle(string color, string model, Date produce_date, int maxSpeed);
	
	string getColor() const;
	string getModel() const;

	string getDate() const;
	int getMaxSpeed() const;
	string getInfo() const;

	void setModel(string &model);
	void setModel(string &&model);

	void setDate(Date &dt);
	void setDate(Date &&dt);

	void setColor(string &color);
	void setColor(string &&color);

	void setMaxSpeed(int maxSpeed);
};