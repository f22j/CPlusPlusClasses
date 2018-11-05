#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Priority_queue{

	vector<pair<string, int>> arr;

public:
	void pop();
	bool empty() const;
	int size() const;

	pair<string, int> &front();
	const pair<string, int> &front() const;

	pair<string, int> &back();
	const pair<string, int> &back() const;

	void push(const string &doc, int priority);

};