#include "vector_.h"

vector_::vector_() {

	this->size = 0;
	this->arr = nullptr;

}

vector_::vector_(int size = 0) {

	if (size < 0) {
		this->size = 0;
		arr = nullptr;
	}

	this->size = size;
	arr = new int[size];

}

vector_::vector_(int size, int filler) {

	if (size < 0) {
		this->size = 0;
		arr = nullptr;
	}

	this->size = size;
	arr = new int[size];
	fill_arr(filler);

}

vector_::vector_(const vector_ & vr) {

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

vector_::vector_(vector_ && vr) {

	this->arr = vr.arr;
	this->size = vr.size;

	vr.arr = nullptr;
	vr.size = 0;

}

void vector_::print() const {
	for (int i = 0; i < this->size; i++)
		cout << this->arr[i] << " ";

	cout << endl;
}

bool vector_::empty() const {
	return this->size == 0;
}

int vector_::get_size() const {
	return this->size;
}

void vector_::clear() {
	this->~vector_();
}

void vector_::insert(int pos, int number) {

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

void vector_::erase(int pos) {

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

void vector_::push_back(int number) {

	this->size++;

	int *tmp = new int[this->size];

	for (int i = 0; i < this->size - 1; i++)
		tmp[i] = arr[i];

	tmp[this->size - 1] = number;

	delete[] arr;
	arr = tmp;

}

void vector_::pop_back() {

	int *tmp = new int[--this->size];

	for (int i = 0; i < this->size; i++)
		tmp[i] = this->arr[i];

	delete[] arr;
	arr = tmp;

}

void vector_::fill_arr(int filler) {

	for (int i = 0; i < this->size; i++)
		this->arr[i] = filler;

}

int & vector_::operator[](int pos) {
	return arr[pos];
}

vector_ vector_::operator()(int start, int end) {

	vector_ tmp(0);
	for (int i = 0; i < start + end; i++)
		tmp.push_back(this->arr[i]);

	return tmp;
}

vector_ vector_::operator-(vector_) {
	cout << "!";
	return *this;
}

vector_ & vector_::operator=(const vector_ & obj) {

	if (this == &obj)
		return *this;

	if (this->size == obj.size) {

		for (int i = 0; i < this->size; i++)
			this->arr[i] = obj.arr[i];
		return *this;

	}

	this->~vector_();

	if (obj.size == 0)
		return *this;

	this->size = obj.size;
	this->arr = new int[this->size];

	for (int i = 0; i < this->size; i++)
		this->arr[i] = obj.arr[i];

	return *this;
}

vector_ & vector_::operator=(vector_ && vr) {

	if (this == &vr)
		return *this;

	this->clear();

	this->arr = vr.arr;
	this->size = vr.size;

	vr.arr = nullptr;
	vr.size = 0;

	return *this;
}

vector_::~vector_() {

	if (this->arr != nullptr) {

		delete[] this->arr;
		this->arr = nullptr;
		this->size = 0;

	}

}

ostream & operator<<(ostream & os, const vector_ & vr) {

	vr.print();
	return os;

}

istream & operator>>(istream & is, vector_ & vr) {

	for (int i = 0; i < vr.get_size(); i++) {

		int x;
		cin >> x;
		vr[i] = x;

	}

	return is;
}