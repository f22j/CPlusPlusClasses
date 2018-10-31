#include <iostream>
#include <conio.h>
#include "matrix.h"
using namespace std;

int main() {

	matrix mxt(4, 4);

	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 4; j++)
			mxt[i][j] = rand()% 100;

	}

	cout << mxt << endl;
	mxt.transposition();
	cout << mxt << endl;

	system("pause");
}