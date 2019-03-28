#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>

using namespace std;

int gcd(int n1, int n2) {
	int temp;
	if (n2 > n1) {
		temp = n2;
		n2 = n1;
		n1 = temp;
	}
	while (n2 != 0) {
		temp = n1%n2;
		n1 = n2;
		n2 = temp;
	}
	return n1;
}

int lcm(int n1, int n2) {
	return n1*n2 / gcd(n1, n2);
}

int main() {
	int m, n, x, y, temp;
	long long t, day, l;
	cin >> t;
	while (t--) {
		day = 0;
		cin >> m >> n >> x >> y;
		temp = day = x;
		l = lcm(m, n);
		while (1) {
			if (day > l) {
				day = -1;
				break;
			}
			while (temp > n) {
				temp -= n;
			}
			if (temp == y)
				break;
			day += m;
			temp += m;
		}
		cout << day << endl;
	}
}