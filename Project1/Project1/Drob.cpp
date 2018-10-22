#include "Drob.h"

Drob::Drob(int x = 0, int y = 1){

	this->x = x;
	this->y = y;

}

Drob Drob::operator+=(const Drob &dr) {

	this->x *= dr.y;
	this->x += dr.x;

	this->y *= dr.y;
	return *this;

}

Drob Drob::operator-=(const Drob &dr){

	this->x *= dr.y;
	this->x -= dr.x;

	this->y *= dr.y;
	return *this;

}

Drob Drob::operator*=(const Drob &dr){

	this->x *= dr.x;
	this->y *= dr.y;
	return *this;

}

Drob Drob::operator/=(const Drob &dr){

	this->x *= dr.y;
	this->y *= dr.x;
	return *this;

}

Drob Drob::operator++()
{
	this->x += this->y;
	return *this;
}

int Drob::get_y() const{ return y; }
int Drob::get_x() const{ return x; }

void Drob::print() const{
	cout << (float)x / y << endl;
}



Drob operator+(const Drob & a, const Drob & b){

	Drob res(a.get_x(), a.get_y());
	res += b;
	return res;

}

bool operator<(const Drob & a, const Drob & b)
{
	return false;
}
