#pragma once
#include <iostream>
using namespace std;

#pragma once
#include <iostream>
using namespace std;

class vector_ {

	int size, *arr;

public:
	vector_();
	vector_(int size);
	vector_(int size, int filler);
	vector_(const vector_ &vr);
	vector_(vector_ &&vr);

	vector_ & operator=(const vector_ &obj);
	vector_ & operator=(vector_ &&obj);

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
	vector_ operator()(int start, int end);
	vector_ operator-(vector_);
	~vector_();

};

ostream & operator<<(ostream &os, const vector_ &vr);
istream & operator>>(istream &is, vector_ &vr);