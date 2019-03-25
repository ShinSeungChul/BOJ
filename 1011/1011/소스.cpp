#include<iostream>
#include<cstdio>
#include<string.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int testCase;
	long long x, y, k = 1, a;
	cin >> testCase;
	for (int i = 0; i < testCase; i++) {
		k = 1;
		cin >> x >> y;
		a = y - x;
		while (1) {
			if ((k*(k + 1)) >= a) {
				a -= (k*(k - 1));
				break;
			}
			k++;
		}
		if (k < a)
			cout << k * 2 << endl;
		else
			cout << k * 2 - 1 << endl;
	}
	return 0;
}