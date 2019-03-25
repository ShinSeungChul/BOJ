#include<iostream>
#include<cstdio>
#include<string.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	long long n;
	long long room = 0, temp = 1;
	cin >> n;
	if (n == 1)
		cout << 1 << endl;
	else {
		n--;
		while (n > 0) {
			n -= 6 * room;
			room++;
		}
		cout << room << endl;
	}
	return 0;
}