#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

void main() {

	Time t;
	t.set_hour(23);
	t.set_minute(59);
	t.set_second(55);

	t.append_second(10);
	t.get_time();

	system("pause");
}
