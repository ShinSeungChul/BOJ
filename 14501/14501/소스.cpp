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
	int t[100] = { 0 };
	int p[100] = { 0 };
	int dp[100] = { 0 };
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &t[i], &p[i]);
	}
	for (int i = 1; i <= n + 1; i++) {
		for (int j = 1; j < i; j++) {
			if (i > t[j] + j - 1) {
				if (dp[i] <= dp[j] + p[j]) {
					dp[i] = dp[j] + p[j];
				}
			}
		}
	}
	cout << dp[n + 1];
	cout << endl;
}