#include "gearbox.h"

gearbox::gearbox(){
	set_type(UNDEFINED);
	set_shift(0);
}

gearbox::gearbox(GearboxType type, int shift){

	set_type(type);
	set_shift(shift);

}

void gearbox::set_type(GearboxType type){
	this->type = type;
}

void gearbox::set_shift(int shift){

	if (shift > 0)
		this->shift = shift;
	else
		this->shift = 0;

}

GearboxType gearbox::get_type(){
	return this->type;
}

int gearbox::get_shift(){
	return this->shift;
}

string gearbox::get_info(){
	string res = "Shift:" + to_string(shift) + "\nType:";

	switch (this->type) {

		case AUTO:
			res += "AUTO\n";
			break;

		case MECH:
			res += "MECH\n";
			break;

		case MIXED:
			res += "MIXED\n";
			break;

		case UNDEFINED:
			res += "UNDEFINED\n";
			break;

	}

	return res;
}