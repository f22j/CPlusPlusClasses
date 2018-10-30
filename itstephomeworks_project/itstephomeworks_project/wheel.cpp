#include "wheel.h"

wheel::wheel(){
	this->diametr = 0;
}

wheel::wheel(int diametr, rubber r, disk d){

	set_diametr(diametr);
	set_rubber(r);
	set_disk(d);

}

void wheel::set_diametr(int diametr){

	if (diametr > 0)
		this->diametr = diametr;
	else
		this->diametr = 1;

}

void wheel::set_rubber(rubber r){
	this->r = r;
}

void wheel::set_disk(disk d){
	this->d = d;
}

int wheel::get_diametr() const{
	return this->diametr;
}

rubber wheel::get_rubber()const{
	return this->r;
}

disk wheel::get_disk()const{
	return this->d;
}

bool wheel::rotation(){

	this->r.rotation();
	this->d.rotation();

	if (this->r.get_stamina() <= 0 && this->d.get_stamina() <= 0)
		return true;
	
	return false;
}

void wheel::repair(int stamina){

	this->d.set_stamina(stamina);
	this->r.set_stamina(stamina);

}

string wheel::get_info()const{

	string res = "Diametr:" + to_string(diametr);
	res += "\nDisk:" + d.get_info() + "\nRubber:" + r.get_info() + "\n";
	return res;

}

ostream & operator<<(ostream & os, const wheel & wh){

	os << wh.get_info();
	return os;

}

istream & operator>>(istream & is, wheel & wh){

	rubber pattern_rubber;
	cout << "Rubber\n";
	is >> pattern_rubber;
	wh.set_rubber(pattern_rubber);

	disk disk_pattern;
	cout << "Disk\n";
	is >> disk_pattern;
	wh.set_disk(disk_pattern);

	int diametr;
	cout << "Write diametr:";
	is >> diametr;

	wh.set_diametr(diametr);
	return is;
}