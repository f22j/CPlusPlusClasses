#include "CircleInSquare.h"

int CircleInSquare::getX() const{
	return this->Square::getX();
}

int CircleInSquare::getY() const{
	return this->Square::getX();
}

CircleInSquare::CircleInSquare(int length, int CenterPointX, int CenterPointY){

	this->Square::setLength(length);
	this->Circle::setRadius(length);

	this->setCenterPoint(CenterPointX, CenterPointY);

}

void CircleInSquare::getInfo(){

	this->Square::getInfo();
	this->Circle::getInfo();

}

void CircleInSquare::setRadius(int radius){

	if (radius < 0)
		throw exception("ValueError: radius can not be less zero");

	this->Circle::setRadius(radius);
	this->Square::setStartPoint(this->Square::getX() + radius, 
		this->Square::getY() + radius);

}

void CircleInSquare::setPoint(int x, int y){

	this->Square::setStartPoint(this->Square::getX() + x, this->Square::getY() + y);
	this->Circle::setCenterPoint(x, y);

}