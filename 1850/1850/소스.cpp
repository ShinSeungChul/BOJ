#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>

using namespace std;

long long gcd(long long n1, long long n2) {
	long long temp;
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

long long lcm(long long n1, long long n2) {
	return n1*n2 / gcd(n1, n2);
}

int main() {
	long long n, m, t;
	cin >> n >> m;
	int z = gcd(n, m);
	for (int i = 0; i < z; i++) {
		printf("1");
	}
	cout << endl;
}