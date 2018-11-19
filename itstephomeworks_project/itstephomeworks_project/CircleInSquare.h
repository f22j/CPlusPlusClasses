#pragma once
#include <iostream>
#include <math.h>
#include "Square.h"
#include "Circle.h"
using namespace std;

class CircleInSquare: public Square, public Circle{

	int getX() const;
	int getY() const;

public:
	CircleInSquare(int length=0, int CenterPointX=0, int CenterPointY=0);
	void getInfo();

	void setRadius(int radius);
	void setPoint(int x, int y);
};