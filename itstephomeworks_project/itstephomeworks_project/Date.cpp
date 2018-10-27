#include "Date.h"

Date::Date() {
	set_date(0, 0, 0);
}

Date::Date(int day = 0, int month = 0, int year = 1900) {
	set_date(day, month, year);
}

void Date::need_null(int needer) const {

	if (needer < 10)
		cout << "0";
}

void Date::set_day(int day) {

	if (day <= 30 && day > 0)this->day = day;
	else this->day = 1;

}

void Date::set_month(int month) {

	if (month <= 12 && month > 0)this->month = month;
	else this->month = 1;

}

void Date::set_year(int year) {

	if (year > 1900 && year <= 9999)this->year = year;
	else this->year = 1900;

}

void Date::set_date(int day, int month, int year) {

	set_month(month);
	set_year(year);
	set_day(day);

}

int Date::get_day() const {
	return day;
}

int Date::get_month() const {
	return month;
}

int Date::get_year() const {
	return year;
}

void Date::print_date() const{
	need_null(day);
	cout << day << "/";

	need_null(month);
	cout << month << "/";

	cout << year << endl;
}

bool Date::is_lipe() const {

	if (this->year % 4 != 0)
		return false;

	if (this->year % 100 == 0 && this->year % 400 != 0)
		return false;

	return true;
}


ostream & operator<<(ostream & os, const Date & dt){

	dt.print_date();
	return os;

}