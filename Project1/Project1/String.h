#pragma once
class String{

	char *str;
	int length;

public:
	String();
	String(int length = 0);
	String(const char *str);
	String(const String &copy_str);

	int get_length();
	const char *get_string();
	void set_str(const char *str);

	void print();
	void input();
	void clear();

	void insert(int pos, const char *str);
	void append(const char *str);

	void erase(int pos, int length);

	~String();

};