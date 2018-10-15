#include <iostream>
#include <string>
#include "Time.h"
#include <Windows.h>
using namespace std;

void main() {

	Time t;
	t.set_hour(23);
	t.set_minute(59);
	t.set_second(54);

	char command[100];
	cin.getline(command, 100);

	while (true) {

		t.get_time();

		Sleep(1000);
		t.append_second();
		if (t.get_hour() == 0 && t.get_second() == 0) Beep(999, 400);

		system(command);

	};

	system("pause");
}