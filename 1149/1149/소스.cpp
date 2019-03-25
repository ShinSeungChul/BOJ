#include <iostream>
#include<string>
#include<cstdio>
#include<math.h>

#pragma warning(disable : 4996)

using namespace std;

int min(int a, int b) {
	return (a < b) ? a : b;
}

int main() {
	int houseNum;
	int **house;
	int **dp;

	cin >> houseNum;

	house = new int*[houseNum];
	dp = new int*[houseNum];
	for (int i = 0; i < houseNum; i++) {
		house[i] = new int[3];
		dp[i] = new int[3];
	}

	for (int i = 0; i < houseNum; i++) {
		cin >> house[i][0] >> house[i][1] >> house[i][2];
	}
	dp[0][0] = house[0][0];
	dp[0][1] = house[0][1];
	dp[0][2] = house[0][2];
	for (int i = 1; i < houseNum; i++) {
		dp[i][0] = house[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] = house[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] = house[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
	}
	cout << min(min(dp[houseNum - 1][0], dp[houseNum - 1][1]), dp[houseNum - 1][2]) << endl;
	return 0;
}