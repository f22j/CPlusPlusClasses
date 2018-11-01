#include "Drob_singleton.h"

Drob_s::Drob_s(int x = 0, int y = 1) {

	this->x = x;
	this->y = y;

}

int Drob_s::get_y() const { 
	return y; 
}

void Drob_s::set_x(int x) {
	this->x = x;
}

void Drob_s::set_y(int y) {

	if (y != 0)
		this->y = y;
	else
		this->y = 1;

}

int Drob_s::get_x() const { return x; }

void Drob_s::print() const {
	cout << (float)x / y << endl;
}

Drob_s::operator double() const {
	return this->get_drob();
}

Drob_s::operator float() const {
	return this->get_drob();
}

Drob_s::operator int() const {
	return (int)get_drob();
}

float Drob_s::get_drob() const{
	return (float)x / y;
}

Drob_s * Drob_s::get_instance(int x, int y) {

	if (instance == nullptr)
		instance = new Drob_s(x, y);

	return instance;
}

Drob_s::~Drob_s() {
	delete instance;
}