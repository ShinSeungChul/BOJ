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

int main() {
	int dp[1001][10] = { 0 };
	int n;
	cin >> n;
	for (int i = 0; i < 10; i++) {
		dp[1][i] = 1;
	}
	for (int i = 2; i < 1001; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k <= j; k++) {
				dp[i][j] = (dp[i][j] + dp[i - 1][k]) % 10007;
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum = (sum + dp[n][i]) % 10007;
	}
	cout << sum << endl;
}