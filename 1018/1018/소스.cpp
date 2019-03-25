#include<iostream>
#include<cstdio>
#include<string.h>

#pragma warning(disable:4996)

using namespace std;

int min(int a, int b) {
	return a < b ? a : b;
}

int main() {
	int m, n;
	int min = 64, fail = 0;
	bool isWhite = false;
	cin >> m >> n;
	char **board;
	board = new char*[m];
	for (int i = 0; i < m; i++) {
		board[i] = new char[n];
		cin >> board[i];
	}
	for (int x = 0; x < m - 7; x++) {
		for (int y = 0; y < n - 7; y++) {
			if (board[x][y] == 'W')
				isWhite = true;
			else
				isWhite = false;
			fail = 0;
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					if (isWhite) {
						if ((i + j) % 2) {
							if (board[x + i][y + j] == 'W')
								fail++;
						}
						else {
							if (board[x + i][y + j] == 'B')
								fail++;
						}
					}
					else {
						if ((i + j) % 2) {
							if (board[x + i][y + j] == 'B')
								fail++;
						}
						else {
							if (board[x + i][y + j] == 'W')
								fail++;
						}
					}
				}
			}
			if (fail > 32)
				fail = 64 - fail;
			if (min > fail)
				min = fail;
		}
	}
	cout << min << endl;
	return 0;
}