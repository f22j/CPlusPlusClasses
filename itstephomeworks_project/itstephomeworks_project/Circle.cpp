#include "Circle.h"

Circle::Circle(int radius, int x, int y){

	this->setRadius(radius);
	this->setCenterPoint(x, y);

}

void Circle::setCenterPoint(int x, int y){
	this->centerPoint = Point(x, y);
}

void Circle::setRadius(int radius){

	if (radius > 0)
		this->radius = radius;
	else
		this->radius = 0;

}

int Circle::getCenterPointX() const{
	return this->centerPoint.getX();
}

int Circle::getCenterPointY() const{
	return this->centerPoint.getY();
}

int Circle::getRadius() const{
	return this->radius;
}

void Circle::getInfo() const{

	cout << "Center point(" << this->centerPoint.getX() << ";" << this->centerPoint.getY()
		<< ") Radius:" << this->getRadius() << "\nS:" << pow(this->radius, 2) * 3.14
		<< "\nL:" << 2 * 3.14 * radius << endl;
	
}