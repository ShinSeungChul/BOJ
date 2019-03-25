#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int min, max, a = 0, sum = 0;
	bool z, x = false;
	cin >> min >> max;
	for (int i = min; i < max + 1; i++) {
		z = false;
		for (int j = 2; j < i / 2; j++) {
			if (!(i % j)) {
				z = true;
				break;
			}
		}
		if ((i == 1) || (i == 4))
			z = true;
		if (!z) {
			sum += i;
			if (!x) {
				a = i;
				x = true;
			}
		}
		z = false;
	}
	if (!a)
		cout << -1 << endl;
	else
		cout << sum << endl << a << endl;
	return 0;
}