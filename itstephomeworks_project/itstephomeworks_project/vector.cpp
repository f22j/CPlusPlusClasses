#include "Vector.h"

template<class T>
Vector<T>::Vector(int size) {

	if (size > 0)
		this->size = size;
	else {

		throw exception("Wrong size!");
		return;

	}

	this->arr = new T[this->size];

}

template<class T>
Vector<T>::Vector(int size, T filler) {

	if (size > 0)
		this->size = size;
	else {

		throw exception("Wrong size!");
		return;

	}

	this->arr = new T[this->size];

	for (size_t i = 0; i < this->size; i++)
		this->arr = filler;

}

template<class T>
Vector<T>::Vector(const Vector & vr) {

	this->size = vr.size;

	if (vr.size > 0)
		this->arr = new T[vr.size];

	for (size_t i = 0; i < vr.size; i++)
		this->arr[i] = vr.arr[i];

}

template<class T>
Vector<T>::Vector(Vector && vr) {

	this->size = vr.size;
	this->arr = vr.arr;

	vr.size = 0;
	vr.arr = nullptr;

}

template<class T>
Vector<T> & Vector<T>::operator=(const Vector & obj) {

	if (&obj == this)
		return;

	this->size = obj.size;
	this->arr = new T[obj.size];

	for (size_t i = 0; i < this->size; i++)
		this->arr[i] = obj.arr[i];

	return *this;
}

template<class T>
Vector<T> & Vector<T>::operator=(Vector && obj) {

	if (&obj == this)
		return;

	this->size = obj.size;
	this->arr = new T[obj.size];

	for (size_t i = 0; i < this->size; i++)
		this->arr[i] = obj.arr[i];

	obj.arr = nullptr;
	obj.size = 0;

	return *this;
}

template<class T>
bool Vector<T>::empty() const {
	return this->arr == nullptr;
}

template<class T>
int Vector<T>::get_size() const {
	return this->size;
}

template<class T>
void Vector<T>::clear() {
	this->~Vector();
}

template<class T>
void Vector<T>::print() const {

	for (size_t i = 0; i < this->size; i++)
		cout << this->arr[i] << " ";

	cout << endl;
}

template<class T>
void Vector<T>::insert(int pos, int number) {

	if (this->arr == nullptr && this->size == 0 && pos > this->size && pos < 0)
		return;

	this->size++;
	T *tmp = new T[this->size];

	for (int i = 0; i < pos; i++)
		tmp[i] = this->arr[i];

	tmp[pos] = number;

	for (int i = pos + 1; i < this->size - 1; i++)
		tmp[i] = this->arr[i];

	delete[] this->arr;

	this->arr = tmp;
}

template<class T>
void Vector<T>::erase(int pos) {

	if (pos > this->size || pos < 0 || arr == nullptr)
		return;

	this->size--;
	T *tmp = new T[this->size + 1];

	for (int i = 0; i < pos; i++)
		tmp[i] = this->arr[i];

	for (int i = pos; i <= this->size; i++)
		tmp[i + 1 - pos] = this->arr[i];

	delete[] this->arr;
	arr = tmp;

}

template<class T>
void Vector<T>::push_back(T number) {

	this->size++;
	T *tmp = new T[this->size];

	for (int i = 0; i < this->size - 1; i++)
		tmp[i] = this->arr[i];

	tmp[this->size - 1] = number;

	delete[] arr;
	this->arr = tmp;

}

template<class T>
void Vector<T>::pop_back() {

	T *tmp = new T[--this->size];

	for (int i = 0; i < this->size; i++)
		tmp[i] = this->arr[i];

	delete[] arr;
	arr = tmp;

}

template<class T>
void Vector<T>::fill_arr(T filler) {
}

template<class T>
int & Vector<T>::operator[](int pos) {
	return this->arr[pos];
}

template<class T>
Vector<T> Vector<T>::operator()(int start, int end) {
	
	T tmp[start + end];

	for (size_t i = start; i < end; i++)
		tmp[i] = this->arr[i];

	return tmp;
}

template<class T>
Vector<T>::~Vector() {

	delete[] this->arr;
	this->size = 0;

}

template<typename T>
istream & operator>>(istream & is, Vector<T>& vr) {
	// TODO: вставьте здесь оператор return
}