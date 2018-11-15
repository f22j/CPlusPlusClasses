#pragma once
#include <iostream>
#include "Point.h"
using namespace std;

class Square{

	int length;
	Point start_point;

public:
	Square(int length=0, int x=0, int y=0);

	void setLength(int length);
	void setStartPoint(int x, int y);

	int getLength() const;
	int getX() const;
	int getY() const;

	void getInfo() const;
};