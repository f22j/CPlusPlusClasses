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

Drob Drob::operator++(){
	this->x += this->y;
	return *this;
}

Drob Drob::operator--(){
	this->x -= this->y;
	return *this;
}

Drob Drob::operator=(int drob_value){
	
	this->x = drob_value;
	this->y = 1;
	
	return *this;
}

int Drob::get_y() const{ return y; }

void Drob::set_x(int x){
	this->x = x;
}

void Drob::set_y(int y){
	
	if (y != 0)
		this->y = y;
	else 
		this->y = 1;

}

int Drob::get_x() const{ return x; }

void Drob::print() const{
	cout << (float)x / y << endl;
}

Drob::operator double() const{
	return this->get_drob();
}

Drob::operator float() const{
	return this->get_drob();
}

Drob::operator int() const{
	return (int)get_drob();
}

Drob operator+(const Drob & a, const Drob & b){

	Drob res(a.get_x(), a.get_y());
	res += b;
	return res;

}

Drob operator-(const Drob & a, const Drob & b){

	Drob tmp(a.get_x(), a.get_y());
	tmp -= b;

	return tmp;

}

Drob operator*(const Drob & a, const Drob & b){

	Drob tmp(a.get_x(), a.get_y());
	tmp *= b;

	return tmp;

}

Drob operator/(const Drob & a, const Drob & b){

	Drob tmp(a.get_x(), a.get_y());
	tmp /= b;

	return tmp;
}

bool operator<(const Drob & a, const Drob & b){
	return a.get_drob() < b.get_drob();
}

bool operator>(const Drob & a, const Drob & b){
	return a.get_drob() > b.get_drob();
}

bool operator>=(const Drob & a, const Drob & b){
	return a.get_drob() >= b.get_drob();
}

bool operator<=(const Drob & a, const Drob & b){
	return a.get_drob() <= b.get_drob();
}

bool operator==(const Drob & a, const Drob & b){
	return a.get_drob() == b.get_drob();
}

bool operator!=(const Drob & a, const Drob & b){
	return a.get_drob() != b.get_drob();
}

float Drob::get_drob() const{
	return (float)x / y;
};