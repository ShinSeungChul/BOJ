#include<iostream>
#include<cstdio>

#pragma warning(disable:4996)

using namespace std;

int mul(int a, int b) {
	if (a - b > 0)
		return a - b;
	else
		return b - a;
}

int main() {
	int n;
	int arr[1001] = { 0 };
	int dp[1001] = { 0 };
	int max;
	cin >> n;
	cin >> arr[0];
	for (int i = 1; i < n; i++) {
		scanf("%d", &arr[i]);
		max = mul(arr[i], arr[0]);
		for (int j = 1; j <= i; j++) {
			if (max < (mul(arr[i], arr[j]) + dp[j - 1]))
				max = mul(arr[i], arr[j]) + dp[j - 1];
		}
		dp[i] = max;
	}
	cout << dp[n - 1] << endl;
}