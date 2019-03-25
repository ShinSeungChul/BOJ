#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, k, num;
	int coin[101];
	int dp[10001] = { 1 };
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		scanf("%d", &coin[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = coin[i]; j < 10001; j++) {
			dp[j] += dp[j - coin[i]];
		}
	}
	cout << dp[k] << endl;
}