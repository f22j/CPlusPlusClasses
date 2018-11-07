#include <iostream>
#include <string>
#include <list>
using namespace std;


int replace_wrong(string &str) {

	string vowels = "aeuio";
	int matched = 0;
	char prev = ' ';

	for (int i = 0; i < str.length(); i++){

		if (vowels.find(str[i]) == string::npos && prev != str[i]){
			prev = str[i];

			if (++matched >= 3) {

				str.insert(i, " ");
				i += 2;
				matched = 0;

			}

		}

	}
	return -1;
}

int	main() {

	string str;
	getline(cin, str);

	replace_wrong(str);
	cout << str << endl;

	system("pause");
}