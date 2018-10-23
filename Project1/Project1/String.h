#pragma once
#include <iostream>
using namespace std;

class String{

	char *str;
	int length;

public:
	String();
	String(int length = 0);
	String(const char *str);
	String(const String &copy_str);

	int get_length() const;
	const char get_symbol(int pos) const;
	const char *get_string() const;

	void set_str(const char *str);

	void print() const;
	void input();
	void clear();

	void insert(int pos, const char *str);
	void append(const char *str);
	void erase(int pos, int length);

	String & operator+=(const String & str);

	~String();
};

ostream & operator<<(ostream &os, const String &str);