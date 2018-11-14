#include <iostream>
#include <string>
#include "BinaryTree.h"
using namespace std;

int main() {

	BinaryTree<int, int> tr;

	for (int i = 0; i < 10; i++)
		tr.insert(i, i);

	tr.print();
	tr.erase(5);
	tr.print();

	system("pause");
}