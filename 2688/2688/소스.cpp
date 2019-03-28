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
	long long dp[66][10] = { 0 };
	for (int i = 0; i < 10; i++) {
		dp[1][i] = i + 1;
	}
	for (int i = 0; i < 66; i++) {
		dp[i][0] = 1;
	}
	for (int i = 2; i < 65; i++) {
		for (int j = 1; j < 10; j++) {
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}
	int n;
	cin >> n;
	int num;
	while (n--) {
		scanf("%d", &num);
		cout << dp[num][9] << endl;
	}
}