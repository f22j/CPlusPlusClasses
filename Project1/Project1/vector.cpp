#include "vector.h"

vector::vector() {

	this->size = 0;
	this->arr = nullptr;

}

vector::vector(int size = 0) {

	if (size < 0) {
		this->size = 0;
		arr = nullptr;
	}

	this->size = size;
	arr = new int[size];

}

vector::vector(int size, int filler){

	if (size < 0) {
		this->size = 0;
		arr = nullptr;
	}

	this->size = size;
	arr = new int[size];
	fill_arr(filler);

}

vector::vector(const vector & vr) {

	if (vr.size == 0) {

		this->size = 0;
		this->arr = nullptr;
		return;

	}

	this->size = vr.size;
	this->arr = new int[this->size];

	for (int i = 0; i < this->size; i++)
		this->arr[i] = vr.arr[i];

}

void vector::print() const {
	for (int i = 0; i < this->size; i++)
		cout << this->arr[i] << " ";

	cout << endl;
}

bool vector::empty() const {
	return this->size == 0;
}

int vector::get_size() const {
	return this->size;
}

void vector::clear() {
	this->~vector();
}

void vector::insert(int pos, int number) {

	if (this->arr == nullptr && this->size == 0 && pos > this->size && pos < 0)
		return;

	this->size++;
	int *tmp = new int[this->size];

	for (int i = 0; i < pos; i++)
		tmp[i] = this->arr[i];

	tmp[pos] = number;

	for (int i = pos + 1; i < this->size - 1; i++)
		tmp[i] = this->arr[i];

	delete[] this->arr;

	for (int i = 0; i < this->size - 1; i++)
		this->arr[i] = tmp[i];

	delete[] tmp;
}

void vector::erase(int pos) {

	if (pos > this->size || pos < 0 || arr == nullptr)
		return;

	this->size--;
	int *tmp = new int[this->size + 1];

	for (int i = 0; i < pos; i++)
		tmp[i] = this->arr[i];

	for (int i = pos; i <= this->size; i++)
		tmp[i + 1 - pos] = this->arr[i];

	delete[] this->arr;
	arr = tmp;
}

void vector::push_back(int number) {

	this->size++;

	int *tmp = new int[this->size];

	for (int i = 0; i < this->size - 1; i++) 
		tmp[i] = arr[i];

	tmp[this->size - 1] = number;

	delete[] arr;
	arr = tmp;

}

void vector::pop_back() {

	int *tmp = new int[--this->size];

	for (int i = 0; i < this->size; i++)
		tmp[i] = this->arr[i];

	delete[] arr;
	arr = tmp;

}

void vector::fill_arr(int filler) {

	for (int i = 0; i < this->size; i++)
		this->arr[i] = filler;

}

int & vector::operator[](int pos) const {
	return arr[pos];
}


vector & vector::operator=(const vector & obj){

	if (this == &obj)
		return *this;

	if (this->size == obj.size) {

		for (int i = 0; i < this->size; i++)
			this->arr[i] = obj.arr[i];
		return *this;

	}

	this->~vector();

	if (obj.size == 0)
		return *this;

	this->size = obj.size;
	this->arr = new int[this->size];

	for (int i = 0; i < this->size; i++)
		this->arr[i] = obj.arr[i];

	return *this;
}

vector::~vector(){

	if (this->arr != nullptr) {

		delete[] this->arr;
		this->arr = nullptr;
		this->size = 0;

	}

}

ostream & operator<<(ostream & os, vector & vr){

	vr.print();
	return os;

}