#pragma once
#include <iostream>
using namespace std;

class Date {

	void need_null(int needer)const;
	int day, month, year;

public:
	Date();
	Date(int day, int month, int year);

	void set_day(int day);
	void set_month(int month);
	void set_year(int year);
	void set_date(int day, int month, int year);

	int get_day()const;
	int get_month()const;
	int get_year()const;

	void print_date()const;
	bool is_lipe()const;

};

ostream & operator<<(ostream & os, const Date & dt);