#include <iostream>
#include<cstdio>
#include<math.h>

using namespace std;

long long int dp[31][31];

long long int permutation(int n, int m) {
	if (n == 1)
		return m;
	else if (n == m)
		return 1;
	else if (dp[n][m])
		return dp[n][m];
	else
		return dp[n][m] = permutation(n, m - 1) + permutation(n - 1, m - 1);
}

int main() {
	long long int testCase, n, m;

	cin >> testCase;
	for (int i = 0; i < testCase; i++) {
		cin >> n >> m;
		cout << permutation(n, m) << endl;
	}
	return 0;
}