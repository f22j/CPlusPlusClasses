#include "Drob_singleton.h"

Drob_singleton Drob_singleton::operator=(int drob_value){

	instance->set_x(drob_value);
	instance->set_y(1);

}

int Drob_singleton::get_x() const{
	return instance->x;
}

int Drob_singleton::get_y() const{
	return instance->y;
}

void Drob_singleton::set_x(int x){
	instance->x = x;
}

void Drob_singleton::set_y(int y){
	if (y > 0)
		instance->y = y;
	else
		instance->y = 1;
}

void Drob_singleton::print() const{
	cout << instance->get_drob();
}

Drob_singleton::operator double() const{
	return get_drob();
}

Drob_singleton::operator float() const{
	return get_drob();
}

Drob_singleton::operator int() const{
	return x / y;
}

float Drob_singleton::get_drob() const{
	return (float)x / y;
}