#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
#include<utility>
#include<string>
#include<map>
#pragma warning(disable:4996)

using namespace std;

#define MOD 1234567891

int main() {
	int n;
	long long ans = 0;
	string s;
	long long temp = 1;
	cin >> n;
	getchar();
	getline(cin, s);
	for (int i = 0; i < n; i++) {
		ans = ((ans % MOD) + ((s[i] - 'a' + 1)*temp) % MOD) % MOD;
		temp = ((temp%MOD) * 31) % MOD;
	}
	cout << ans << endl;
}