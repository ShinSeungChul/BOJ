#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

void display();

int sudoku[9][9];
vector<pair<int, int> > zero;
int len;

bool check(int a, int b, int n) {
	int x, y;
	for (int i = 0; i < 9; i++) {
		if (n == sudoku[i][b])
			return false;
		if (n == sudoku[a][i])
			return false;
	}
	x = a / 3;
	y = b / 3;
	for (int i = x * 3; i < x * 3 + 3; i++) {
		for (int j = y * 3; j < y * 3 + 3; j++) {
			if (sudoku[i][j] == n)
				return false;
		}
	}
	return true;
}

void solve(int k) {
	int a, b;
	a = zero[k].first;
	b = zero[k].second;

	for (int j = 1; j < 10; j++) {
		if (check(a, b, j)) {
			sudoku[a][b] = j;
			if (k == len - 1) {
				display();
				return;
			}
			solve(k + 1);
			sudoku[a][b] = 0;
		}
	}
}

void display() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << sudoku[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> sudoku[i][j];
			if (!sudoku[i][j]) {
				zero.push_back({ i, j });
			}
		}
	}
	len = zero.size();
	solve(0);
	return 0;
}