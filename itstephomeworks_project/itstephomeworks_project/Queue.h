#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Queue{

	vector<int> arr;

public:

	void push_back(int &val);
	void push_back(int &&val);

	void pop();

	int front();
	int back();

	void pop(bool toEnd = false);

};