#include<iostream>
#include<string>

using namespace std;

int min(int a, int b, int c) {
	return a<b ? a : b;
}

int main() {
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int dp[1001][1001] = { 0 };
	int size1 = s1.size();
	int size2 = s2.size();
	for (int i = 0; i <= size1; i++) {
		for (int j = 0; j <= size2; j++) {
			if ((i == 0) || (j == 0)) {
				dp[i][j] = (i | j);
			}
			else if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i][j - 1])) + 1;
			}
		}
	}
	cout << dp[size1][size2] << endl;
}