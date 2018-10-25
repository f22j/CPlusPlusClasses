#include "engine.h"

engine::engine(float volume, int power, int cyl_count){

	this->set_volume(volume);
	this->set_power(power);
	this->set_cylinder(cyl_count);

}

void engine::print() const{

	cout << this->get_volume() << endl << this->get_power() 
		<< endl << this->get_cylinder() << endl;

}

float engine::get_volume() const{
	return volume;
}

int engine::get_power() const{
	return power;
}

int engine::get_cylinder() const{
	return cyl_count;
}

void engine::set_volume(float volume){
	if(volume > 0)
		this->volume = volume;
}

void engine::set_power(int power){
	if(power > 0)
		this->power = power;
}

void engine::set_cylinder(int cyl_count){
	if(cyl_count > 0)
		this->cyl_count = cyl_count;
}

ostream & operator<<(ostream & os, engine & en){
	en.print();
	return os;
}