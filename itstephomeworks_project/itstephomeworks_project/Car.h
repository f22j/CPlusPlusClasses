#pragma once
#include <string>
#include <Windows.h>
#include "vector.h"
#include "engine.h"
#include "gearbox.h"
#include "wheel.h"

class Car{

	int wheels_number, sizex, sizey, currpos_x, currpos_y, speed;
	engine eng;
	gearbox gear;
	wheel *wh;
	string brand;

public:
	Car(float volume, int power, int cyl_count, GearboxType type,
		int shift, bool weather_type, int rubber_stamina, int disk_diametr, string disk_material,
		int disk_stamina, int wheeldiametr, int wheels_number, string brand,
		int posx, int posy, int sizex, int sizey, int speed);

	Car(const Car &cr);
	Car operator=(const Car &cr);

	void set_engine(float volume, int power, int cyl_count);
	void set_engine(const engine &eng);

	void set_gearbox(GearboxType type, int shift);
	void set_gearbox(const gearbox &gb);

	void set_wheel(int wheel_num, const wheel &wh);
	void set_wheelnum(int wheel_num);
	void add_wheel(const wheel &wh);

	void delete_wheels();

	void set_sizex(int sizex);
	void set_sizey(int sizey);

	string get_info() const;
	wheel get_wheel(int wheel_num) const;
	engine get_engine() const;
	gearbox get_gear() const;

	int get_sizex() const;
	int get_sizey() const;
	int get_posx() const;
	int get_posy() const;
	int get_speed() const;

	void set_posy(int pos);
	void set_posx(int pos);
	void set_speed(int speed);

	void draw(int posx, int posy);

	void go();
	void stop();
	void go_for(int stop);

	~Car();
};

ostream & operator<<(ostream &os, const Car &cr);
istream & operator>>(istream &is, Car &cr);