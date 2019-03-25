#include <iostream>

using namespace std;

int max(int a, int b) {
	return (a > b) ? a : b;
}

int main() {
	int *grape;
	int *dp;
	int n;
	cin >> n;
	grape = new int[n + 1];
	dp = new int[n + 1];
	for (int i = 0; i < n; i++) {
		cin >> grape[i + 1];
		dp[i] = 0;
	}
	dp[n] = 0;
	dp[1] = grape[1];
	dp[2] = grape[1] + grape[2];
	for (int i = 3; i < n + 1; i++) {
		dp[i] = max(dp[i - 3] + grape[i - 1] + grape[i], max(dp[i - 1], dp[i - 2] + grape[i]));
	}
	cout << dp[n] << endl;
	return 0;
}