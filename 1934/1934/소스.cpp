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
	int n, m, t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cout << lcm(n, m) << endl;
	}
}