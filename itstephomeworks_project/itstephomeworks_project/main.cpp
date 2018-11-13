#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {

	LinkedList<int> a;

	for (size_t i = 0; i < 9; i++)
		a.push_back(i);

	a.reverse();
	cout << a;

	system("pause");
}