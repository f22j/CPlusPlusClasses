#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

	const char str[] = "-------------------LOADING-------------------";

	while (true) {

		for (char symb : str) {
			Sleep(100);
			cout << symb;
		}

		Sleep(1000);

		system("cls");

	}

}