#include<iostream>
#include<string>

using namespace std;

int max(int a, int b) {
	return (a > b) ? a : b;
}

int main() {
	string word1, word2;
	int **dp;
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
			if (word1.at(i - 1) == word2.at(j - 1))
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	cout << dp[word1.length()][word2.length()] << endl;
	return 0;
}