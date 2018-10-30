#include <iostream>
#include <conio.h>
#include "Car.h"
using namespace std;

int main() {

	Car cycle(1, 2, 1, GearboxType::AUTO, 4, 1, 10, 10, "steel", 10, 100, 4, "Audi", 0, 0, 6, 4, 50);
	
	int mat, mat_level;

	cout << "Write materials:";
	cin >> mat;

	cout << "Write level:";
	cin >> mat_level;

	while (true) {

		switch(_getch()){
		
		case 'd':
			cycle.go();
			break;

		case 'a':
			cycle.go_back();
			break;
		
		case 'r':
			cycle.repair(mat, mat_level);
			break;

		}

	}

	system("pause");
}