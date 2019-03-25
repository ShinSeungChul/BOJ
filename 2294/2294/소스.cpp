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
	int n, k;
	int coin;
	cin >> n >> k;
	long long dp[100002] = { 0 };
	while (n--) {
		scanf("%d", &coin);
		dp[coin] = 1;
		for (int i = coin + 1; i <= k; i++) {
			if (dp[i - coin]) {
				if ((dp[i] == 0) || (dp[i] > dp[i - coin] + 1)) {
					dp[i] = dp[i - coin] + 1;
				}
			}
		}
	}
	if (dp[k]) {
		cout << dp[k] << endl;
	}
	else {
		cout << -1 << endl;
	}
}