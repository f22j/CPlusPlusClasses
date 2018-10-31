#include <iostream>
#include "vector.h"
using namespace std;

int main() {

	vector v(10);
	cin >> v;

	cout << v(1, 5);

	system("pause");
}