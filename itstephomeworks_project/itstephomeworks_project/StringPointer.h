#pragma once
#include <iostream>
#include <string>
using namespace std;

class StringPointer{
	string *str;

public:
	StringPointer(string *str);

	string& operator*();
	string *operator->();

	~StringPointer();
};