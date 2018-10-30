#pragma once
#include <iostream>
#include <string>
#include "rubber.h"
#include "disk.h"
using namespace std;

class wheel{

	int diametr;
	rubber r;
	disk d;

public:
	wheel();
	wheel(int diametr, rubber r, disk d);

	void set_diametr(int diametr);
	void set_rubber(rubber r);
	void set_disk(disk d);

	int get_diametr() const;
	rubber get_rubber() const;
	disk get_disk() const;

	bool rotation();
	void repair(int stamina);

	string get_info() const;
};

ostream & operator<<(ostream & os, const wheel &wh);
istream & operator>>(istream & is, wheel &wh);