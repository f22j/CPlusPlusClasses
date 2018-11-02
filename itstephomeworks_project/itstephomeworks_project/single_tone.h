#pragma once
#include <iostream>
using namespace std;

class single_tone{

	single_tone() {}
	single_tone(const single_tone&) {}
	single_tone operator=(const single_tone&) {}

	static single_tone *instance;

public:

	static single_tone* get_instance() {

		if (instance == nullptr)
			instance = new single_tone();

		return instance;

	}

	~single_tone() {
		delete instance;
	}

};