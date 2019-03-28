#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>
#include<queue>
#include<deque>
#include<stack>

#pragma warning(disable:4996)

using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int t;
	int n;
	int price[2][100001] = { 0 };
	int dp[2][100001] = { 0 };
	cin >> t;

	while (t--) {
		scanf("%d", &n);
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%d", &price[i][j]);
			}
		}
		dp[0][0] = price[0][0];
		dp[1][0] = price[1][0];
		dp[0][1] = dp[1][0] + price[0][1];
		dp[1][1] = dp[0][0] + price[1][1];
		for (int i = 0; i < 2; i++) {
			for (int j = 2; j < n; j++) {
				dp[0][j] = price[0][j] + max(max(dp[1][j - 1], dp[0][j - 2]), dp[1][j - 2]);
				dp[1][j] = price[1][j] + max(max(dp[0][j - 1], dp[0][j - 2]), dp[1][j - 2]);
			}
		}
		printf("%d\n", max(max(max(dp[0][n - 1], dp[1][n - 1]), dp[0][n - 2]), dp[1][n - 2]));
	}
}