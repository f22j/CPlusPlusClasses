#pragma once
#include <iostream>
using namespace std;

class engine{

	float volume;
	int power;
	int cyl_count;

public:
	engine(float volume, int power, int cyl_count);

	void print() const;

	float get_volume() const;
	int get_power() const;
	int get_cylinder() const;

	void set_volume(float volume);
	void set_power(int power);
	void set_cylinder(int cyl_count);
};

ostream &operator<<(ostream & os, engine & en);