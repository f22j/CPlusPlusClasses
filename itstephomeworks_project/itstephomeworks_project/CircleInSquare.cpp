#include "CircleInSquare.h"

CircleInSquare::CircleInSquare(int length, int CenterPointX, int CenterPointY){
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