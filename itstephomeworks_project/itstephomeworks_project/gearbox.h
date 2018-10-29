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

	GearboxType get_type() const;
	int get_shift() const;

	string get_info() const;
};

ostream &operator<<(ostream &os, const gearbox &gb);
istream &operator>>(istream &is, gearbox &gb);