#pragma once
#include <iostream>
using namespace std;

template<class T>
class Vector {

	T *arr;
	int size;

public:
	Vector(int size);

	Vector(int size, T filler);
	Vector(const Vector &vr);
	Vector(Vector &&vr);

	Vector & operator=(const Vector &obj);
	Vector & operator=(Vector &&obj);

	bool empty() const;
	int get_size() const;
	void clear();
	void print() const;

	void insert(int pos, int number);
	void erase(int pos);

	void push_back(T number);
	void pop_back();

	void fill_arr(T filler);

	int & operator[](int pos);
	Vector operator()(int start, int end);
	~Vector();

};

template<typename T>
ostream & operator<<(ostream &os, const Vector<T> &vr);

template<typename T>
istream & operator>>(istream &is, Vector<T> &vr);