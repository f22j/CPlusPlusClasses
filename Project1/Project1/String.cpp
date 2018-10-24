#include "String.h"
#include "Student.h"

String::String() {

	length = 0;
	str = nullptr;

}

String::String(int len = 0) {

	length = len;
	str = new char[len];

}

String::String(const char *str) {

	this->length = strlen(str);
	this->str = new char[length + 1];
	strcpy_s(this->str, length + 1, str);

}

String::String(const String &copy_str) {

	this->length = copy_str.length;
	this->str = new char[this->length];
	strcpy_s(this->str, length + 1, copy_str.str);

}

int String::get_length() const {
	return length;
}

const char *String::get_string() const {
	return str;
}

const char String::get_symbol(int pos) const {
	return this->str[pos];
}

void String::set_str(const char * str) {

	if (length != strlen(str)) {

		delete[] this->str;
		this->length = strlen(str);
		this->str = new char[length + 1];

	}

	strcpy_s(this->str, length + 1, str);

}

void String::print() const {
	cout << str;
}

void String::input() {

	char cpstr[1024];
	cin.getline(cpstr, 1024);
	set_str(cpstr);

}

void String::clear() {

	this->~String();

}

void String::insert(int pos, const char *str) {

	if (pos > length || pos < 0 || str == nullptr)
		return;

	else if (length == 0 && pos == 0) {
		set_str(str);
		return;
	}

	char *temp_str = new char[length + strlen(str) + 1];

	for (int i = 0; i < pos; i++)
		temp_str[i] = this->str[i];

	for (int i = pos; i < strlen(str) + pos; i++)
		temp_str[i] = str[i - strlen(str)];

	for (int i = pos + strlen(str); i < length + strlen(str); i++)
		temp_str[i] = this->str[i - pos];

	temp_str[length + strlen(str) - 1] = '\0';

	delete[] this->str;
	length += strlen(str);
	this->str = temp_str;

}

void String::append(const char * str) {
	this->insert(length, str);
}

void String::erase(int pos, int del_len) {

	if (pos > this->length || pos < 0 || str == nullptr || del_len == 0)
		return;

	char *copy_str = new char[(this->length - del_len) + 1];

	for (int i = 0; i < pos; i++)
		copy_str[i] = str[i];

	for (int i = del_len + pos; i <= this->length; i++)
		copy_str[i + 1 - pos - del_len] = str[i];

	set_str(copy_str);

}

String & String::operator+=(const String & str) {

	this->append(str.str - 1);
	return *this;

}

String::~String() {

	if (length != 0)
		delete[] str;

	str = nullptr;
	length = 0;

}

String & String::operator=(const String & str){

	if (this == &str)
		return *this;

	if (this->length == str.length) {

		for(int i = 0; i < this->get_length(); i++)
			this->str[i] = str.str[i];
		return *this;

	}

	this->~String();

	if (str.get_length() == 0)
		return *this;

	this->length = str.get_length();
	this->str = new char[this->length + 1];

	for (int i = 0; i < this->length; i++)
		this->str[i] = str.str[i];

	this->str[this->length - 1] = '\0';
	return *this;

}

Date Student::get_birth() const {
	return birth_date;
}

ostream & operator<<(ostream & os, const String &str) {

	str.print();
	return os;
}

istream & operator>>(istream & is, String & str){

	str.input();
	return is;

}
