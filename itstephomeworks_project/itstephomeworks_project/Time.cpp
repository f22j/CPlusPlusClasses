#include "Time.h"

void Time::need_null(int needer) {
	if (needer < 10)cout << 0;
}

Time::Time(int h = 0, int m = 0, int s = 0) {

	this->hour = new int;
	this->minute = new int;
	this->second = new int;

	set_hour(h);
	set_minute(m);
	set_second(s);

}

Time::Time(const Time &obj) {

	this->hour = new int;
	this->minute = new int;
	this->second = new int;

	set_hour(*(obj.hour));
	set_minute(*(obj.minute));
	set_second(*(obj.second));

}

Time::Time(Time && obj){

	this->hour = obj.hour;
	this->minute = obj.minute;
	this->second = obj.second;

	obj.hour  = obj.minute = obj.second = nullptr;

}

void Time::set_second(int new_second) {

	if (new_second > 60 || new_second < 0)*second = 0;
	else *second = new_second;

}

void Time::set_minute(int new_minute) {

	if (new_minute > 60 || new_minute < 0)*minute = 0;
	else *minute = new_minute;

}

void Time::set_hour(int new_hour) {

	if (new_hour > 24 || new_hour < 0)*hour = 0;
	else *hour = new_hour;

}

void Time::set_time(int a, int b, int c) {

	this->~Time();

	set_hour(a);
	set_minute(b);
	set_second(c);

}

void Time::append_hour(int added_hour = 1) {

	if (*hour + added_hour >= 23)*hour = (*hour + added_hour) - 24;
	else *hour += added_hour;

}

void Time::append_minute(int added_minute = 1) {

	if (*minute + added_minute >= 59) {

		minute = (minute + added_minute) - 60;
		append_hour();

	}
	else *minute += added_minute;

}

void Time::append_second(int added_second = 1) {

	if (*second + added_second >= 59) {

		second = (second + added_second) - 60;
		append_minute();

	}
	else *second += added_second;

}

void Time::get_time(char end = '\n') {

	need_null(*hour);
	cout << *hour << ":";

	need_null(*minute);
	cout << *minute << ":";

	need_null(*second);
	cout << *second << end;
}

Time & Time::operator=(const Time & obj){

	if (&obj == this)
		return *this;

	this->~Time();

	this->hour = new int;
	this->minute = new int;
	this->second = new int;

	set_hour(*(obj.hour));
	set_minute(*(obj.minute));
	set_second(*(obj.second));

	return *this;
}

int Time::get_second() {
	return *second;
}

int Time::get_minute() {
	return *minute;
}

int Time::get_hour() {
	return *hour;
}

Time & Time::operator=(Time && obj){

	if (&obj == this)
		return *this;

	this->~Time();

	this->hour = obj.hour;
	this->minute = obj.minute;
	this->second = obj.second;

	obj.hour = obj.minute = obj.second = nullptr;

	return *this;
}

Time::~Time() {

	if (hour != nullptr)
		delete hour;

	if (minute != nullptr)
		delete minute;

	if (second != nullptr)
		delete second;
}