#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<utility>
#pragma warning(disable:4996)

using namespace std;

#define MOD 1000000007

int main() {
	long long n, x, k;
	long long ans = 0, temp, mul;
	cin >> n;

	while (n--) {
		scanf("%d %d", &x, &k);
		temp = 0;
		while (k) {
			mul = 1;
			if (k & 1) {
				for (int i = 0; i < temp; i++) {
					mul = ((mul%MOD)*(x%MOD)) % MOD;
				}
				ans = ((ans%MOD) + (mul%MOD)) % MOD;
			}
			k = k >> 1;
			temp++;
		}
	}
	cout << ans << endl;
}