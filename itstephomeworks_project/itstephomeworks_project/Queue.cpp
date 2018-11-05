#include "Queue.h"

void Queue::push_back(int &val){
	this->arr.push_back(val);
}

void Queue::push_back(int &&val) {
	this->arr.push_back(val);
}

void Queue::pop(){
	this->arr.pop_back();
}

int Queue::front(){
	return this->arr[0];
}

int Queue::back(){
	return this->arr[this->arr.size - 1];
}

void Queue::pop(bool toEnd){

	if (toEnd)
		arr.push_back(move(arr[0]));

	this->arr.erase(this->arr.begin());
}