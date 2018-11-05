#include "stack.h"

Stack::Stack(int maxSize) {

	if (maxSize > 0)
		this->maxSize = maxSize;
	else
		throw exception("ERROR:STACK OVERFLOW!");

	this->arr = new string[maxSize];
	this->size = 0;

}

Stack::Stack(const Stack & obj) {

	this->arr = new string[obj.maxSize];

	for (int i = 0; i < obj.size; i++)
		this->arr[i] = obj.arr[i];

	this->size = obj.size;
	this->maxSize = obj.maxSize;

}

Stack::Stack(Stack && obj) {

	this->arr = obj.arr;
	this->maxSize = obj.maxSize;
	this->size = obj.size;

	obj.maxSize = obj.size = 0;
	this->arr = nullptr;

}

Stack & Stack::operator=(const Stack & obj) {

	if (&obj != this)
		return *this;

	this->~Stack();
	this->arr = new string[obj.maxSize];

	for (int i = 0; i < obj.size; i++)
		this->arr[i] = obj.arr[i];

	this->size = obj.size;
	this->maxSize = obj.maxSize;

	return *this;
}

bool Stack::empty()const {
	return this->size == 0;
}

int Stack::get_size()const {
	return this->size;
}

int Stack::get_maxSize() const {
	return this->maxSize;
}

void Stack::swap(Stack & second) {

	Stack temp = *this;

	this->~Stack();

	this->maxSize = second.maxSize;
	this->size = second.size;

	this->arr = new string[this->size];

	for (int i = 0; i < this->size; i++)
		this->arr[i] = second.arr[i];

	second.~Stack();
	second = temp;

}

void Stack::push(const string & appended_str) {

	if (this->size == this->maxSize)
		throw exception("ERROR: Stack overflow");

	this->arr[this->size++] = appended_str;

}

void Stack::push(string && appended_str) {

	if (this->size >= this->maxSize)
		throw exception("ERROR: Stack overflow");

	this->arr[this->size++].swap(appended_str);

}

void Stack::pop() {
	this->size--;
}

const string Stack::top() const{
	return this->arr[this->size - 1];
}

string Stack::top(){
	return this->arr[this->size - 1];
}

Stack::~Stack() {

	if (this->arr == nullptr) {

		for (int i = 0; i < this->size; i++)
			this->arr[i].~string();

		delete[] this->arr;
	}

	this->size = this->maxSize = 0;

}