#include <iostream>
#include "Priority_queue.h"
#include <string>
using namespace std;

int	main(){

	Priority_queue a;

	for (int i = 0; i < 100; i++)
		a.push(to_string(i), i);

	for (size_t i = 0; i < a.size(); i++) {
		cout << a.back().first() << endl;
		a.pop();
	}


	system("pause");
}