#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>

#pragma warning(disable:4996)

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
	int n, temp;
	int len[101] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &len[i]);
	}
	for (int i = 1; i < n; i++) {
		temp = gcd(len[0], len[i]);
		printf("%d/%d\n", len[0] / temp, len[i] / temp);
	}
}