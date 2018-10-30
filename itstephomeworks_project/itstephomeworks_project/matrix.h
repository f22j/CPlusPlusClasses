#pragma once
#include <iostream>
#include <string>
using namespace std;

class matrix {

	int col_size, row_size;
	int **arr;

public:
	matrix();
	matrix(int col_size, int row_size, int filler = 0);

	matrix(const matrix &mtx);
	matrix(matrix &&mtx);

	matrix & operator=(const matrix &mtx);
	matrix & operator=(matrix &&mtx);

	matrix * operator[](int pos_col);
	void print() const;
	string get_info() const;

	matrix & operator+=(int adder);
	matrix & operator-=(int adder);

	matrix & operator--();
	matrix operator--(int);

	matrix & operator++();
	matrix operator++(int);

	void transposition();

	~matrix();

};