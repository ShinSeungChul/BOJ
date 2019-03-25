#include <iostream>
#include<string>
#include<cstdio>
#include<math.h>

#pragma warning(disable : 4996)

using namespace std;

int max(int a, int b) {
	return (a > b) ? a : b;
}

int main() {
	int stair;
	int *stairScore, score = 0;
	int **dp;
	cin >> stair;
	stairScore = new int[stair];
	dp = new int*[stair];
	for (int i = 0; i < stair; i++) {
		cin >> stairScore[i];
		dp[i] = new int[2];
	}
	for (int i = 0; i < stair; i++) {
		for (int j = 0; j < 2; j++) {
			dp[i][j] = 0;
		}
	}
	dp[0][0] = stairScore[0];
	dp[1][0] = stairScore[0] + stairScore[1];
	dp[1][1] = stairScore[1];
	for (int i = 2; i < stair; i++) {
		dp[i][0] = stairScore[i] + dp[i - 1][1];
		dp[i][1] = stairScore[i] + max(dp[i - 2][0], dp[i - 2][1]);
	}
	cout << max(dp[stair - 1][0], dp[stair - 1][1]) << endl;
}