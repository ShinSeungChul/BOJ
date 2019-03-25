#include<iostream>
#include<cstdio>
#include<string.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	long long n;
	long long a = 1;
	cin >> n;
	while (1) {
		if ((((a*(a - 1)) / 2) < n) && (((a*(a + 1)) / 2) >= n)) {
			n -= ((a*(a - 1)) / 2);
			break;
		}
		a++;
	}
	a++;
	if (a % 2) {
		cout << n << "/" << a - n << endl;
	}
	else {
		cout << a - n << "/" << n << endl;
	}
	return 0;
}