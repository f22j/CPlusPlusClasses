#pragma once
#include <iostream>
#include <string>
using namespace std;

class rubber{

	bool weather_type;
	int stamina;

public:
	rubber();
	rubber(bool weather_type, int stamina);

	void set_type(bool type);
	void set_stamina(int stamina);

	bool get_type() const;
	int get_stamina() const;
	string get_info() const;

	void rotation();

	~rubber();
};