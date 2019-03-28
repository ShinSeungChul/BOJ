#include <iostream>
#include<string>
#include<cstdio>
#include<math.h>

#pragma warning(disable : 4996)

using namespace std;


int main() {
	long long dp[10][100];
	long long sum = 0;
	int n;
	cin >> n;
	dp[0][0] = 0;
	dp[1][0] = 1;
	dp[2][0] = 1;
	dp[3][0] = 1;
	dp[4][0] = 1;
	dp[5][0] = 1;
	dp[6][0] = 1;
	dp[7][0] = 1;
	dp[8][0] = 1;
	dp[9][0] = 1;
	for (int i = 1; i < 100; i++) {
		dp[0][i] = dp[1][i - 1];
		for (int j = 1; j < 9; j++) {
			dp[j][i] = (dp[j - 1][i - 1] + dp[j + 1][i - 1]) % 1000000000;
		}
		dp[9][i] = dp[8][i - 1];
	}
	for (int i = 0; i < 10; i++) {
		sum += dp[i][n - 1];
	}
	cout << sum % 1000000000 << endl;
	return 0;
}