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

	};

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
		return;

	};

	this->arr = new int*[mtx.col_size];

	for (int i = 0; i < col_size; i++) {
		this->arr[i] = new int[mtx.row_size];

		for (int j = 0; j < row_size; j++)
			this->arr[i][j] = mtx.arr[i][j];

	}

}

matrix & matrix::operator=(matrix && mtx){



}

matrix * matrix::operator[](int pos_col){
	return nullptr;
}

void matrix::print() const{
}

string matrix::get_info() const{
	return string();
}

matrix & matrix::operator+=(int adder){
	// TODO: вставьте здесь оператор return
}

matrix & matrix::operator-=(int adder){
	// TODO: вставьте здесь оператор return
}

matrix & matrix::operator--(){
	// TODO: вставьте здесь оператор return
}

matrix matrix::operator--(int){
	return matrix();
}

matrix & matrix::operator++(){
	// TODO: вставьте здесь оператор return
}

matrix matrix::operator++(int){
	return matrix();
}

void matrix::transposition(){
}

matrix::~matrix(){
}