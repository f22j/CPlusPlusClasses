#pragma once
#include <iostream>
using namespace std;

class Drob_singleton {

	Drob_singleton();
	Drob_singleton(const Drob_singleton&) = delete;
	Drob_singleton operator=(const Drob_singleton&) = delete;

	static Drob_singleton *instance;

public:

	static Drob_singleton* getDrob_singleton() {

		if (instance == nullptr)
			instance = new Drob_singleton();

		return instance;

	}

	~Drob_singleton() {
		delete instance;
	}

};