#include<iostream>
#include<cstdio>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[201] = { 0 };
	int dp[201] = { 0 };
	dp[0] = 1;
	int max, total_max = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i < n; i++) {
		max = 1;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				if (max < dp[j] + 1) {
					max = dp[j] + 1;
				}
			}
		}
		dp[i] = max;
		if (total_max < max)
			total_max = max;
	}
	cout << n - total_max << endl;
}