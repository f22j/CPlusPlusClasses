#include <iostream>
#include "List.h"
using namespace std;

int main() {

	List<string> a;
	
	for (size_t i = 0; i < 10; i++)
		a.push_back("HELLO");

	a.insert("GOODBYE!", 3);
	for (size_t i = 0; i < 11; i++)
		cout << a[i].c_str();
	
	system("pause");
}