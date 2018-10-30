#pragma once
#include <iostream>
using namespace std;

class String {

	char *str;
	int length;

public:
	String();
	String(int length);
	String(const char *str);
	String(const String &copy_str);
	String(String &&s);

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
	String & operator=(const String & str);

	~String();
};

ostream & operator<<(ostream &os, const String &str);
istream & operator>>(istream &is, String &str);

bool operator==(String &str, String &str2);
bool operator!=(String &str, String &str2);

bool operator<(String &str, String str2);
bool operator>=(String &str, String str2);
bool operator<=(String &str, String str2);
bool operator>=(String &str, String str2);