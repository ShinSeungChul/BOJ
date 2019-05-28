#include<iostream>
#include<cstdio>

#pragma warning(disable:4996)

using namespace std;

int main() {
	long long n, MOD;
	cin >> n >> MOD;
	long long num, sum = 1;
	for (int i = 0; i<n; i++) {
		scanf("%lld", &num);
		sum = ((sum%MOD)*(num%MOD)) % MOD;
	}
	cout << sum << endl;
}