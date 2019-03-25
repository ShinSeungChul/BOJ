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
	int num = 0;
	int a;
	int min;
	double temp;
	cin >> n;
	int *dp = new int[n + 1];
	dp[0] = 0;
	a = sqrt(n);
	dp[1] = 1;
	for (int i = 2; i < n + 1; i++) {
		temp = sqrt(i);
		dp[i] = dp[i - 1] + 1;
		for (int j = 2; j <= temp; j++) {
			if (dp[i] > dp[i - j*j] + 1)
				dp[i] = dp[i - j*j] + 1;
		}
	}
	cout << dp[n] << endl;
}