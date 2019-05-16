#include<iostream>
#include<vector>
#include<cstdio>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, s, m;
	int vol;
	int temp1 = 0, temp2 = 1;
	bool a = false;
	int dp[2][1002] = { 0 };
	bool fin = false;
	cin >> n >> s >> m;
	cin >> vol;
	if (s - vol >= 0)
		dp[0][s - vol] = 1;
	if (s + vol <= m)
		dp[0][s + vol] = 1;
	for (int i = 2; i <= n; i++) {
		fin = true;
		scanf("%d", &vol);
		if (a) {
			temp1 = 0;
			temp2 = 1;
			a = false;
		}
		else {
			temp1 = 1;
			temp2 = 0;
			a = true;
		}
		for (int j = 0; j <= m; j++) {
			if (dp[temp2][j] == i - 1) {
				if (j - vol >= 0) {
					dp[temp1][j - vol] = i;
					fin = false;
				}
				if (j + vol <= m) {
					dp[temp1][j + vol] = i;
					fin = false;
				}
			}
		}
		if (fin) {
			break;
		}
	}
	if (!fin) {
		for (int i = m; i >= 0; i--) {
			if (dp[temp1][i] == n) {
				cout << i << endl;
				break;
			}
			if (i == 0)
				fin = true;
		}
	}
	if (fin)
		cout << -1 << endl;
}