#pragma once
#include <iostream>
using namespace std;

class Drob_s{

	int x, y;
	Drob_s(int x, int y);
	Drob_s(const Drob_s&) = delete;
	void operator=(const Drob_s&) = delete;

	static Drob_s *instance;

public:

	int get_x() const;
	int get_y() const;

	void set_x(int x);
	void set_y(int y);

	void print() const;

	operator double() const;
	operator float() const;
	operator int() const;

	float get_drob()const;

	static Drob_s *get_instance(int x, int y);
	~Drob_s();
};