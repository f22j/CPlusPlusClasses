#pragma once
#include <iostream>
#include <string>
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

	void append_day();
	void append_month();
	void append_year();

	void pop_day();
	void pop_month();
	void pop_year();

	void print_date() const;
	string get_date() const;
	bool is_lipe() const;

	Date operator++();
	Date operator++(int);

	Date operator--();
	Date operator--(int);

	operator string();

};

ostream & operator<<(ostream & os, const Date & dt);
istream & operator>>(istream & is, Date & dt);

bool operator<(Date &dt, Date &dt2);
bool operator>(Date &dt, Date &dt2);

bool operator>=(Date &dt, Date &dt2);
bool operator<=(Date &dt, Date &dt2);

bool operator!=(Date &dt, Date &dt2);
bool operator==(Date &dt, Date &dt2);

string strftime();