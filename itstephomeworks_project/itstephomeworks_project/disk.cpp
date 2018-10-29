#include "disk.h"

disk::disk(){
	set_diametr(0);
	set_material("");
	set_stamina(0);
}

disk::disk(int diametr, string material, int stamina){

	set_diametr(diametr);
	set_material(material);
	set_stamina(stamina);

}

void disk::set_diametr(int diametr){

	if (diametr > 0)
		this->diametr = diametr;
	else
		this->diametr = 1;

}

void disk::set_stamina(int stamina){

	if (this->stamina > 0)
		this->stamina = stamina;
	else
		this->stamina = 0;
}

void disk::set_material(const char * material){
	this->material = material;
}

void disk::set_material(string material){
	this->material = material;
}

int disk::get_diametr() const {
	return this->diametr;
}

int disk::get_stamina() const{
	return this->stamina;
}

string disk::get_material() const {
	return this->material;
}

string disk::get_info() const {

	string res = "Diametr:" + to_string(diametr);
	res += "\nMaterial:" + material + "\n" + "Stamina:" + to_string(this->stamina) + "\n";
	return res;

}

void disk::rotation() {

	this->stamina--;

	if (this->stamina == 0)
		this->~disk();

}