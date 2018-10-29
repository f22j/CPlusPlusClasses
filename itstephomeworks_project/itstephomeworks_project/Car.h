#pragma once
#include <string>
#include "vector.h"
#include "engine.h"
#include "gearbox.h"
#include "wheel.h"

class Car{

	int hp, wheels_number, sizex, sizey, currpos_x, currpos_y;
	engine eng;
	gearbox gear;
	wheel *wh;
	string brand;

public:
	Car(float volume, int power, int cyl_count, GearboxType type,
		int shift, int diametr, bool weather_type, int disk_stamina, int disk_diametr, string disk_material,
		int rubber_stamina, string material, int wheels_number, int hp,
		string brand, int sizey, int sizex, int currpos_x, int currpos_y);

	Car(const Car &cr);
	Car operator=(const Car &cr);

	void set_engine(float volume, int power, int cyl_count);
	void set_gearbox(GearboxType type, int shift);
	void set_wheel(int wheel_num, const wheel &wh);
	void set_hp(int hp);
	void set_sizex(int sizex);
	void set_sizey(int sizey);

	void draw(int posx, int posy);

	void go();
	void stop();
	void go_for(int stop);
	void go_while();

	~Car();
};