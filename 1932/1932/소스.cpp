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
	int len, maximum = 0;
	int **tree;
	int **dp;
	cin >> len;
	tree = new int*[len];
	dp = new int*[len];
	for (int i = 0; i < len; i++) {
		tree[i] = new int[i + 1];
		dp[i] = new int[i + 1];
	}
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < i + 1; j++) {
			cin >> tree[i][j];
		}
	}
	dp[0][0] = tree[0][0];
	for (int i = 1; i < len; i++) {
		dp[i][0] = tree[i][0] + dp[i - 1][0];
		dp[i][i] = tree[i][i] + dp[i - 1][i - 1];
		for (int j = 1; j < i; j++) {
			dp[i][j] = tree[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j]);
		}
	}
	for (int i = 0; i < len; i++) {
		if (maximum < dp[len - 1][i])
			maximum = dp[len - 1][i];
	}
	cout << maximum << endl;
	return 0;
}