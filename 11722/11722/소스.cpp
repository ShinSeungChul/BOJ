#include<iostream>
#include<cstdio>

#pragma warning(disable:4996)

using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int n;
	cin >> n;
	int arr[1001] = { 0 };
	int dp[1001] = { 0 };
	int total_max = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		total_max = max(total_max, dp[i]);
	}
	cout << total_max << endl;
}