#include <iostream>
#include<string>
#include<cstdio>
#include<math.h>

#pragma warning(disable : 4996)

using namespace std;

int main() {
	string str;
	int count = 1;
	getline(cin, str);
	if (str.at(0) == ' ')
		count--;
	if (str.at(str.length() - 1) == ' ')
		count--;
	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) == ' ') {
			count++;
		}
	}
	cout << count << endl;

	return 0;
}