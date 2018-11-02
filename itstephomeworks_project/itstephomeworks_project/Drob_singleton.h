#pragma once
#include <iostream>
using namespace std;

class Drob_singleton {

	int x, y;

	Drob_singleton(int x, int y);
	Drob_singleton(const Drob_singleton&) = delete;
	Drob_singleton operator=(const Drob_singleton&) = delete;

	static Drob_singleton *instance;

public:

	static Drob_singleton* getDrob_singleton(int x, int y) {

		if (instance == nullptr)
			instance = new Drob_singleton(x, y);

		return instance;

	}

	Drob_singleton operator=(int drob_value);

	int get_x() const;
	int get_y() const;

	void set_x(int x);
	void set_y(int y);

	void print() const;

	operator double() const;
	operator float() const;
	operator int() const;

	float get_drob()const;

	~Drob_singleton() {
		delete instance;
	}

};