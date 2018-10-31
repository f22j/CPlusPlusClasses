#include "matrix.h"

matrix::matrix(){

	this->arr = nullptr;
	this->col_size = 0;
	this->row_size = 0;

}

matrix::matrix(int col_size, int row_size, int filler){

	arr = new int*[col_size];

	for (int i = 0; i < col_size; i++)
		arr[i] = new int[row_size];

	for (int i = 0; i < col_size; i++) {

		for (int j = 0; j < row_size; j++)
			arr[i][j] = filler;

	}

	this->col_size = col_size;
	this->row_size = row_size;

}

matrix::matrix(const matrix & mtx){

	this->row_size = mtx.row_size;
	this->col_size = mtx.col_size;

	if (mtx.arr == nullptr) {

		this->arr = nullptr;
		return;

	}

	this->arr = new int*[mtx.col_size];

	for (int i = 0; i < col_size; i++) {
		this->arr[i] = new int[mtx.row_size];

		for (int j = 0; j < row_size; j++)
			this->arr[i][j] = mtx.arr[i][j];

	}

}

matrix::matrix(matrix && mtx){

	this->col_size = mtx.col_size;
	this->row_size = mtx.row_size;
	this->arr = mtx.arr;

	mtx.col_size = 0;
	mtx.row_size = 0;
	mtx.arr = nullptr;

}

matrix & matrix::operator=(const matrix & mtx){

	if (&mtx == this)
		return *this;

	this->~matrix();
	this->row_size = mtx.row_size;
	this->col_size = mtx.col_size;

	if (mtx.arr == nullptr) {

		this->arr = nullptr;
		return *this;

	}

	this->arr = new int*[mtx.col_size];

	for (int i = 0; i < col_size; i++) {
		this->arr[i] = new int[mtx.row_size];

		for (int j = 0; j < row_size; j++)
			this->arr[i][j] = mtx.arr[i][j];

	}
}

matrix & matrix::operator=(matrix && mtx){


	return mtx;
}

int matrix::get_col_size(){
	return this->col_size;
}

int matrix::get_row_size(){
	return this->row_size;
}

int * matrix::operator[](int pos_col){
	return arr[pos_col];
}

void matrix::print() const{

	for (int i = 0; i < this->col_size; i++) {

		for (int j = 0; j < this->row_size; j++)
			cout << arr[i][j] << "  ";

		cout << endl;
	}

}

string matrix::get_info() const{

	string res;

	for (int i = 0; i < this->col_size; i++) {

		for (int j = 0; j < this->row_size; j++)
			res += to_string(arr[i][j]);

		res += "\n";
	}

	return res;
}

matrix & matrix::operator+=(int adder){

	for (int i = 0; i < this->col_size; i++) {

		for (int j = 0; j < this->row_size; j++)
			this->arr[i][j] += adder;

	}

	return *this;
}

matrix & matrix::operator-=(int adder){

	for (int i = 0; i < this->col_size; i++) {

		for (int j = 0; j < this->row_size; j++)
			this->arr[i][j] -= adder;

	}

	return *this;

}

matrix & matrix::operator--(){
	this->arr -= 1;
	return *this;
}

matrix matrix::operator--(int){

	matrix tmp = *this;
	this->arr -= 1;
	return tmp;

}

matrix & matrix::operator++(){

	this->arr += 1;
	return *this;

}

matrix matrix::operator++(int){

	matrix tmp = *this;
	this->arr += 1;
	return *this;

}

void matrix::transposition(){

	int **tmp = new int*[this->col_size];

	for (int i = 0; i < this->col_size; i++)
		tmp[i] = new int[this->row_size];

	for(int i = 0; i < this->col_size; i++){

		for (int j = 0; j < this->row_size; j++)
			tmp[i][j] = this->arr[j][i];

	}

	for (int i = 0; i < this->col_size; i++)
		delete[] this->arr[i];

	delete[] this->arr;

	this->arr = tmp;
}

matrix::~matrix(){

	for (int i = 0; i < this->col_size; i++)
		delete[] this->arr[i];

	if(this->arr != nullptr)
		delete[] this->arr;

	this->col_size = this->row_size = 0;
}

ostream & operator<<(ostream & os, const matrix & mtx){

	mtx.print();
	return os;

}

istream & operator>>(istream & is, matrix & mtx){

	for (int i = 0; i < mtx.get_col_size(); i++) {

		for (int j = 0; j < mtx.get_row_size(); j++)
			cin >> mtx[i][j];

	}

	return is;
}