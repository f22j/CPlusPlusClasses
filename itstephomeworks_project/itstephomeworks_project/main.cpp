#include <iostream>
#include <string>
using namespace std;

string vowels = "aeuio";
int find_wrong(const string &str);

void wrongs_eraser(string &str) {

	int wrong_pos = find_wrong(str);

	if (wrong_pos == -1)
		return;

	str.insert(wrong_pos + 1, " ");
}

int find_wrong(const string &str) {

	int matched = 0;
	for (int i = 0; i < str.length(); i++){

		int wrong_pos = vowels.find(str[i]);
		if (wrong_pos == -1 && (str[i] != str[i + 1] || str[i] != str[i - 1])){

			if (++matched >= 3)
				return i;

		}

	}
	return -1;
}

int	main() {

	string str;
	getline(cin, str);

	wrongs_eraser(str);
	cout << str << endl;

	system("pause");
}