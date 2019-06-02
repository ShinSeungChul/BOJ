#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
#include<utility>
#include<string>
#pragma warning(disable:4996)

using namespace std;

vector<int> v;
int n;

int main() {
	cin >> n;
	int num, min_dp;
	int dp[502][502] = { 0 };
	int max_table[502][502] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		v.push_back(num);
		for (int j = i + 1; j > 0; j--) {
			if (i + 1 == j)
				max_table[j][i + 1] = v[i];
			else
				max_table[j][i + 1] = max(max_table[j + 1][i + 1], max_table[j][i]);
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i - 1; j > 0; j--) {
			min_dp = 2000000000;
			for (int k = j; k < i; k++) {
				min_dp = min(min_dp, ((dp[j][k] + dp[k + 1][i]) + (abs(max_table[j][k] - max_table[k + 1][i]))));
			}
			dp[j][i] = min_dp;
		}
	}
	cout << dp[1][n] << endl;
}