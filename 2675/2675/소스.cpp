#include<iostream>
#include<cstdio>
#include<string.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int testCase, replay;
	char ch[21];
	cin >> testCase;
	for (int i = 0; i < testCase; i++) {
		cin >> replay;
		cin >> ch;
		for (int j = 0; j < strlen(ch); j++) {
			for (int k = 0; k < replay; k++) {
				cout << ch[j];
			}
		}
		cout << endl;
	}
	return 0;
}