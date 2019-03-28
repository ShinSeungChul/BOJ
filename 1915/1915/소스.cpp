#include<iostream>
#include<cstdio>
#include<vector>

#pragma warning(disable:4996)

using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}
int main() {
	int n, m, max = 0;
	int dp[1001][1001] = { 0 };
	int temp;
	char c;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		getchar();
		for (int j = 0; j < m; j++) {
			c = getchar();
			dp[i][j] = c - '0';
		}
	}
	if (n > m)
		temp = n;
	else
		temp = m;
	for (int i = 0; i < temp; i++) {
		if ((dp[i][0] == 1) || (dp[0][i] == 1)) {
			max = 1;
		}
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (dp[i][j]) {
				dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
				if (max < dp[i][j])
					max = dp[i][j];
			}
		}
	}
	cout << max*max << endl;
}