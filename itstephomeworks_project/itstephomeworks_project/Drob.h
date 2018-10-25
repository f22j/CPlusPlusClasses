#pragma once
#include <iostream>
using namespace std;

class Drob{

	int x, y;

public:
	Drob(int x, int y);

	Drob operator+=(const Drob &dr);
	Drob operator-=(const Drob &dr);
	Drob operator*=(const Drob &dr);
	Drob operator/=(const Drob &dr);
	Drob operator++();

	int get_x() const;
	int get_y() const;
	
	void print() const;
	
	float get_drob() const { return (float)x / y; };

};

Drob operator+(const Drob &a, const Drob &b);
bool operator<(const Drob &a, const Drob &b);