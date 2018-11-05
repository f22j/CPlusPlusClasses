#pragma once
#include <iostream>
#include <string>
using namespace std;

class Stack {

	string *arr;
	int maxSize, size;

public:
	Stack(int maxSize = 10);
	Stack(const Stack &obj);
	Stack(Stack &&obj);
	Stack &operator=(const Stack &obj);

	bool empty() const;
	int get_size() const;
	void swap(Stack &second);

	void push(const string &appended_str);
	void push(string &&appended_str);

	void pop();
	int get_maxSize() const;

	string top();
	const string top() const;

	~Stack();

};