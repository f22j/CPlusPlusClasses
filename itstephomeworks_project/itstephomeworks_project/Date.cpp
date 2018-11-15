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

	if (day <= 31 && day > 0)this->day = day;
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

void Date::append_day(){

	if (this->day == 31) {

		this->day = 1;
		append_month();
		return;

	}

	this->day++;

}

void Date::append_month(){

	if (this->month == 12) {

		this->month = 1;
		append_year();
		return;

	}

	this->month++;

}

void Date::append_year(){
	this->year++;
}

void Date::pop_day(){

	if(this->day == 1){

		this->day = 31;
		pop_month();
		return;

	}

	this->day--;

}

void Date::pop_month(){

	if (this->month == 1) {

		this->month = 12;
		pop_year();
		return;

	}

	this->month--;

}

void Date::pop_year(){
	this->year--;
}

void Date::print_date() const{
	need_null(day);
	cout << day << "/";

	need_null(month);
	cout << month << "/";

	cout << year << endl;
}

string Date::get_date() const{

	string date_str;

	if (this->day < 10)
		date_str += "0";
	date_str += to_string(this->day) + ":";

	if (this->month < 10)
		date_str += "0";
	date_str += to_string(this->month) + ":" + to_string(this->year);

	return date_str;

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

istream & operator>>(istream & is, Date & dt){

	int day;
	cout << "Write day:";
	cin >> day;

	int month;
	cout << "Write month:";
	cin >> month;

	int year;
	cout << "Write year:";
	cin >> year;

	dt.set_date(day, month, year);
	return is;

}

bool operator<(Date & dt, Date & dt2){

	if (dt.get_year() == dt2.get_year()){

		if (dt.get_month() == dt2.get_month())
			return dt.get_day() < dt.get_day();

		return dt.get_month() < dt.get_month();

	}

	return dt.get_year() < dt2.get_year();

}

bool operator>(Date & dt, Date & dt2){

	if (dt.get_year() == dt2.get_year()) {

		if (dt.get_month() == dt2.get_month())
			return dt.get_day() > dt.get_day();

		return dt.get_month() > dt.get_month();

	}

	return dt.get_year() > dt2.get_year();
}

bool operator>=(Date & dt, Date & dt2){

	if (dt.get_year() == dt2.get_year()) {

		if (dt.get_month() == dt2.get_month())
			return dt.get_day() >= dt.get_day();

		return dt.get_month() >= dt.get_month();

	}

	return dt.get_year() >= dt2.get_year();
}

bool operator<=(Date & dt, Date & dt2){

	if (dt.get_year() == dt2.get_year()) {

		if (dt.get_month() == dt2.get_month())
			return dt.get_day() <= dt.get_day();

		return dt.get_month() <= dt.get_month();

	}

	return dt.get_year() <= dt2.get_year();
}

bool operator!=(Date & dt, Date & dt2){

	if (dt.get_year() != dt2.get_year()) {

		if (dt.get_month() != dt2.get_month())
			return dt.get_day() != dt.get_day();

	}

	return false;

}

bool operator==(Date & dt, Date & dt2){

	if (dt.get_year() == dt2.get_year()) {

		if (dt.get_month() == dt2.get_month())
			return dt.get_day() == dt.get_day();

	}

	return false;

}

string strftime(){
	return to_string(system("time /T"));
}

Date Date::operator++() {

	append_day();
	return *this;

}

Date Date::operator++(int) {

	Date tmp = *this;
	append_day();
	return tmp;

}

Date Date::operator--() {

	pop_day();
	return *this;

}

Date Date::operator--(int) {

	Date tmp = *this;
	pop_day();
	return tmp;

}

Date::operator string(){

	string date_str;

	if (this->day < 10)
		date_str += "0";
	date_str += to_string(this->day) + ":";

	if (this->month < 10)
		date_str += "0";
	date_str += to_string(this->month) + ":" + to_string(this->year);

	return date_str;
}