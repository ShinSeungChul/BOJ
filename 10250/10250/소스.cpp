#include<iostream>
#include<cstdio>
#include<string.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int testCase;
	int h, w, num;
	int room;
	cin >> testCase;
	for (int i = 0; i < testCase; i++) {
		cin >> h >> w >> num;
		if (!(num%h)) {
			room = 100 * h;
			room += num / h;
		}
		else {
			room = 100 * (num%h);
			room += num / h + 1;
		}
		cout << room << endl;
	}

	return 0;
}