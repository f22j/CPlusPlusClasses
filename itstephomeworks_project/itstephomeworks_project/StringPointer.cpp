#include "StringPointer.h"

StringPointer::StringPointer(string * str){
	this->str = str;
}

string & StringPointer::operator*(){
	return *this->str;
}

string * StringPointer::operator->(){
	return this->str;
}

StringPointer::~StringPointer(){
	delete str;
}