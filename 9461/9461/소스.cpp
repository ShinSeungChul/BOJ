#include<iostream>
#include<string>

using namespace std;

long long dp[101];

int max(int a, int b) {
	return (a > b) ? a : b;
}

long long a(int n) {
	if ((n == 1) || (n == 2) || (n == 3))
		return 1;
	else if (dp[n])
		return dp[n];
	else
		return dp[n] = a(n - 2) + a(n - 3);
}

int main() {
	int testCase, n;
	cin >> testCase;
	for (int i = 0; i < testCase; i++) {
		cin >> n;
		cout << a(n) << endl;
	}
	return 0;
}