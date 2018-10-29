#include "Car.h"

Car::Car(float volume, int power, int cyl_count, GearboxType type,
	int shift, int diametr, bool weather_type, int disk_stamina, 
	int disk_diametr, string disk_material, int rubber_stamina, string material, 
	int wheels_number, int hp, string brand, int sizey, int sizex,
	int currpos_x, int currpos_y){

	eng.set_volume(volume);
	eng.set_power(power);
	eng.set_cylinder(cyl_count);

	gear.set_type(type);
	gear.set_shift(shift);

	rubber rubber_pattern(weather_type, rubber_stamina);
	disk disk_pattern(disk_diametr, disk_material, disk_stamina);
	wheel whpattern(diametr, rubber_pattern, disk_pattern);

	this->wheels_number = wheels_number;
	wh = new wheel[wheels_number];

	for (int i = 0; i < wheels_number; i++)
		wh[i] = whpattern;

	this->set_hp(hp);
	this->set_sizex(sizex);
	this->set_sizey(sizey);

	this->brand = brand;
	this->currpos_y = currpos_y;
	this->currpos_x = currpos_x;

}

Car::Car(const Car & cr){

	wh = new wheel[cr.wheels_number];
	this->wheels_number = cr.wheels_number;

	for (int i = 0; i < wheels_number; i++)
		wh[i] = cr.wh[i];

	hp = cr.hp;
	eng = cr.eng;
	gear = cr.gear;
	brand = cr.brand;

	this->set_hp(cr.hp);
	this->set_sizex(cr.sizex);
	this->set_sizey(cr.sizey);

}

Car Car::operator=(const Car & cr){

	if (this == &cr)
		return *this;

	if (this->wheels_number = cr.wheels_number) {

		for (int i = 0; i < this->wheels_number; i++)
			this->wh[i] = cr.wh[i];
		return *this;

	}

	this->~Car();

	wh = new wheel[cr.wheels_number];
	this->wheels_number = cr.wheels_number;

	for (int i = 0; i < wheels_number; i++)
		wh[i] = cr.wh[i];

	hp = cr.hp;
	eng = cr.eng;
	gear = cr.gear;
	brand = cr.brand;

	this->set_hp(cr.hp);
	this->set_sizex(cr.sizex);
	this->set_sizey(cr.sizey);

	return *this;

}

void Car::set_engine(float volume, int power, int cyl_count){

	this->eng.set_volume(volume);
	this->eng.set_power(power);
	this->eng.set_cylinder(cyl_count);

}

void Car::set_gearbox(GearboxType type, int shift){

	this->gear.set_type(type);
	this->gear.set_shift(shift);

}

void Car::set_wheel(int wheel_num, const wheel & wh){

	if (wheel_num > 0 && wheel_num < this->wheels_number)
		this->wh[wheels_number] = wh;
	else
		return;

}

void Car::set_hp(int hp){

	if (hp > 0)
		this->hp = hp;
	else 
		this->hp = 0;

}

void Car::set_sizex(int sizex){

	if (sizex > 0)
		this->sizex = sizex;
	else
		this->sizex = sizex;

}

void Car::set_sizey(int sizey){

	if (sizey > 0)
		this->sizey = sizey;
	else
		this->sizey = sizey;

}

void Car::draw(int posx, int posy) {

	for (int j = sizey; j < posy; j++) {
		for (int i = 0; i < posx; i++) cout << "*";

		cout << endl;
	}

}

void Car::go(){
	system("cls");
	draw(this->currpos_x + 1, this->currpos_y);
}

void Car::stop(){
	draw(this->currpos_x - 1, this->currpos_y);
}

void Car::go_for(int stop){

	for (int i = 0; i < stop; i++)
		draw(this->currpos_x + 1, this->currpos_y);

}

void Car::go_while(){}

Car::~Car(){
	delete[] this->wh;
}