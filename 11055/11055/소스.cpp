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
	int max;
	cin >> n;
	int arr[1001] = { 0 };
	int dp[1001] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	dp[0] = arr[0];
	for (int i = 1; i < n; i++) {
		max = 0;
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i]) {
				if (max < dp[j]) {
					max = dp[j];
				}
			}
		}
		dp[i] = max + arr[i];
	}
	max = 0;
	for (int i = 0; i < n; i++) {
		if (max < dp[i])
			max = dp[i];
	}
	cout << max << endl;
}