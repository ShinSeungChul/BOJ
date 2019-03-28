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
	int n;
	int dp[1001] = { 0 };
	int card[1001] = { 0 };
	cin >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &card[i]);
	}
	int max;
	dp[1] = card[1];
	for (int i = 2; i <= n; i++) {
		max = 0;
		for (int j = 1; j < i; j++) {
			if (max < dp[j] + dp[i - j]) {
				max = dp[j] + dp[i - j];
			}
		}
		if (max < card[i])
			max = card[i];
		dp[i] = max;
	}
	cout << dp[n] << endl;
}