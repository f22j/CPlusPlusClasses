#include "Car.h"

Car::Car(float volume, int power, int cyl_count, GearboxType type,
	int shift, bool weather_type, int rubber_stamina, int disk_diametr, string disk_material,
	int disk_stamina, int wheeldiametr, int wheels_number, string brand, 
	int posx, int posy, int sizex, int sizey, int speed){

	eng.set_volume(volume);
	eng.set_power(power);
	eng.set_cylinder(cyl_count);

	gear.set_type(type);
	gear.set_shift(shift);

	rubber rubber_pattern(weather_type, rubber_stamina);
	disk disk_pattern(disk_diametr, disk_material, disk_stamina);
	wheel whpattern(wheeldiametr, rubber_pattern, disk_pattern);

	this->wheels_number = wheels_number;
	wh = new wheel[wheels_number];

	for (int i = 0; i < wheels_number; i++)
		wh[i] = whpattern;

	this->set_sizex(sizex);
	this->set_sizey(sizey);

	this->brand = brand;
	set_posx(posx);
	set_posy(posy);

	set_speed(speed);

}

Car::Car(const Car & cr){

	wh = new wheel[cr.wheels_number];
	this->wheels_number = cr.wheels_number;

	for (int i = 0; i < wheels_number; i++)
		wh[i] = cr.wh[i];

	eng = cr.eng;
	gear = cr.gear;
	brand = cr.brand;

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

	eng = cr.eng;
	gear = cr.gear;
	brand = cr.brand;

	this->set_sizex(cr.sizex);
	this->set_sizey(cr.sizey);

	return *this;

}

void Car::set_engine(float volume, int power, int cyl_count){

	this->eng.set_volume(volume);
	this->eng.set_power(power);
	this->eng.set_cylinder(cyl_count);

}

void Car::set_engine(const engine & eng){
	this->eng = eng;
}

void Car::set_gearbox(GearboxType type, int shift){

	this->gear.set_type(type);
	this->gear.set_shift(shift);

}

void Car::set_gearbox(const gearbox & gb){
	this->gear = gb;
}

void Car::set_wheel(int wheel_num, const wheel & wh){

	if (wheel_num > 0 && wheel_num < this->wheels_number)
		this->wh[wheels_number] = wh;
	else
		return;

}

void Car::set_wheelnum(int wheel_num){

	if (wheel_num > 0)
		this->wheels_number = wheel_num;
	else
		this->wheels_number = 0;

}

void Car::add_wheel(const wheel & wh){

	wheel *tmp_wheels = new wheel[this->wheels_number + 1];

	for (int i = 0; i < this->wheels_number - 1; i++)
		tmp_wheels[i] = this->wh[i];

	delete[] this->wh;
	this->wheels_number++;

	tmp_wheels[this->wheels_number - 1] = wh;
	this->wh = tmp_wheels;

}

void Car::delete_wheels(){
	delete[] this->wh;
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

string Car::get_info()const{

	string res = "Brand:" + this->brand + "\nEngine:" + this->eng.get_info() 
		+ "Wheels at all:" + to_string(this->wheels_number);

	for (int i = 0; i < this->wheels_number; i++) 
		res += this->wh[i].get_info();

	return res;

}

wheel Car::get_wheel(int wheel_num)const{
	
	if(wheel_num < wheels_number) 
		return this->wh[wheel_num];
}

engine Car::get_engine() const{
	return this->eng;
}

gearbox Car::get_gear() const{
	return this->gear;
}

int Car::get_sizex()const{
	return this->sizex;
}

int Car::get_sizey()const{
	return this->sizey;
}

int Car::get_posx()const{
	return this->currpos_x;
}

int Car::get_posy()const{
	return this->currpos_y;
}

int Car::get_speed()const{
	return this->speed;
}

void Car::set_posy(int pos){

	if (pos > 0)
		this->currpos_y = pos;
	else
		this->currpos_y = 0;

}

void Car::set_posx(int pos){

	if (pos > 0)
		this->currpos_x = pos;
	else
		this->currpos_x = 0;

}

void Car::set_speed(int speed){

	if (speed > 0)
		this->speed = speed;
	else
		this->speed = 0;

}

void Car::draw(int posx, int posy) {

	for (int j = 0; j < posx; j++) {
		for (int i = 0; i < posy; i++) cout << "*";
		cout << endl;
	}

}

void Car::go(){
	system("cls");

	this->currpos_x++;
	this->currpos_y++;

	draw(this->currpos_x, this->currpos_y);
	Sleep(this->speed);
}

void Car::stop(){
	draw(--this->currpos_x, this->currpos_y);
}

void Car::go_for(int stop){

	for (int i = 0; i < stop; i++)
		go();

}

ostream & operator<<(ostream & os, const Car & cr){

	os << cr.get_info();
	return os;

}

istream & operator>>(istream & is, Car & cr){

	int wheels_num;

	cout << "Engine\n";
	engine eng_pattern;
	cin >> eng_pattern;

	cr.set_engine(eng_pattern);

	cout << "Wheel\nWrite wheel number:";
	cin >> wheels_num;

	cr.set_wheelnum(wheels_num);

	wheel pattern_wheel;
	cin >> pattern_wheel;

	for (int i = 0; i < wheels_num; i++)
		cr.add_wheel(pattern_wheel);

	gearbox gear_pattern;
	cin >> gear_pattern;
	cr.set_gearbox(gear_pattern);

	return is;
}

Car::~Car(){
	delete[] this->wh;
}