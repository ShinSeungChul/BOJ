#include<iostream>
#include<cstdio>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, num;
	int seq1 = 0, seq2 = 1;
	long long dp[2][21] = { 0 };
	cin >> n;
	cin >> num;
	dp[0][num] = 1;
	for (int i = 0; i < n - 2; i++) {
		scanf("%d", &num);
		for (int j = 0; j < 21; j++) {
			if (dp[seq1][j]) {
				if (j - num >= 0)
					dp[seq2][j - num] += dp[seq1][j];
				if (j + num < 21)
					dp[seq2][j + num] += dp[seq1][j];
				dp[seq1][j] = 0;
			}
		}
		if (seq1) {
			seq1 = 0;
			seq2 = 1;
		}
		else {
			seq1 = 1;
			seq2 = 0;
		}

	}
	cin >> num;
	cout << dp[seq1][num] << endl;
}