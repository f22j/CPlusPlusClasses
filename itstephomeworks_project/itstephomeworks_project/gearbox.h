#pragma once
#include <iostream>
#include <string>
using namespace std;

enum GearboxType{AUTO, MECH, MIXED, UNDEFINED};

class gearbox{

	GearboxType type;
	int shift;

public:
	gearbox();
	gearbox(GearboxType type, int shift);

	void set_type(GearboxType type);
	void set_shift(int shift);

	GearboxType get_type();
	int get_shift();

	string get_info();
};