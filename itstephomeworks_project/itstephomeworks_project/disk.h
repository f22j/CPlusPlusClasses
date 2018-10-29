#pragma once
#include <iostream>
#include <string>
using namespace std;

class disk{

	int diametr, stamina;
	string material;

public:
	disk();
	disk(int diametr, string material, int stamina);

	void set_diametr(int diametr);
	void set_stamina(int stamina);

	void set_material(const char *material);
	void set_material(string material);

	int get_diametr() const;
	int get_stamina() const;
	string get_material() const;
	string get_info() const;

	void rotation();

};

ostream & operator<<(ostream & os, const disk &dk);
istream & operator>>(istream & is, disk &dk);