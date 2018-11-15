#include "Square.h"

Square::Square(int length, int x, int y){

	this->setLength(length);
	this->setStartPoint(x, y);

}

void Square::setLength(int length){
	
	if (length > 0)
		this->length = length;
	else
		this->length = 0;

}

void Square::setStartPoint(int x, int y){
	start_point = Point(x, y);
}

int Square::getLength() const{
	return this->length;
}

int Square::getX() const{
	return this->start_point.getX();
}

int Square::getY() const{
	return this->start_point.getY();
}

void Square::getInfo() const{

	cout << "S:" << this->length * this->length << endl << "P:" << 
		this->length * 4 << endl << "Side length:" << this->length << endl;

	cout << "A(" << this->start_point.getX() << ";" << this->start_point.getY()
		<< ")\nB(" << this->start_point.getX() + this->length << ";" << this->start_point.getY()
		<< ")\nC(" << this->start_point.getX() + this->length << ";" 
		<< this->start_point.getY() - this->length << ")\n";

}