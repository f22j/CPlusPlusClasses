#include <iostream>
#include "Drob_singleton.h"
using namespace std;

int	main(){

	Drob_s *d = Drob_s::get_instance(10, 2);
	cout << d->get_drob();

	system("pause");
}