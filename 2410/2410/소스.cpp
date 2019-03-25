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
	cin >> n;
	long long dp[1000001] = { 1 };
	for (int i = 1; i <= n; i *= 2) {
		for (int j = i; j <= n; j++) {
			dp[j] = (dp[j] + dp[j - i]) % 1000000000;
		}
	}
	cout << dp[n] << endl;
}