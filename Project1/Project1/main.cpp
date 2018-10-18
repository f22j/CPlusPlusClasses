#include <iostream>
#include "Student.h"
using namespace std;

void main() {

	Student a("Andrew", 10, "aaa", 1);
	a.add_mark(5);
	a.add_mark(4);
	a.add_mark(-5);

	a.student_info();

	system("pause");
}
