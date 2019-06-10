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

long long max_num(long long a, long long b) {
	return a > b ? a : b;
}

int main() {
	long long max_w[1001][1001] = { 0 };
	long long max_e[1001][1001] = { 0 };
	long long dp[1001] = { 0 };
	int n;
	long long min_price;
	cin >> n;
	long long w, e;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &w);
		max_w[i][i] = w;
		for (int j = i - 1; j > 0; j--) {
			max_w[j][i] = max_num(max_w[j][i - 1], w);
		}
	}
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &e);
		max_e[i][i] = e;
		for (int j = i - 1; j > 0; j--) {
			max_e[j][i] = max_num(max_e[j][i - 1], e);
		}
	}
	dp[1] = max_w[1][1] * max_e[1][1];
	for (int i = 2; i <= n; i++) {
		min_price = max_w[1][i] * max_e[1][i];
		for (int j = 1; j < i; j++) {
			min_price = min(min_price, dp[j] + max_w[j + 1][i] * max_e[j + 1][i]);
		}
		dp[i] = min_price;
	}
	cout << dp[n] << endl;
}