#include<iostream>
#include<string>

using namespace std;

int max(int a, int b) {
	return (a > b) ? a : b;
}

int main() {
	string word1, word2, LCS;
	int **dp;
	int k;
	cin >> word1;
	cin >> word2;
	dp = new int*[word1.length() + 1];
	for (int i = 0; i < word1.length() + 1; i++) {
		dp[i] = new int[word2.length() + 1];
	}
	for (int i = 0; i < word1.length() + 1; i++) {
		for (int j = 0; j < word2.length() + 1; j++) {
			dp[i][j] = 0;
		}
	}

	for (int i = 1; i < word1.length() + 1; i++) {
		for (int j = 1; j < word2.length() + 1; j++) {
			if (word1.at(i - 1) == word2.at(j - 1)) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	cout << dp[word1.length()][word2.length()] << endl;
	k = dp[word1.length()][word2.length()];
	k--;
	int i = word1.length();
	int j = word2.length();
	while (1) {
		if (((dp[i][j - 1]) == k) && ((dp[i - 1][j]) == k)) {
			LCS = word1.at(i - 1) + LCS;
			i--;
			j--;
			k--;
			if (i == 0 || j == 0)
				break;
		}
		else {
			if ((dp[i][j - 1]) > dp[i - 1][j])
				j--;
			else
				i--;
			if (i == 0 || j == 0)
				break;
		}
	}
	cout << LCS << endl;
	return 0;
}