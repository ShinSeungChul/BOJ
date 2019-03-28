#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int *num;

bool check(int cur) {
	for (int i = cur - 1; i >= cur / 2; i--) {
		if (num[cur] == num[i]) {
			for (int j = 0; j < cur - i; j++) {
				if (num[cur - j] != num[i - j]) {
					break;
				}
				if (j == cur - i - 1) {
					return false;
				}
			}
		}
	}
	return true;
}

void display(int n) {
	for (int i = 0; i < n; i++)
		cout << num[i];
	cout << endl;
}

void solve(int cur, int n) {
	for (int i = 1; i < 4; i++) {
		num[cur] = i;
		if (check(cur)) {
			if (cur == n - 1) {
				display(n);
				exit(0);
			}
			solve(cur + 1, n);
		}
		num[cur] = 0;
	}
}

int main() {
	int n;
	cin >> n;
	num = new int[n];
	for (int i = 0; i < n; i++)
		num[i] = 0;
	solve(0, n);
	return 0;
}