#include<iostream>

using namespace std;

#define MOD 1000000000
#define MAX_BIT 1024

int main() {
	int n;
	int answer = 0;
	int dp[101][10][MAX_BIT] = { 0 };
	for (int i = 1; i < 10; i++) {
		dp[1][i][1 << i] = 1;
	}
	cin >> n;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < MAX_BIT; k++) {
				if ((dp[i - 1][j - 1][k]) && (j != 0)) {
					dp[i][j][k | (1 << j)] = (dp[i][j][k | (1 << j)] + dp[i - 1][j - 1][k]) % MOD;
				}
				if ((dp[i - 1][j + 1][k]) && (j != 9)) {
					dp[i][j][k | (1 << j)] = (dp[i][j][k | (1 << j)] + dp[i - 1][j + 1][k]) % MOD;
				}
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		answer = (answer + dp[n][i][MAX_BIT - 1]) % MOD;
	}
	cout << answer << endl;
}