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
	cin >> n;
	dp[1] = 1;
	dp[2] = 3;
	for (int i = 3; i < 1001; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
	}
	printf("%d\n", dp[n]);
}