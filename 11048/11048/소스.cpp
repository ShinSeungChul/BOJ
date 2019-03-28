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
	int miro[1002][1002] = { 0 };
	int dp[1002][1002] = { 0 };
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &miro[i][j]);
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			dp[i][j] = miro[i][j] + max(dp[i - 1][j], max(dp[i - 1][j - 1], dp[i][j - 1]));
		}
	}
	cout << dp[n][m] << endl;
}