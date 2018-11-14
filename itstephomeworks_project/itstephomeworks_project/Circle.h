#pragma once
#include <iostream>
#include "Point.h"
using namespace std;

class Circle{

	int radius;
	Point centerPoint;

public:
	Circle(int radius=0, int x=0, int y=0);

	void setCenterPoint(int x, int y);
	void setRadius(int radius);
	void getInfo() const;

	int getCenterPointX() const;
	int getCenterPointY() const;
	int getRadius() const;

};