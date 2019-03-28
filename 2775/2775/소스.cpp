#include<iostream>
#include<cstdio>
#include<string.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int testCase, n, m;
	cin >> testCase;
	long long apt[15][15];
	for (int i = 0; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			if (j == 1)
				apt[i][j] = 1;
			else if (i == 0)
				apt[i][j] = j;
			else
				apt[i][j] = apt[i - 1][j] + apt[i][j - 1];
		}
	}
	while (testCase--) {
		cin >> n >> m;
		cout << apt[n][m] << endl;
	}
	return 0;
}