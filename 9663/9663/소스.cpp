#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int **queen;
long long cnt = 0;

bool check(int a, int b, int n) {
	int temp;
	for (int i = 0; i < a; i++) {
		if (queen[i][b])
			return false;
	}
	for (int i = 0; i < b; i++) {
		if (queen[a][i])
			return false;
	}
	temp = 1;
	while (1) {
		if (((a - temp) == -1) || ((b - temp) == -1))
			break;
		if (queen[a - temp][b - temp])
			return false;
		temp++;
	}
	temp = 1;
	while (1) {
		if (((a - temp) == -1) || ((b + temp) == n))
			break;
		if (queen[a - temp][b + temp])
			return false;
		temp++;
	}
	return true;
}

void solve(int a, int n) {
	for (int i = 0; i < n; i++) {
		if (check(a + 1, i, n)) {
			if (a + 1 == n - 1) {
				cnt++;
				return;
			}
			else {
				queen[a + 1][i] = 1;
				solve(a + 1, n);
				queen[a + 1][i] = 0;
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	queen = new int*[n];
	for (int i = 0; i < n; i++)
		queen[i] = new int[n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			queen[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		queen[0][i] = 1;
		solve(0, n);
		queen[0][i] = 0;
	}
	if (n == 1)
		cout << 1 << endl;
	else
		cout << cnt << endl;
	return 0;
}