#pragma once
#include <iostream>
using namespace std;

template<class T>
struct Element {
	T obj;
	Element<T> *next;
};

template<class T>
class LinkedList {

	Element<T> *head;
	int size;

public:
	LinkedList();

	void push_front(const T &elem);
	void push_back(const T &elem);

	void insert(int pos, const T &elem);
	void erase(int pos);

	void pop_front();
	void pop_back();

};

template<typename T>
ostream & operator<<(ostream &os, const LinkedList<T> &lst);