#pragma once
#include <iostream>
#include <string>
using namespace std;

class Time {

	int *second, *hour, *minute;

	void need_null(int needer);

public:

	Time(int h, int m, int s);
	Time(const Time &obj);
	Time(Time &&obj);

	void set_second(int new_second);
	void set_minute(int new_minute);
	void set_hour(int new_hour);
	void set_time(int a, int b, int c);

	void append_hour(int added_hour);
	void append_minute(int added_minute);
	void append_second(int added_second);

	int get_second();
	int get_minute();
	int get_hour();

	void get_time(char end);

	~Time();

	Time & operator=(const Time &obj);
	Time & operator=(Time &&obj);

};