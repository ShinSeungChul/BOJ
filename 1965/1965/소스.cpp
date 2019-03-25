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
	int box[1001] = { 0 };
	int dp[1001] = { 0 };
	int n;
	int max = 0;
	cin >> n;
	dp[0] = 1;
	for (int i = 0; i < n; i++) {
		scanf("%d", &box[i]);
	}
	for (int i = 1; i < n; i++) {
		max = 1;
		for (int j = 0; j < i; j++) {
			if (box[j] < box[i]) {
				if (max < dp[j] + 1) {
					max = dp[j] + 1;
				}
			}
		}
		dp[i] = max;
	}
	max = 0;
	for (int i = 0; i < n; i++) {
		if (dp[i] > max)
			max = dp[i];
	}
	cout << max << endl;
}