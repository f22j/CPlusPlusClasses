#pragma once
#include <iostream>
using namespace std;

class vector {

	int size, *arr;

public:
	vector();
	vector(int size);
	vector(int size, int filler);
	vector(const vector &vr);
	vector(vector &&vr);

	vector & operator=(const vector &obj);
	vector & operator=(vector &&obj);

	bool empty() const;
	int get_size() const;
	void clear();
	void print() const;

	void insert(int pos, int number);
	void erase(int pos);

	void push_back(int number);
	void pop_back();

	void fill_arr(int filler);

	int & operator[](int pos);
	vector operator()(int start, int end);
	vector operator-(vector);
	~vector();

};

ostream & operator<<(ostream &os, const vector &vr);
istream & operator>>(istream &is, vector &vr);