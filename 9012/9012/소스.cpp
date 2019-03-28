#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int testCase;
	bool x;
	char **str;
	int a = 0, b = 0;
	cin >> testCase;
	str = new char*[testCase];
	for (int i = 0; i < testCase; i++) {
		str[i] = new char[51];
	}
	while (testCase--) {
		cin >> str[testCase];
		a = b = 0;
		x = false;
		for (int i = 0; i < 51; i++) {
			if (str[testCase][i] == '(')
				a++;
			else if (str[testCase][i] == ')')
				b++;
			if (a < b) {
				x = true;
			}
		}
		if (x) {
			cout << "NO" << endl;
		}
		else {
			if (a == b)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}