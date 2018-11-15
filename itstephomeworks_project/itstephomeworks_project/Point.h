#pragma once
#include <iostream>

class Point{
	int x, y;

public:
	Point();
	Point(int x, int y);

	void setX(int x);
	void setY(int y);

	int getX() const;
	int getY() const;

};