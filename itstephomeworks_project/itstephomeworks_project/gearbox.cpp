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

GearboxType gearbox::get_type() const {
	return this->type;
}

int gearbox::get_shift() const {
	return this->shift;
}

string gearbox::get_info() const{
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

ostream & operator<<(ostream & os, const gearbox & gb){

	os << gb.get_info();
	return os;
}

istream & operator>>(istream & is, gearbox & gb){
	
	int gbtype;
	cout << "1.AUTO\n2.MECH\n3.MIXED\nWrite gearbox type:";
	cin >> gbtype;

	switch (gbtype) {

		case 1:
			gb.set_type(GearboxType::AUTO);
			break;

		case 2:
			gb.set_type(GearboxType::MECH);
			break;

		case 3:
			gb.set_type(GearboxType::MIXED);
			break;

		default:
			gb.set_type(GearboxType::UNDEFINED);
			break;

	}

	int shift;
	cout << "Write shift:";
	cin >> shift;

	gb.set_shift(shift);
	return is;
}
